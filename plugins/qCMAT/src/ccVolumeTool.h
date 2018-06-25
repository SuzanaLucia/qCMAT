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

#ifndef CC_VOLUME_TOOL_H
#define CC_VOLUME_TOOL_H

#include "ui_ccVolumeTool.h"
#include "ccStdPluginInterface.h"

//"no matching call for main window" bug
#include <QMainWindow>


// Dialog for qCMAT plugin
class ccVolumeTool : public QDialog, public Ui::ccVolumeTool
{
	Q_OBJECT

public:

	// Default constructor
	explicit ccVolumeTool(QWidget* parent = 0);

	void initializeTool(ccMainAppInterface* app);

	// Supported CSG operations
	//enum CSG_OPERATION { UNION, INTERSECT, DIFF, SYM_DIFF };

	// Set meshes names
	//void setNames(QString A, QString B);

	// Returns the selected operation
	//CSG_OPERATION getSelectedOperation() const { return m_selectedOperation; }

	// Returns whether mesh order has been swappped or not
	//bool isSwapped() const { return m_isSwapped; }

protected slots:
	/**
	void unionSelected();
	void intersectSelected();
	void diffSelected();
	void symDiffSelected();
	void swap();**/

protected:

	//link to the main plugin interface
	ccMainAppInterface* m_app;


	//CSG_OPERATION m_selectedOperation;
	//bool m_isSwapped;
};

#endif //CC_VOLUME_TOOL_H