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
#include <SimpleCloud.h>
#include <ccRasterGrid.h>



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
	void testConsole();
	void processClouds();
	void contourVolume();
protected:

	//link to the main plugin interface
	ccMainAppInterface* m_app;
	//point cloud / beach for which to calculate volume


	//CSG_OPERATION m_selectedOperation;
	//bool m_isSwapped;
private:

	float height;
	//Struct for reporting volume info
	struct ReportInfo
	{
		ReportInfo()
			: volume(0)
			, addedVolume(0)
			, removedVolume(0)
			, surface(0)
			, matchingPrecent(0)
			, ceilNonMatchingPercent(0)
			, groundNonMatchingPercent(0)
			, averageNeighborsPerCell(0)
		{}

		QString toText(int precision = 6) const;

		double volume;
		double addedVolume;
		double removedVolume;
		double surface;
		float matchingPrecent;
		float ceilNonMatchingPercent;
		float groundNonMatchingPercent;
		double averageNeighborsPerCell;
	};

	//calculates volume of beach between top and bottom
	float volumeBetweenHeights(ccHObject*, int, int);
	//get clouds to operate on, calculate based on user input
	bool ComputeVolume(	ccRasterGrid&,
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
										ccVolumeTool::ReportInfo&,
										double groundHeight = std::numeric_limits<double>::quiet_NaN(),
										double ceilHeight = std::numeric_limits<double>::quiet_NaN(),
										QWidget* parentWidget = 0);

};

#endif //CC_VOLUME_TOOL_H