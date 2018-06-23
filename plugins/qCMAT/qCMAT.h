#ifndef Q_CMAT_PLUGIN_HEADER
#define Q_CMAT_PLUGIN_HEADER

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

#include "ccStdPluginInterface.h"

/**
	The one method you are required to implement is 'getActions'. This should
	return all actions (QAction objects) for the plugin. CloudCompare will
	automatically add these with their icons in the plugin toolbar and to the
	plugin menu. If	your plugin returns	several actions, CC will create a
	dedicated toolbar and a	sub-menu for your plugin. You are responsible for
	connecting these actions to	methods in your plugin.

	Use the ccStdPluginInterface::m_app variable for access to most of the CC
	components (database, 3D views, console, etc.) - see the ccMainAppInterface
	class in ccMainAppInterface.h.
**/
class qCMAT : public QObject, public ccStdPluginInterface
{
	Q_OBJECT
	Q_INTERFACES(ccStdPluginInterface)
	Q_PLUGIN_METADATA(IID "cccorp.cloudcompare.plugin.qCMAT" FILE "info.json")

public:
	// Default Constructor
	explicit qCMAT( QObject *parent = nullptr );
	// Destructor
	virtual ~qCMAT() = default;

	// inherited from ccStdPluginInterface
	virtual void onNewSelection( const ccHObject::Container &selectedEntities ) override;
	virtual QList<QAction *> getActions() override;

private:

	/*** ADD YOUR CUSTOM ACTIONS HERE ***/
	void doAction();

	//! Default action
	/**
		Each action will correspond to an icon in the dedicated
		toolbar and an entry in the plugin menu.
	**/
	QAction* m_action;

	// Selected entities
	ccHObject::Container m_selectedEntities;
};

#endif
