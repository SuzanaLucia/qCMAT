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

#ifndef CC_QCMAT_DLG_HEADER
#define CC_QCMAT_DLG_HEADER

#include "ui_dlg.h"
#include "ccStdPluginInterface.h"

// Dialog for qCMAT plugin
class qCMATDlg : public QDialog, public Ui::CMATDlg
{
	Q_OBJECT

public:

	// Default constructor
	explicit qCMATDlg(QWidget* parent = 0);

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
	void cancelButtonClicked();
	void startVolumeDialog();
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

#endif //CC_CORK_DLG_HEADER
