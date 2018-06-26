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

// QT Libraries
#include <QtGui>
#include <QMainWindow>
// Plugin Libraries/Dependencies
#include "qCMAT.h"
#include "src/qCMATDlg.h"
// CloudCompare Libraries
#include <ccPointCloud.h>


// Default constructor:
// Constructor should mainly be used to initialize actions and other members
qCMAT::qCMAT(QObject *parent)
	: QObject(parent)
	, ccStdPluginInterface(":/CC/plugin/qCMAT/info.json")
	, m_action(nullptr)
{
}

/**
static ccPointClouds* GetCloudFromCombo(QComboBox* comboBox, ccHObject* ccDbRoot) {
	assert(comboBox && ccDbRoot); // Terminate program if combo box if params are empty
	if(!comboBox || !ccDbRoot)
	{
		assert(false); //Terminate
		return 0;
	}
	// Else...
	// Set i to be current index of comboBox (which point clouds have we selected?)
	int i = comboBox->currentIndex();
	// Ensure index counter is valid, else temrinate program.
	if(i<0) { assert(false); return 0;}
	// Ensure itemData is valid before...
	assert(comboBox->itemData(i).isValid());
	// ...casting to UINT and declaring as unique ID
	unsigned uid = comboBox->itemData(i).toUInt();
	ccHObject* item = ccDbRoot->find(uid);
	// If item is empty or is not a point cloud, terminate program.
	if(!item || !item->isA(CC_TYPES::POINT_CLOUD)) { assert(false); return 0;}
	// Return point cloud
	return static_cast<ccPointCloud*>(item);

}
**/

/** This method should enable or disable your plugin actions
    depending on the currently selected entities ('selectedEntities').**/
void qCMAT::onNewSelection(const ccHObject::Container &selectedEntities)
{
	if(m_action)
	{
		// Maximum number of input point clouds (2)
		m_action->setEnabled( selectedEntities.size() == 2
		/** Entities are what will be operating on,
		in this case we check to make sure what the user has input is indeed a point cloud**/
		&& selectedEntities[0]->isA(CC_TYPES::POINT_CLOUD)
		&& selectedEntities[1]->isA(CC_TYPES::POINT_CLOUD) );
		//return; TODO: Get rid of this, just quits program...
	}

	// For example - only enable our action if something is selected.
	//m_action->setEnabled( !selectedEntities.empty() );

	//KEEP ENABLED ALL THE TIME FOR TESTING PURPOSES
	m_action->setEnabled(true);
	m_selectedEntities = selectedEntities;
}

// This method returns all the 'actions' your plugin can perform.
// getActions() will be called only once, when plugin is loaded.
QList<QAction *> qCMAT::getActions()
{
	// default action (if it has not been already created, this is the moment to do it)
	if ( !m_action )
	{
		// Here we use the default plugin name, description, and icon,
		// but each action should have its own.
		m_action = new QAction( getName(), this );
		m_action->setToolTip( getDescription() );
		m_action->setIcon( getIcon() );

		// Connect appropriate signal
		connect( m_action, &QAction::triggered, this,
&qCMAT::doAction );
	}

	return QList<QAction *>{ m_action };
}

/** This is an example of an action's method called when the corresponding action
 		is triggered (i.e. the corresponding icon or menu entry is clicked in CC's
 		main interface). You can access most of CC components (database,
 		3D views, console, etc.) via the 'm_app' variable (see the ccMainAppInterface
 		class in ccMainAppInterface.h). **/
void qCMAT::doAction()
{
	m_app->dispToConsole( "[DEBUG] Starting qCMAT", ccMainAppInterface::STD_CONSOLE_MESSAGE );
	/**if ( m_app == nullptr )
	{
		// m_app should have already been initialized by CC when plugin is loaded
		Q_ASSERT( false );

		return;
	}**/

	// Terminate program if m_app has not been initialised yet
	assert(m_app);
	if(!m_app)
		return;

  // Declare CMAT Dialog and show
//TODO: this looks nicer if only m_app is provided as an argument

	if(m_selectedEntities.size() != 2
		|| !m_selectedEntities[0]->isA(CC_TYPES::POINT_CLOUD)
		|| !m_selectedEntities[0]->isA(CC_TYPES::POINT_CLOUD))
	{
		// If user has not input two point clouds, display error message.
		m_app->dispToConsole("[!] Requires TWO point clouds [!]", ccMainAppInterface::ERR_CONSOLE_MESSAGE);
	}
	else if (m_selectedEntities.size() == 2) {
		// Otherwise launch qCMAT Dialog UI
		qCMATDlg cdlg(m_app->getMainWindow());
		cdlg.initializeTool(m_app);
		// Initialise point clouds loaded
		cdlg.initPointClouds();
		cdlg.exec();
	}

}
