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

#include "glDlg.h"
#include <QString>
#include "../qCMAT.h"
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
#include <ccGLWindow.h>

//TODO: Most unaccessible libraries must be accessed through ../../../qCC
#include "../../../qCC/ccPointPickingGenericInterface.h"
#include "../../../qCC/ccPickingHub.h"
//#include <GL/GLU.h>
//#include <GL/GL.h>
//#include "../../../qCC/ccPickingListener.h"


glDlg::glDlg(QWidget* parent)
	: QDialog(parent, Qt::Tool)
	, Ui::glDlg()
	//, m_selectedOperation(UNION)
	//, m_isSwapped(false)
{
	setupUi(this);

	// Store a copy of the app
	//m_app = app

	// - SIGNAL and SLOTS section. -
	connect( cancelButton, SIGNAL(rejected()), this, SLOT(setup())); //(cancelButtonClicked()));
	//connect( volumePushButton,	SIGNAL(clicked()), this, SLOT( startVolumeDialog()));
	//connect(clearPushButton,	SIGNAL(clicked()), this, SLOT(clearPointClouds()));
	/**connect( viewPushButton,	SIGNAL(clicked()), this, SLOT( cancelButtonClicked() ));
	connect(interPushButton,	SIGNAL(clicked()), this, SLOT(intersectSelected()));
	connect(diffPushButton,		SIGNAL(clicked()), this, SLOT(diffSelected()));
	connect(symDiffPushButton,	SIGNAL(clicked()), this, SLOT(symDiffSelected()));
	connect(swapToolButton,		SIGNAL(clicked()), this, SLOT(swap)**/
}


void glDlg::cancelButtonClicked(){
	//the cancel button has been pressed, quit plugin execution
	m_app->dispToConsole( "Closing GL window...", ccMainAppInterface::STD_CONSOLE_MESSAGE );
	//close anything spawned by glDlg
	this->close();
}

void glDlg::setup()
{
	// QWidget, QGLFormat, QGLWidget, "false"
	/**
		QDialog > QWidget > QOpenGLWidget


		QWidget: widget
		QGLFormat:
		QGLWidget: displayBox
	**/

	//const QGLFormat &format = QGLFormat::defaultFormat();
	//ccGLWindow gl(widget, &format, displayBox,false);
	ccPickingHub ampersans(m_app, displayBox); // Type: ccPickingHub
	ccPickingHub* justPointer = &ampersans; // Type: pointer ccPickingHub
	/**ccGLWindow* win = m_app->getActiveGLWindow();

	

	std::vector<ccHObject*> clouds = m_app->getSelectedEntities();
	// Declare the two point clouds to operate on
	ccPointCloud* cloudy = ccHObjectCaster::ToPointCloud(clouds[1]);


	ampersans.togglePickingMode(true);
	**/
	//win->startPicking();
	//win->setPickingMode(POINT_PICKING);
	//std::string ampType = typeid(ampersans).name();
	//std::string pointType =typeid(justPointer).name();
	//printConsole("ampersans: [" + ampType + "]");
	//printConsole("justPointer: [" + pointType + "]");
	//ph.togglePickingMode(true);
	//ccPickingListener ah();
	//ph.addListener(ah, true, true);
	//ccMainAppInterface c(m_app->getMainWindow());
	/**
		Needs to be *,* [][][][] is at the moment &,*&
	**/

	//ccPointPickingGenericInterface c = new ccPointPickingGenericInterface(justPointer); //this not
	//c.start();
	// = new ccPointPickingGenericInterface
}
/**
void OGLWidget::initializeGL()
{
    glClearColor(0,0,0,1);
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_LIGHT0);
    glEnable(GL_LIGHTING);
    glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
    glEnable(GL_COLOR_MATERIAL);
}

void OGLWidget::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glBegin(GL_TRIANGLES);
        glColor3f(1.0, 0.0, 0.0);
        glVertex3f(-0.5, -0.5, 0);
        glColor3f(0.0, 1.0, 0.0);
        glVertex3f( 0.5, -0.5, 0);
        glColor3f(0.0, 0.0, 1.0);
        glVertex3f( 0.0,  0.5, 0);
    glEnd();
}

void OGLWidget::resizeGL(int w, int h)
{
    glViewport(0,0,w,h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45, (float)w/h, 0.01, 100.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(0,0,5,0,0,0,0,1,0);
}

**/
//store a copy of m_app
void glDlg::initializeTool(ccMainAppInterface* app)
{
	m_app = app; //store copy of app
}

// Takes in std::string to print to CC console.
void glDlg::printConsole(std::string inWord){
	QString msg = QString::fromStdString(inWord);
	m_app->dispToConsole(msg, ccMainAppInterface::STD_CONSOLE_MESSAGE);
}

// Takes in std::string to print to CC console as an error.
void glDlg::printError(std::string inWord){
	QString msg = QString::fromStdString(inWord);
	m_app->dispToConsole(msg, ccMainAppInterface::ERR_CONSOLE_MESSAGE);
}
