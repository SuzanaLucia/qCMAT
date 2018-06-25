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
#include <cstdlib>
#include <iostream>


qCMATDlg::qCMATDlg(QWidget* parent)
	: QDialog(parent, Qt::Tool)
	, Ui::CMATDlg()
	//, m_selectedOperation(UNION)
	//, m_isSwapped(false)
{
	setupUi(this);

	//store a copy of the app
	//m_app = app
	//Connect the cancel button
	connect( cancelButton, SIGNAL(rejected()), this, SLOT(cancelButtonClicked()));
	connect( volumePushButton,	SIGNAL(clicked()), this, SLOT( startVolumeDialog()));


	/**connect(unionPushButton,	SIGNAL(clicked()), this, SLOT(unionSelected()));
	connect( viewPushButton,	SIGNAL(clicked()), this, SLOT( cancelButtonClicked() ));
	connect(interPushButton,	SIGNAL(clicked()), this, SLOT(intersectSelected()));
	connect(diffPushButton,		SIGNAL(clicked()), this, SLOT(diffSelected()));
	connect(symDiffPushButton,	SIGNAL(clicked()), this, SLOT(symDiffSelected()));
	connect(swapToolButton,		SIGNAL(clicked()), this, SLOT(swap()));**/
}


void qCMATDlg::startVolumeDialog(){
	//start a dialog to query user + calculate volumes

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
}

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
