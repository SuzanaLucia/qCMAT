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

#include "ccVolumeTool.h"
#include <cstdlib>
#include <iostream>



ccVolumeTool::ccVolumeTool(QWidget* parent)
	: QDialog(parent, Qt::Tool)
	, Ui::ccVolumeTool()

{
	setupUi(this);

	/**connect(unionPushButton,	SIGNAL(clicked()), this, SLOT(unionSelected()));
	connect( viewPushButton,	SIGNAL(clicked()), this, SLOT( cancelButtonClicked() ));
	connect(interPushButton,	SIGNAL(clicked()), this, SLOT(intersectSelected()));
	connect(diffPushButton,		SIGNAL(clicked()), this, SLOT(diffSelected()));
	connect(symDiffPushButton,	SIGNAL(clicked()), this, SLOT(symDiffSelected()));
	connect(swapToolButton,		SIGNAL(clicked()), this, SLOT(swap()));**/
}


//store a copy of m_app
void ccVolumeTool::initializeTool(ccMainAppInterface* app)
{
	m_app = app; //store copy of app
}


float ccVolumeTool::volumeBetweenHeights(int bottom, int top){
	//int a = m_app->getSelectedEntities();
	return 0;

}