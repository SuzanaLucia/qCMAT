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

#ifndef CC_DISPLAY_SURFACE_H
#define CC_DISPLAY_SURFACE_H

//Include interdaces
#include "ui_displaySurface.h"
#include "ccStdPluginInterface.h"

//Qt includes
#include <QDialog>
#include <QMainWindow>
#include <QLineEdit>
#include <QMessageBox>

//Cloud Compare Includes 
#include <Delaunay2dMesh.h>
#include <PointProjectionTools.h>
#include <ccProgressDialog.h>
#include <ccRasterGrid.h>
#include <ccPointCloud.h>
#include <ccMaterialSet.h>
#include <ccScalarField.h>
#include <SimpleCloud.h>
#include <GenericCloud.h>

//MAX_COUDS --> toDo: remove, not in line with best coding practice
#define MAX_CLOUDS 100

class ccDisplaySurface : public QDialog, public Ui::displaySurface
{
	Q_OBJECT
/*
Calculate, display and save the Surface areas of selected point clouds
*/

public:
	ccDisplaySurface(QWidget* parent = 0, ccMainAppInterface* = 0, int = 0);
	~ccDisplaySurface();
protected slots:
	void closeDisplay();
	//Save surfaces to .csv file
	void saveCSV();

private:
	//store the surface areas once calculated
	float surfaces[MAX_CLOUDS];
	//number of clouds selected
	int noClouds;

	ccMainAppInterface* m_app;

	//calculates volume of beach between top and bottom
	float calcSurfaceWrapper(ccPointCloud*);
	//get clouds to operate on, calculate based on user input
	float ComputeSurface(	ccRasterGrid&,
										ccGenericPointCloud*,
										ccGenericPointCloud*,
										const ccBBox&,
										unsigned char,
										double,
										unsigned,
										unsigned,
										ccRasterGrid::ProjectionType,
										ccRasterGrid::EmptyCellFillOption,
										ccRasterGrid::EmptyCellFillOption,
										double groundHeight = std::numeric_limits<double>::quiet_NaN(),
										double ceilHeight = std::numeric_limits<double>::quiet_NaN(),
										QWidget* parentWidget = 0);
};



#endif // CC_DISPLAYVOLUME_H
