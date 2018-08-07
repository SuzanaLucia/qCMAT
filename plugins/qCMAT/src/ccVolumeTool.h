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

//Interface includes
#include "ccDisplayVolume.h"
#include "ui_ccVolumeTool.h"
#include "ccStdPluginInterface.h"

//include qCMAT tools
#include "ccQCMATTools.h"


//"no matching call for main window" bug
#include <QMainWindow>
#include <ccRasterGrid.h>
#include <ccPointCloud.h>

#include <ccMesh.h>
#include <ccMaterialSet.h>
#include <ccScalarField.h>
#include <SimpleCloud.h>
#include <GenericCloud.h>


//TODO: stop relying on defines
//Largest possible getSelectedEntities / noSlices --> used for array size
#define MAX_SLICES 100
#define MAX_CLOUDS 100


class ccVolumeTool : public QDialog, public Ui::ccVolumeTool
{
/*
Calculate / define contours and display / save or colour them and their volumes
*/
	Q_OBJECT

public:

	// Default constructor
	explicit ccVolumeTool(QWidget* parent = 0);

	void initializeTool(ccMainAppInterface* app);

	//link to the main plugin interface
	ccMainAppInterface* m_app;
	//point cloud / beach for which to calculate volume
	void cropPointCloud(CCLib::SimpleCloud*);

	//Variables for storing information about clouds during caluclations

	//top and bottom of pointcloud
	float maxTop;
	float maxBottom;
	//noSlices of sliceSize slices
	float sliceSize;
	int noSlices = 0;
	int noClouds = 0; //number of selected clouds
	//Slice / Cloud height
	//Selected cloud
	float userTop;
	float userBottom;
	//current slice and bottom
	float sliceTop;
	float sliceBottom;

	float height;

protected slots:
	void testConsole();
	void contourVolume();
	void displayVolmes();
	void saveVolume();
	void readCSVContours();
	void loadContVolume();
	void saveCloudContours();
	void closeDisplay();

private:


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
	float ComputeVolumeWrapper(ccPointCloud*);
	//get clouds to operate on, calculate based on user input
	float ComputeVolume(				ccRasterGrid&,
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

/*
Helper function - Splits string along deliminating character
*/
namespace QCMAT{
std::vector<std::string> split(const char *phrase, std::string delimiter);
};

#endif //CC_VOLUME_TOOL_H