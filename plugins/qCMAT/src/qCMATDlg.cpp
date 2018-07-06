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
#include "glDlg.h"
#include <cstdlib>
#include <iostream>
#include <ccPointCloud.h>
#include <QtGui>
#include <QMainWindow>
//include plugin features
#include "ccVolumeTool.h"
#include <ccGenericPointCloud.h>
#include <GenericIndexedCloudPersist.h>
#include <ccPolyline.h>

qCMATDlg::qCMATDlg(QWidget* parent)
	: QDialog(parent, Qt::Tool)
	, Ui::CMATDlg()
	//, m_selectedOperation(UNION)
	//, m_isSwapped(false)
{
	setupUi(this);

	// Store a copy of the app
	//m_app = app

	// - SIGNAL and SLOTS section. -
	connect( cancelButton, SIGNAL(rejected()), this, SLOT(cancelButtonClicked())); //(cancelButtonClicked()));
	connect( volumePushButton,	SIGNAL(clicked()), this, SLOT( startVolumeDialog()));
	connect( optionsPushButton,	SIGNAL(clicked()), this, SLOT( startGL()));
	//connect(clearPushButton,	SIGNAL(clicked()), this, SLOT(clearPointClouds()));
	/**connect( viewPushButton,	SIGNAL(clicked()), this, SLOT( cancelButtonClicked() ));
	connect(interPushButton,	SIGNAL(clicked()), this, SLOT(intersectSelected()));
	connect(diffPushButton,		SIGNAL(clicked()), this, SLOT(diffSelected()));
	connect(symDiffPushButton,	SIGNAL(clicked()), this, SLOT(symDiffSelected()));
	connect(swapToolButton,		SIGNAL(clicked()), this, SLOT(swap)**/
}

void qCMATDlg::startGL()
{
	glDlg g(m_app->getMainWindow());
	g.initializeTool(m_app);
	g.exec();
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
	//start a dialog to query user + calculate volumes
		//close this dialog
		this->close();
		//create the volume dialog
		ccVolumeTool volt(m_app->getMainWindow());
		volt.initializeTool(m_app);
		volt.exec();
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
	//ccPointCloud* cloud1 = ccHObjectCaster::ToPointCloud(clouds[0]);
	//ccPointCloud* cloud2 = ccHObjectCaster::ToPointCloud(clouds[1]);
	// Make sure clouds is not empty, and if it is display error.
	if(clouds.empty())
	{
		m_app->dispToConsole("No point clouds selected",ccMainAppInterface::STD_CONSOLE_MESSAGE);
	}
	// If clouds is not empty, continue...
	else if(!clouds.empty())
	{

/*
		// Declare boolean and cast to QString for conditional.
		bool c1_isCloudPoint = cloud1->isA(CC_TYPES::POINT_CLOUD); QString c1Bool = QString::number(c1_isCloudPoint);
		bool c2_isCloudPoint = cloud2->isA(CC_TYPES::POINT_CLOUD); QString c2Bool = QString::number(c2_isCloudPoint);
		// Ensure selected point clouds are now accessible by the plugin and are indeed of type POINT_CLOUD
		if(c1Bool == "1") {	m_app->dispToConsole("Point Cloud 1 loaded... ",ccMainAppInterface::STD_CONSOLE_MESSAGE);	}
		if(c2Bool == "1") {	m_app->dispToConsole("Point Cloud 2 loaded... ",ccMainAppInterface::STD_CONSOLE_MESSAGE);	}
*/		
	}
	else { m_app->dispToConsole("Something went wrong, quitting...",ccMainAppInterface::ERR_CONSOLE_MESSAGE); this->close(); }
	// Find names of point clouds...
//	QString cloud1Name = cloud1->getName();
//	QString cloud2Name = cloud2->getName();
	// ...and set the text boxes to display them.
//	pointCloudPath1->setText(cloud1Name);
//	pointCloudPath2->setText(cloud2Name);


}


void qCMATDlg::cancelButtonClicked(){
	//the cancel button has been pressed, quit plugin execution
	m_app->dispToConsole( "Quitting CMAP...", ccMainAppInterface::STD_CONSOLE_MESSAGE );
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

/**
void qCMATDlg::setNames(QString A, QString B)
{
	meshALineEdit->setText(A);
	meshBLineEdit->setText(B);
}


void qCMATDlg::unionSelected()
{
	m_selectedOperation = UNION;
	accept();
}m_action(nullptr)

void qCMATDlg::intersectSelected()
{
	m_selectedOperation = INTERSECT;
	accept();
}

void qCMATDlg::diffSelected()
{
	m_selectedOperation = DIFF;
	accept();
}

void qCMATDlg::symDiffSelected()
{
	m_selectedOperation = SYM_DIFF;
	accept();
}

void qCMATDlg::swap()
{
	m_isSwapped = !m_isSwapped;

	QString A = meshALineEdit->text();
	QString B = meshBLineEdit->text();
	setNames(B,A);
}
**/
