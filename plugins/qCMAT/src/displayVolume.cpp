#include "displayVolume.h"
#include "ui_displayVolume.h"
#include <string>
#include <QString>

displayVolume::displayVolume(QWidget* parent, float volumes[][102], int noSlices, int noClouds)
	: QDialog(parent, Qt::Tool)
	, Ui::displayVolume()
{
	setupUi(this);
	//connect cancel button
	connect( Close,	SIGNAL(clicked()), this, SLOT( closeDisplay() ));

	//get to displaying the text no need to store volumes internaly
//TODO: check its not empty, if so display a generate first message
	//write format to the top line
//TODO: multiple clouds
	Text->append(QString::fromStdString( std::to_string(noSlices) + " contours"));
	Text->append("[Slice no.]  ;  [bottom]  |  [top]  =  [volume1] [volume2] ...");
	//go through each contour and report results
	for(int i = 0; i < noSlices; i++){ //HIGHLY SUSPECT
		std::string output = std::to_string(i + 1) + "; "+ std::to_string(volumes[i][0]) + " | " + std::to_string(volumes[i][1]) + " = ";

		for(int j = 0; j < noClouds; j++){
			output += " " + std::to_string(volumes[i][j + 2]);
		}

		//for each contour line
			//construct a string in [bottom] - [top] = [volume]
		Text->append(QString::fromStdString( output));

	}

}



void displayVolume::closeDisplay(){
	this->close();
}


displayVolume::~displayVolume()
{
}
