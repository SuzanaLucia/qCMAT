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

#ifndef CC_SPLASH_SCREEN_H
#define CC_SPLASH_SCREEN_H


//Interface includes
#include "ui_splashScreen.h"
#include "ccStdPluginInterface.h"

//Qt includes
#include <QDialog>
#include <QMainWindow>
#include <QLineEdit>
#include <QWidget>

class ccSplashScreen : public QDialog, public Ui::splashScreen
{
/*
Display the splash screen ui before opening the main dialog
*/
	Q_OBJECT

public:
//TODOl fix max slices; const int?
	ccSplashScreen(QWidget*);
protected slots:
	//...
private:
	//delay; how long we want to show the splash screen for
	int DELAY = 500;
	void startDialog();
	//Sleep function, works for WINDOWS and LINUX
	void platformIndependantSleep(int sleepMs);
};

#endif // SPLASH_SCREEN_H
