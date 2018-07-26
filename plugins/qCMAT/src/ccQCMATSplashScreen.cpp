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


//Include header
#include "ccQCMATSplashScreen.h"

//stdlib includes
#include <string>



ccQCMATSplashScreen::ccQCMATSplashScreen(QWidget* parent, ccMainAppInterface* app)
	: QDialog(parent, Qt::Tool)
	, Ui::ccQCMATSplashScreen()
{
	setupUi(this);

	//initialize m_app
	m_app = app;
	//call the startDialog Funcion
	startDialog();
}

void ccQCMATSplashScreen::startDialog(){
	//Sleep for DELAY miliseconds
	//platformIndependantSleep(DELAY);
	//Close the dialog
	//this->close();
	//create an object and start the main dialog

	platformIndependantSleep(500);
}


void ccQCMATSplashScreen::platformIndependantSleep(int ms)
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

