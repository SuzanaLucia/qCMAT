//include the UI and main application
#include "ccExtractProfile.h"
#include <cmath>

//TODO: change this to anything else / let user decide
#define PROFILE_LINE_RADIUS 0.1

ccExtractProfile::ccExtractProfile(ccPickingHub* pickingHub, QWidget* parent, ccMainAppInterface* app)
	: ccPointPickingGenericInterface(pickingHub, parent)
	, Ui::extractProfile()
{
	//important for Qt
	setupUi(this);
	
	//Connect QObjects to appropriate functions
	//connect( QObjectClassName , SIGNAL( clicked() ), this, SLOT( functionToBeTriggered()));
	connect( ClosePushButton,	SIGNAL(clicked()), this, SLOT( closeDisplay() ));
	connect( PlotProfilesPush,	SIGNAL(clicked()), this, SLOT( plotProfiles() ));

	//initialize main application interface
	m_app = app;

}


//inherited from ccPointPickingGenericInterface
void ccExtractProfile::processPickedPoint(ccPointCloud* cloud, unsigned pointIndex, int x, int y){
	//m_app->dispToConsole("Point Picked my dude!");
	if(noPointsPicked == 0){
		//increment noPointsPicked
		noPointsPicked++;
		//add point info to first point
		cloud->getPoint(pointIndex, point1);
		//update first point stats
		P1X->setText(QString::fromStdString("X: " + std::to_string(point1[0])));
		P1Y->setText(QString::fromStdString("Y: " + std::to_string(point1[1])));
		P1Z->setText(QString::fromStdString("Z: " + std::to_string(point1[2])));
	} else {
		//if theres only one point
		if(noPointsPicked == 1){
			//increment noPointsPicked
			noPointsPicked++;
		}
		//move prev first to second
		point2 = point1;
		//add point info to first point
		cloud->getPoint(pointIndex, point1);
		//update fist and scond point stats
		P1X->setText(QString::fromStdString("X: " + std::to_string(point1[0])));
		P1Y->setText(QString::fromStdString("Y: " + std::to_string(point1[1])));
		P1Z->setText(QString::fromStdString("Z: " + std::to_string(point1[2])));
		P2X->setText(QString::fromStdString("X: " + std::to_string(point2[0])));
		P2Y->setText(QString::fromStdString("Y: " + std::to_string(point2[1])));
		P2Z->setText(QString::fromStdString("Z: " + std::to_string(point2[2])));
	}

}


void ccExtractProfile::closeDisplay(){
	/* Close the display */
	this->close();
}


void ccExtractProfile::plotProfiles(){
//TODO: add console updates
	//check we have 2 points
	if(noPointsPicked != 2){
		m_app->dispToConsole("[Profile Tool] Select 2 points to define the profile.");
		return;
	}
	//set number of clouds
	noClouds = m_app->getSelectedEntities().size();


	//make a vector to hold the rgb values
	std::vector<std::vector<int>> rgbScaleColors;

//TODO: use color scales
	//generate the color scale
	for(int i = 0; i < noClouds; i++){
		//make a new vector
		std::vector<int> col;
		//red
		col.push_back((int) 155.0 +  sqrt( (i * 100.0 * 100.0) / noClouds));
		//green
		col.push_back((int) 155.0 +  sqrt( ( (255.0) * i / noClouds)));
		//blue
		col.push_back(0);

		//add color to scale
		rgbScaleColors.push_back(col);
		}


	//line equation (normal form): (for dir vect d(l, m, n))
	// ((x - x1)/ l) = ((y - y1) / m)= ((z - z1) / n)

	//calulate direction vector
	dv = point2 - point1;

	//create cloud to hold plot
	ccPointCloud* profPlot = new ccPointCloud();

	//distance between each point and line
	double distance = 0.0;

	//reserve space in cloud tables
//TODO: there has got to be a less lazy way of doing this! large clouds are harbringers of destruction
	long pointTableSize = 0;
	for(int i = 0; i < noClouds; i++){
		pointTableSize += ccHObjectCaster::ToPointCloud(m_app->getSelectedEntities()[i])->size();
	}
	profPlot->reserveThePointsTable(pointTableSize);
	profPlot->reserveTheRGBTable();

	//for each selected cloud
	for(int i = 0; i < noClouds; i++){
		//save a copy of current cloud
		ccPointCloud* currCloud = ccHObjectCaster::ToPointCloud(m_app->getSelectedEntities()[i]);
		//for each point in current cloud
		for(int j = 0; j < currCloud->size(); j++){
			//get the coordinates of j-th point
			CCVector3 tempVect;
			currCloud->getPoint(j, tempVect); //get point values
			//check distance between point and line
			distance = distancePointToLine(tempVect, point1 , dv );
			
			//if point close enough
			if(distance <= PROFILE_LINE_RADIUS){
//TODO:: transform point
	// x = distance along line
	// y = z 						//Make it more like a 2D plot, so plot cloud BBox isnt messed up (eg line goes at an angle), maybe add a backgorund
	//z = 0
				//add point to cloud with color
				profPlot->addRGBColor(rgbScaleColors[i][0], rgbScaleColors[i][1], rgbScaleColors[i][2] ); //add same crap for testing purposes
				profPlot->addPoint(tempVect);
			}

		}
	}
	//display plot cloud
	profPlot->setCurrentDisplayedScalarField(0);
	m_app->addToDB(profPlot, /*updateZoom*/ false, /*autoExpandDBTree*/  true, /*checkDimensions*/ true, /*autoRedraw*/true);


}


 double ccExtractProfile::distancePointToLine( CCVector3 a, CCVector3 x0, CCVector3 dv)
 {
   /*
	calculate the distance between point a and line in 2D (collapsing z dimension)
	a = point
	x0 = base point of line
	dv = directional vector of line	

	|| vector(a - x0) x dv || / ||dv|| 
   */
 	//collapse z dimension of all 3
 	a[2] = 0.0;
 	x0[2] = 0.0;
 	dv[2] = 0.0;

 	CCVector3 vax0 = x0 - a;
 	CCVector3 vax0Xdv = vax0.cross(dv);
 	double numerator = vax0Xdv.normd();
 	double denominator = dv.normd();

 	return numerator / denominator;
}

ccExtractProfile::~ccExtractProfile()
{
}
