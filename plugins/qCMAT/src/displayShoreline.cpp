#include "displayShoreline.h"
#include "ui_displayShoreline.h"
#include <string>
#include <QString>
#include <fstream>
#include <QFileDialog>
#include "ccHObject.h"
#include "ccPointCloud.h"

qDisplayShoreline::qDisplayShoreline(QWidget* parent, ccMainAppInterface* app, int numberOfClouds)
	: QDialog(parent, Qt::Tool)
	, Ui::displayShoreline()
{
	setupUi(this);
	//connect cancel button
	connect( Close,	SIGNAL(clicked()), this, SLOT( closeDisplay() ));
	connect( Plot3D, SIGNAL(clicked()), this, SLOT( save3D() ));
//	connect( SaveCSV,	SIGNAL(clicked()), this, SLOT( saveCSV() ));

	//set local variables
	noClouds = numberOfClouds;
	m_app = app;




	//calculate a color for each clice
	//calclate contour colors
//TODO: replace with color scale
	for(int i = 0; i < noClouds; i++){
		//generate a num between 0 and 1 and multiply them with MAX of scale
		//this is our total number
		contourShore[i][0] = (int) 155.0 +  sqrt( (i * 100.0 * 100.0) / noClouds); //(int) i * (255.0 / noSlices);
		contourShore[i][1] = (int) ( (255.0) * i / noClouds);
		contourShore[i][2] = 0;
	}

}


//TODO: ADD WATER LEVEL


void qDisplayShoreline::save2D(){
	//get waterlevel
}

void qDisplayShoreline::save3D(){
	//make sure we have legit input
	if(WaterLevel->text().size() == 0){
		//report!
		m_app->dispToConsole("Enter a water level first.");
		//user hasnt entered input yet
		return;
	}
//TODO: handle non float bad input
	//get waterlevel
	float waterLevel = WaterLevel->text().toFloat();
	//get sensetivity; set reasonable default
	float Sensetivity = SensetivitySlider->value();; //how 'fuzzy' should out shoreline contour be
	Sensetivity *= 0.00001;
	CCVector3f cMin = ccHObjectCaster::ToPointCloud(m_app->getSelectedEntities()[0])->getOwnBB().minCorner();
	CCVector3f cMax = ccHObjectCaster::ToPointCloud(m_app->getSelectedEntities()[0])->getOwnBB().maxCorner();
//TODO: Fix math
	Sensetivity *= std::abs(cMax[2]) - std::abs(cMin[2]);
//TODO: get color scale


	//make empty cloud
	ccPointCloud* sl3DCloud = new ccPointCloud();

	//for each point in cloud
//TODO: get rid of the conservative estimate
	long pointTableSize = 0;
	for(int i = 0; i < noClouds; i++){
		pointTableSize += ccHObjectCaster::ToPointCloud(m_app->getSelectedEntities()[i])->size();
	}

	m_app->dispToConsole(QString::fromStdString(std::to_string(pointTableSize)));
	sl3DCloud->reserveThePointsTable(pointTableSize);
	sl3DCloud->reserveTheRGBTable();

	//for each cloud
	for(int i = 0; i < noClouds; i++){
		//for each point, save a temp cloud
		ccPointCloud* currCloud = ccHObjectCaster::ToPointCloud(m_app->getSelectedEntities()[i]);
		//for(int i = 0; )
//TODO: Make a nice loading bar
		for(int j = 0; j < currCloud->size(); j++){
			//get the point at j
			CCVector3 tempVect;
			currCloud->getPoint(j, tempVect); //get point values
			//check if point part of shoreline
			if(tempVect[2] >= (waterLevel - Sensetivity) && tempVect[2] < (waterLevel + Sensetivity)){
				//add to sl3DCloud and color
				sl3DCloud->addRGBColor(contourShore[i][0], contourShore[i][1], contourShore[i][2]); //add same crap for testing purposes
				sl3DCloud->addPoint(tempVect);	
				//add copy to new cloud
			} else {
				//if not add the point at the bottom to make it a 2D picture
//TODO TODO TODO TODO TODO TODO TODO TODO TODO TODO TODO TODO TODO TODO
		//AVOID MAKING THE GRAPH MASSIVE, MAYBE ONLY DO THIS FOR FIRST CLOUD
				//Use the color of original pixel
				sl3DCloud->addRGBColor(currCloud->getPointColor(j)); //add same crap for testing purposes
				//use the height of 
				tempVect[2] = waterLevel - Sensetivity;
				sl3DCloud->addPoint(tempVect);	
			}

		}

	}
	sl3DCloud->setCurrentDisplayedScalarField(0);
	//add cloud to DB
	m_app->addToDB(sl3DCloud, /*updateZoom*/ false, /*autoExpandDBTree*/  true, /*checkDimensions*/ true, /*autoRedraw*/true);
	//m_app->dispToConsole("Enter a water level first.");	
	m_app->dispToConsole(QString::fromStdString(std::to_string(sl3DCloud->size())));

}

void qDisplayShoreline::closeDisplay(){
	this->close();
}


qDisplayShoreline::~qDisplayShoreline()
{
}