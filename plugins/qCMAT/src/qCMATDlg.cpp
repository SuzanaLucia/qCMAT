//##########################################################################
//#                                                                        #
//#                CLOUDCOMPARE PLUGIN: qCMAT                              #
//#                                                                        #
//#  This program is free software; you can redistribute it and/or modify  #
//#  it under the terms of the GNU General Public License as published by  #
//#  the Free Software Foundation; version 2 of the License.               #
//#                                                                        #
//#  This program is distributed in the hope that it will be useful,       #
//#  but WITHOUT ANY WARRANTY; without even the implied warranty of        #
//#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         #
//#  GNU General Public License for more details.                          #
//#                                                                        #
//#                             COPYRIGHT: Lancaster University            #
//#                                                                        #
//##########################################################################

#include "qCMATDlg.h"
#include <QString>
#include "../qCMAT.h"
#include <cstdlib>
#include <iostream>
#include <ccPointCloud.h>
#include <QtGui>
#include <QMainWindow>

//include plugin features
#include "ccVolumeTool.h"
#include "ccDisplaySurface.h"
#include "ccDisplayShoreline.h"
#include "ccExtractProfile.h"

#include <ccGenericPointCloud.h>
#include <GenericIndexedCloudPersist.h>
#include <ccPolyline.h>



//Include the dummy header for accesing the dummy plugin
//#include <ccExtractProfile.h>

qCMATDlg::qCMATDlg(QWidget* parent)
	: ccOverlayDialog(parent)
	, Ui::CMATDlg()
	//, m_selectedOperation(UNION)
	//, m_isSwapped(false)
{
	setupUi(this);

	// Store a copy of the app
	//m_app = app

	// - SIGNAL and SLOTS section. -

//Connect the dumy Push buton with the viewButtonClicked method
	//connect( dummyFeaturePushButton, SIGNAL(clicked()), this, SLOT(viewButtonClicked()));

	connect( extractProfilePushButton, SIGNAL(clicked()), this, SLOT(startExtractProfileDialog()));
	connect( cancelButton, SIGNAL(rejected()), this, SLOT(cancelButtonClicked())); //(cancelButtonClicked()));
	connect( volumePushButton,	SIGNAL(clicked()), this, SLOT( startVolumeDialog()));
	connect( surfacePushButton,	SIGNAL(clicked()), this, SLOT( startSurfaceDialog()));
	connect( shorelinePushButton,	SIGNAL(clicked()), this, SLOT( startShorelineDialog()));

	//connect( optionsPushButton,	SIGNAL(clicked()), this, SLOT( startGL()));
	//connect(clearPushButton,	SIGNAL(clicked()), this, SLOT(clearPointClouds()));
	/**connect( viewPushButton,	SIGNAL(clicked()), this, SLOT( cancelButtonClicked() ));
	connect(interPushButton,	SIGNAL(clicked()), this, SLOT(intersectSelected()));
	connect(diffPushButton,		SIGNAL(clicked()), this, SLOT(diffSelected()));
	connect(symDiffPushButton,	SIGNAL(clicked()), this, SLOT(symDiffSelected()));
	connect(swapToolButton,		SIGNAL(clicked()), this, SLOT(swap)**/
}

void qCMATDlg::viewButtonClicked(){
// Make a dummy feature QObject and run it
//	dummyFeat dummy(m_app->getMainWindow(), m_app);
//	dummy.exec();
}

void qCMATDlg::startShorelineDialog(){
	//make sure there are clouds selected
	if(m_app->getSelectedEntities().empty()){
//TODO: make sure the selected entityes are clouds
		m_app->dispToConsole("[Shoreline] You need to select point clouds...");
		return;
	}
	//close and start shoreline dialog
	this->close();
	ccDisplayShoreline dispsh(m_app->getMainWindow(), m_app, m_app->getSelectedEntities().size());
	dispsh.exec();

}


// Takes in a ccPointCloud and returns a ccGenericPointCloud
ccGenericPointCloud* qCMATDlg::pointCloudToGeneric(ccPointCloud* pc)
{
	ccGenericPointCloud* out = pc;
	return out;
}

// Takes in a GenericPointCloud and returns a GenericIndexedCloudPersist object
CCLib::GenericIndexedCloudPersist* qCMATDlg::genericToIndexed(ccGenericPointCloud* gc)
{
	CCLib::GenericIndexedCloudPersist* out = gc;
	return out;
}

// Creates ccPolyline object based on input ccPointCloud
ccPolyline qCMATDlg::createPolyline(ccPointCloud* pc)
{
	ccPointCloud* pcTemp = pc;
	ccGenericPointCloud* gpcTemp = pointCloudToGeneric(pcTemp);
	CCLib::GenericIndexedCloudPersist* gicpTemp = genericToIndexed(gpcTemp);
	ccPolyline poly = ccPolyline(gicpTemp);
	return poly;
}


void qCMATDlg::startVolumeDialog(){
	//make sure there are clouds selected
	if(m_app->getSelectedEntities().empty()){
//TODO: make sure the selected entityes are clouds
		m_app->dispToConsole("[Volume] You need to select point clouds...");
		return;		
	}
	//start a dialog to query user + calculate volumes
		//close this dialog
		this->close();
		//create the volume dialog
		ccVolumeTool volt(m_app->getMainWindow());
		volt.initializeTool(m_app);
		volt.exec();
}

void qCMATDlg::startSurfaceDialog(){
	if(m_app->getSelectedEntities().empty()){
//TODO: make sure the selected entityes are clouds
		m_app->dispToConsole("[Surface] You need to select point clouds...");
		return;		
	}
	//start a dialog to query user + calculate volumes
		//close this dialog
		this->close();
		//create the volume dialog
		ccDisplaySurface surf(m_app->getMainWindow(), m_app, m_app->getSelectedEntities().size());
		//.initializeTool(m_app);
		surf.exec();
}


void qCMATDlg::startExtractProfileDialog(){
	/*
	Start the dialog for extracting and visualizing profiles
	*/
	//make sure there are clouds selected
	if(m_app->getSelectedEntities().empty()){
//TODO: make sure the selected entityes are clouds
		m_app->dispToConsole("[Profiles] You need to select point clouds...");
		return;
	}
	this->close();
	//create the volume dialog //TODO: check there is a picking hub in the first place etc...
	ccExtractProfile prof(m_app->pickingHub(), m_app->getMainWindow(), m_app);
	prof.linkWith(m_app->getActiveGLWindow());
	prof.start();
	prof.exec();
}

/**
* Initialises point clouds selected by user and displays point clouds' names in text boxes.
* Also ensures that point clouds are indeed of type POINT_CLOUD and that they are accessible
* to the qCMATDlg file.
**/
void qCMATDlg::initPointClouds()
{
	//FIXME: Elements MUST BE HIGHLIGHTED!!!!!!!!!! (not an issue just something to be wary of)

	// Declare clouds to be equal to point clouds selected in DB Tree (Sidebar)
	std::vector<ccHObject*> clouds = m_app->getSelectedEntities();
	// Declare the two point clouds to operate on

//TODO: Sorry fam, needed to kill this feature :(
	if(clouds.empty())
	{
		m_app->dispToConsole("[qCMAT] No point clouds selected, select the clouds you wish to analyze",ccMainAppInterface::STD_CONSOLE_MESSAGE);
	}
	// If clouds is not empty, continue...
	else if(!clouds.empty())
	{

/*
		// Declare boolean and cast to QString for conditional.
		bool c1_isCloudPoint = cloud1->isA(CC_TYPES::POINT_CLOUD); QString c1Bool = QString::number(c1_isCloudPoint);
		bool c2_isCloudPoint = cloud2->isA(CC_TYPES::POINT_CLOUD); QString c2Bool = QString::number(c2_isCloudPoint);
*/		
	}
	else { m_app->dispToConsole("Something went wrong, quitting...",ccMainAppInterface::ERR_CONSOLE_MESSAGE); this->close(); }
}

void qCMATDlg::cancelButtonClicked(){
	//the cancel button has been pressed, quit plugin execution
	m_app->dispToConsole( "Quitting qCMAT...", ccMainAppInterface::STD_CONSOLE_MESSAGE );
	//close anything spawned by qCMATDlg
	this->close();
}

//store a copy of m_app
void qCMATDlg::initializeTool(ccMainAppInterface* app)
{
	m_app = app; //store copy of app
}

// Takes in std::string to print to CC console.
void qCMATDlg::printConsole(std::string inWord){
	QString msg = QString::fromStdString(inWord);
	m_app->dispToConsole(msg, ccMainAppInterface::STD_CONSOLE_MESSAGE);
}

// Takes in std::string to print to CC console as an error.
void qCMATDlg::printError(std::string inWord){
	QString msg = QString::fromStdString(inWord);
	m_app->dispToConsole(msg, ccMainAppInterface::ERR_CONSOLE_MESSAGE);
}



