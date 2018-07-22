//##########################################################################
//#                                                                        #
//#                           		 qCMAT								   #
//#					(Coastal Management Analysis Toolbox)			  	   #
//#                                                                        #
//#  This program is free software; you can redistribute it and/or modify  #
//#  it under the terms of the GNU Library General Public License as       #
//#  published by the Free Software Foundation; version 2 of the License.  #
//#                                                                        #
//#  This program is distributed in the hope that it will be useful,       #
//#  but WITHOUT ANY WARRANTY; without even the implied warranty of        #
//#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         #
//#  GNU General Public License for more details.                          #
//#                                                                        #
//#         COPYRIGHT: Lancaster University Environment Center 2017        #
//#           WRITTEN BY: Liam O'Hanlon & Arthur-Louis Heath               #
//##########################################################################

//include main dialog
#include "qCMATDlg.h"
//Include header
#include "ccSplashScreen.h"
//stdlib includes
#include <string>

//platform dependant include
#ifdef LINUX
#include <unistd.h>
#endif
#ifdef WINDOWS
#include <windows.h>
#endif

ccSplashScreen::ccSplashScreen(QWidget* parent)
	: QDialog(parent, Qt::Tool)
	, Ui::splashScreen()
{
	setupUi(this);

	//call the startDialog Funcion
	startDialog();
}

void ccSplashScreen::startDialog(){
	//Sleep for DELAY miliseconds 
	platformIndependantSleep(DELAY);
	//create an object and start the main dialog
	qCMATDlg cdlg(m_app->getMainWindow());
	cdlg.initializeTool(m_app);
	// Initialise point clouds loaded
	cdlg.initPointClouds();
	cdlg.exec();
}


void ccSplashScreen::platformIndependantSleep(int ms)
{
/*
Pause thread execution for ms miliseconds
*/
#ifdef LINUX
    usleep(ms * 1000);   // usleep takes sleep time in us (1 millionth of a second)
#endif
#ifdef WINDOWS
    Sleep(ms);
#endif
}

