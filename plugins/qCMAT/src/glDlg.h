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

#ifndef CC_GL_DLG_HEADER
#define CC_GL_DLG_HEADER

#include "ui_glDlg.h"
#include "ccStdPluginInterface.h"
#include <QWidget>
#include <QOpenGLWidget>
//#include <gl/GLU.h>
//#include <gl/GL.h>
#include <GenericIndexedCloudPersist.h>
// Dialog for qCMAT plugin
class glDlg : public QDialog, public Ui::glDlg
{
	Q_OBJECT

public:
	void printConsole();
	ccGenericPointCloud* pointCloudToGeneric(ccPointCloud* pc);
	CCLib::GenericIndexedCloudPersist* genericToIndexed(ccGenericPointCloud* gc);
	ccPolyline createPolyline(ccPointCloud* pc);
	void testy();


	// Default constructor
	explicit glDlg(QWidget* parent = 0);

	void initializeTool(ccMainAppInterface* app);
	//void initPointClouds();

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
	//void startVolumeDialog();
	void setup();

	void printConsole(std::string);
	void printError(std::string);



	/**
	void unionSelected();
	void intersectSelected();
	void diffSelected();
	void symDiffSelected();
	void swap();**/

protected:

	//link to the main plugin interface
	ccMainAppInterface* m_app;
	/**void initializeGL();
  void resizeGL(int w, int h);
  void paintGL();**/

	//CSG_OPERATION m_selectedOperation;
	//bool m_isSwapped;
};

#endif //CC_CORK_DLG_HEADER
