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

#include "ccDisplayVolume.h"
#include "ui_ccVolumeTool.h"
#include "ccStdPluginInterface.h"

//"no matching call for main window" bug
#include <QMainWindow>
#include <SimpleCloud.h>
#include <ccRasterGrid.h>
#include <ccPointCloud.h>
#include <unistd.h>

//stuff for crop
#include <ccMesh.h>
#include <ccMaterialSet.h>
#include <ccScalarField.h>
#include <SimpleCloud.h>
#include <GenericCloud.h>

#define MAX_SLICES 100
#define MAX_CLOUDS 100


// Dialog for qCMAT plugin
class ccVolumeTool : public QDialog, public Ui::ccVolumeTool
{
	Q_OBJECT

public:

	ccHObject* mainCloud;
	// Default constructor
	explicit ccVolumeTool(QWidget* parent = 0);

	void initializeTool(ccMainAppInterface* app);


	//top and bottom of pointcloud
	float maxTop;
	float maxBottom;
	// noSlices of sliceSize slices
	float sliceSize;
	int noSlices = 0;
	int noClouds = 0; //number of selected clouds
	//selected stuff
	float userTop;
	float userBottom;
	//current slice and bottom
	float sliceTop;
	float sliceBottom;

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
	//declaration for display volume
	void displayVolmes();
	void saveVolume();
	void readCSVContours();
	void loadContVolume();
	void saveCloudContours();
protected:

	//link to the main plugin interface
	ccMainAppInterface* m_app;
	//point cloud / beach for which to calculate volume
	void cropPointCloud(CCLib::SimpleCloud*);

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
	float volumeBetweenHeights(float, float, ccPointCloud*);
	//get clouds to operate on, calculate based on user input
	float ComputeVolume(	ccRasterGrid&,
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
	//data structure to save [Volume][Bottom][Top] of slices
	float sliceInfo[MAX_SLICES][MAX_CLOUDS + 2]; //[bottom] [top] : [Cloud volumes in order][][][]
	//crop a point cloud
	//ccHObject* Crop(ccHObject* entity, const ccBBox& box, bool inside/*=true*/, const ccGLMatrix* meshRotation/*=0*/);
	ccPointCloud* normalizeCloud(ccPointCloud* cloud, float bottom, float top);
	//void contourPoints(const CCVector3 &, ScalarType &);

	

};

//split extra funtion
std::vector<std::string> split(const char *phrase, std::string delimiter);
//hue2rgb extra function
static float hue2rgb(float m1, float m2, float hue);

#endif //CC_VOLUME_TOOL_H