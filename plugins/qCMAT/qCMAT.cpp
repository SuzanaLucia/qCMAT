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
#include <QSplashScreen>
#include <QPixmap>
#include <QTimer>
#include <qthread.h>
// Plugin Libraries/Dependencies
#include "qCMAT.h"
#include "src/ccQCMATSplashScreen.h" //attempted move to starting splash screen
#include "src/qCMATDlg.h"
// CloudCompare Libraries
#include <ccPointCloud.h>
#include <ccPickingHub.h>


//platform dependant includes (for sleep)
#ifdef LINUX
#include <unistd.h>
#endif
#ifdef WINDOWS
#include <windows.h>
#endif

//TODO: REMOVE / RENAME THIS
class SleepThread : public QThread
{
public:
    static void sleep(unsigned long secs) { QThread::sleep(secs); }
};




// Default constructor:
// Constructor should mainly be used to initialize actions and other members
qCMAT::qCMAT(QObject *parent)
	: QObject(parent)
	, ccStdPluginInterface(":/CC/plugin/qCMAT/info.json")
	, m_action(nullptr)
{
}

/** This method should enable or disable your plugin actions
    depending on the currently selected entities ('selectedEntities').**/
void qCMAT::onNewSelection(const ccHObject::Container &selectedEntities)
{
	if(m_action)
	{
		// Maximum number of input point clouds (2)
		//m_action->setEnabled( selectedEntities.size() == 2
		/** Entities are what will be operating on,
		in this case we check to make sure what the user has input is indeed a point cloud**/
		//&& selectedEntities[0]->isA(CC_TYPES::POINT_CLOUD)
		//&& selectedEntities[1]->isA(CC_TYPES::POINT_CLOUD) );
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
	m_app->dispToConsole( "Starting qCMAT", ccMainAppInterface::STD_CONSOLE_MESSAGE );
	/**if ( m_app == nullptr )
	{
		// m_app should have already been initialized by CC when plugin is loaded
		Q_ASSERT( false );

		return;
	}**/
	startPicking();

	// Terminate program if m_app has not been initialised yet
	assert(m_app);
	if(!m_app)
		return;

  // Declare CMAT Dialog and show
//TODO: this looks nicer if only m_app is provided as an argument

	//if(m_selectedEntities.size() != 2
	//	|| !m_selectedEntities[0]->isA(CC_TYPES::POINT_CLOUD)
	//	|| !m_selectedEntities[0]->isA(CC_TYPES::POINT_CLOUD) )
	//{
		// If user has not input two point clouds, display error message.
	//	m_app->dispToConsole("[!] Requires TWO point clouds [!]", ccMainAppInterface::ERR_CONSOLE_MESSAGE);
	//}
	//else if (m_selectedEntities.size() == 2) {
		// Otherwise launch qCMAT Dialog UI

		//ccQCMATSplashScreen* splScreen = new ccQCMATSplashScreen(m_app->getMainWindow(), m_app);
		//splScreen->exec();

		Q_INIT_RESOURCE(qCMAT);

	    QPixmap* pixmap = new QPixmap(200, 200);
	    pixmap->fill(Qt::blue);

	    //TESTING CODE
	   	//if(*pixmap == QPixmap()){
	   	//	m_app->dispToConsole("Hello World!");
	   	//}
	    
//	    QSplashScreen splash(*pixmap);
//	    splash.show();



//TEMPORARY THINGIE
	    stopPicking();

  	    qCMATDlg cdlg(m_app->getMainWindow());
  	    //Link
  	    cdlg.linkWith(m_app->getActiveGLWindow());
	    cdlg.initializeTool(m_app);
		// Initialise point clouds loaded
		cdlg.initPointClouds();

		//Works quite nicely actually
//	    SleepThread::sleep(2);

//		splash.finish(&cdlg);

		cdlg.start();
		cdlg.exec();

	//}

}

//This function is called when a point is picked through picking hub
void qCMAT::onItemPicked(const ccPickingListener::PickedItem& pi)
{
	pointPicked(pi.entity, pi.itemIndex, pi.clickPoint.x(), pi.clickPoint.y(), pi.P3D); //map straight to pointPicked function
}

//Process picked points
void qCMAT::pointPicked(ccHObject* entity, unsigned itemIdx, int x, int y, const CCVector3& P)
{
	if (!entity) //null pick
	{
		return;
	}

	//no active tool (i.e. picking mode) - set selected object as active
	if (!m_activeTool)
	{
		m_app->setSelectedInDB(entity, true);
		return;
	}
/*

	//find relevant node to add data to
	ccHObject* parentNode = getInsertPoint();
	
	if (parentNode == nullptr) //could not get insert point for some reason
	{
		return; //bail
	}

	//ensure what we are writing too is visible (avoids confusion if it is turned off...)
	parentNode->setEnabled(true); 

	//call generic "point-picked" function of active tool
	m_activeTool->pointPicked(parentNode, itemIdx, entity, P);

	//have we picked a point cloud?
	if (entity->isKindOf(CC_TYPES::POINT_CLOUD))
	{
		//get point cloud
		ccPointCloud* cloud = static_cast<ccPointCloud*>(entity); //cast to point cloud

		if (!cloud)
		{
			ccLog::Warning("[Item picking] Shit's fubar (Picked point is not in pickable entities DB?)!");
			return;
		}

		//pass picked point, cloud & insert point to relevant tool
		m_activeTool->pointPicked(parentNode, itemIdx, cloud, P);
	}

	*/
	//redraw
	m_app->updateUI();
	m_app->getActiveGLWindow()->redraw();
}


//registers this plugin with the picking hub
bool qCMAT::startPicking()
{
	if (m_picking) //already picking... don't need to add again
		return true;


	//activate "point picking mode"
	if (!m_app->pickingHub())  //no valid picking hub
	{
		m_app->dispToConsole("[qCMAT] Could not retrieve valid picking hub. Measurement aborted.", ccMainAppInterface::ERR_CONSOLE_MESSAGE);
		return false;
	}


	if (!m_app->pickingHub()->addListener(this, true, true))
	{
		m_app->dispToConsole("Another tool is already using the picking mechanism. Stop it first", ccMainAppInterface::ERR_CONSOLE_MESSAGE);
		return false;
	}

	m_picking = true;
	return true;

}


//removes this class from the picking hub
void  qCMAT::stopPicking()
{
	//stop picking
	if (m_app->pickingHub())
	{
		m_app->pickingHub()->removeListener(this);
	}

	m_picking = false;
}
