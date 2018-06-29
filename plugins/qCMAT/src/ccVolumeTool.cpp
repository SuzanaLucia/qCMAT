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


#include "ccVolumeTool.h"
#include "ccHObject.h"
#include "SimpleCloud.h"
#include "ui_ccVolumeTool.h"


#include <cstdlib>
#include <iostream>
#include <vector>
#include <CloudSamplingTools.h>
#include <string>

//ccLib
#include <Delaunay2dMesh.h>
#include <PointProjectionTools.h>
#include <ccProgressDialog.h>

//cute <3
#include <QMessageBox>
#include <QSettings>
#include <QLineEdit>

ccVolumeTool::ccVolumeTool(QWidget* parent)
	: QDialog(parent, Qt::Tool)
	, Ui::ccVolumeTool()

{
	setupUi(this);

	connect( DisplayVolume,	SIGNAL(clicked()), this, SLOT( processClouds() ));
	connect( CalcVolButton,	SIGNAL(clicked()), this, SLOT( testConsole()));
	//connect( pushButton_3,	SIGNAL(clicked()), this, SLOT( testConsole()));
	connect( saveButton,	SIGNAL(clicked()), this, SLOT( contourVolume())); //presumably save
	//connect( pushButton_1,	SIGNAL(clicked()), this, SLOT( testConsole()));
	/**connect(unionPushButton,	SIGNAL(clicked()), this, SLOT(unionSelected()));
	connect( viewPushButton,	SIGNAL(clicked()), this, SLOT( cancelButtonClicked() ));
	connect(interPushButton,	SIGNAL(clicked()), this, SLOT(intersectSelected()));
	connect(diffPushButton,		SIGNAL(clicked()), this, SLOT(diffSelected()));
	connect(symDiffPushButton,	SIGNAL(clicked()), this, SLOT(symDiffSelected()));
	connect(swapToolButton,		SIGNAL(clicked()), this, SLOT(swap()));**/
}

void ccVolumeTool::testConsole(){
	m_app->dispToConsole("Hi there from testConsole()!");
}


//store a copy of m_app
void ccVolumeTool::initializeTool(ccMainAppInterface* app)
{
	m_app = app; //store copy of app


	//do calculations regarding cloud height
		//chop up cloud based on user input
		//get the height of the whole cloud
	//well need z coordinates from bbox min and max
			//get coresponding ccBBox
		ccHObject* cloud = m_app->getSelectedEntities()[0];


			ccBBox cBox = cloud->getOwnBB();
			//get top and bottom out of it
			CCVector3f cMin = cBox.minCorner();
			CCVector3f cMax = cBox.maxCorner();
			//take max z - min z
			height = cMax[2] - cMin[2];
//TESTING CODE
//This now works! m_app->dispToConsole(std::to_string(height).c_str());
		std::string message = std::to_string(cBox.minCorner()[2]) + " - " + std::to_string(cBox.maxCorner()[2]) + " : " + std::to_string(height) + " tot.";
		//display default value to the user
			heightDisplay->setText(QString::fromStdString(message));
			topInput->setText(QString::fromStdString(std::to_string(cBox.maxCorner()[2])));
			bottomInput->setText(QString::fromStdString(std::to_string(cBox.minCorner()[2])));
			
}

void ccVolumeTool::processClouds(){
	/*
	Loop through selected entities and calculate the volume based on user parameters,
	then display or save it appropriatly
	*/


//TODO: Assumtion is that theyre all legit clouds	
	const std::vector<ccHObject*> clouds = m_app->getSelectedEntities();

	//chop up cloud based on user input
		//get the height of the whole cloud

		//display it to the user somehow

		//query size of users section

	volumeBetweenHeights( clouds[0], 0, 0 );
}


void ccVolumeTool::contourVolume(){
		//get users chunk size
		float userBottom = maxBottom;
		float userTop = maxTop;
		userBottom = bottomInput->text().toFloat() + 0.01;  //Need to add small amount for float accuracy
		userTop = topInput->text().toFloat() - 0.01;       
		//get number of slices
		noSlices = noSliceInput->text().toFloat();
		//make sure its legit
		//if(userTop > maxTop || userBottom < maxBottom){
		//	m_app->dispToConsole("Error, chosen contrours not in cloud!");
		//	return;
		//}
		//calculate the size of each chunk
		sliceSize = height / noSlices;

		//for each slice
		for(int i = 0; i < noSlices; i++){
			//save top and bottom
			sliceInfo[i][1] = userBottom + i * sliceSize;		//Bottom of slice
			sliceInfo[i][2] = userBottom + (i + 1) * sliceSize;	//Top of slice
			//calculate its volume

			//report and save it
		}
//TODO: store this into some sort of sensible data structure

}


float ccVolumeTool::volumeBetweenHeights( ccHObject* cloud, int bottom, int top){
	//get a list of all the clouds i guess | Assume its just one Cloud selected and given as argument
		//for now ignore min and max limits
	//start off by just displaying the volume
		//Fool! You thought that would be easy!

	//make a volume tool object, dont display it
	//force set all the settings and then call its calculate method

	//store the result of the volume computation
	ReportInfo result;
	ccRasterGrid grid;

	//get bbox;
	/*
	ccBBox gridBBox = m_cloud1 ? m_cloud1->getOwnBB() : ccBBox(); 
	if (m_cloud2)
	{
		gridBBox += m_cloud2->getOwnBB();
	}
	*/
	//temporary code to get gridBBox


	//code for getting the projection dimension
	/*
	int dim = projDimComboBox->currentIndex();
	assert(dim >= 0 && dim < 3);

	return static_cast<unsigned char>(dim);
	*/
	//specify grid step, 0.5 seems sensible
	float gridStep = 0.5;

	ccBBox gridBBox = cloud->getOwnBB();
	//get grid width and height
	unsigned& gridWidth = *(new unsigned);
	unsigned& gridHeight = *(new unsigned);

	//get volume box size
	ccBBox box = ccBBox();

	ccRasterGrid::ComputeGridSize(2, gridBBox, gridStep, gridWidth, gridHeight);

	//std::cerr << "Width : " << gridHeight << std::endl;

	//projection type
	/*
	enum ProjectionType {	PROJ_MINIMUM_VALUE			= 0,
							PROJ_AVERAGE_VALUE			= 1,
							PROJ_MAXIMUM_VALUE			= 2,
							INVALID_PROJECTION_TYPE		= 255,
	};
	*/



	ComputeVolume(
			grid, //raster grid
			0,  //ground
			ccHObjectCaster::ToGenericPointCloud(cloud),	//cieling
			gridBBox,		//grid box
			2,			//vert dimension, assume z
			gridStep,			//grid step
			gridWidth,		//grid width
			gridHeight,			//grid height
			ccRasterGrid::ProjectionType::PROJ_AVERAGE_VALUE,					//projection type
			ccRasterGrid::EmptyCellFillOption::LEAVE_EMPTY,			//fill ground empty cells strat
			ccRasterGrid::EmptyCellFillOption::LEAVE_EMPTY,			//fill ciel empty cells strat
			result,			//report info into result
			0.0 ,			//ground height
			0.0 ,			//ciel height
			m_app->getMainWindow()		//parent widget
			);

	//Print the computed volume
	m_app->dispToConsole(std::to_string(result.volume).c_str());

	return 0;
}


bool ccVolumeTool::ComputeVolume(	ccRasterGrid& grid,
										ccGenericPointCloud* ground,
										ccGenericPointCloud* ceil,
										const ccBBox& gridBox,
										unsigned char vertDim,
										double gridStep,
										unsigned gridWidth,
										unsigned gridHeight,
										ccRasterGrid::ProjectionType projectionType,
										ccRasterGrid::EmptyCellFillOption groundEmptyCellFillStrategy,
										ccRasterGrid::EmptyCellFillOption ceilEmptyCellFillStrategy,
										ccVolumeTool::ReportInfo& reportInfo,
										double groundHeight,
										double ceilHeight,
										QWidget* parentWidget)
{
	if (	gridStep <= 1.0e-8
		||	gridWidth == 0
		||	gridHeight == 0
		||	vertDim > 2)
	{
		assert(false);
		ccLog::Warning("[Volume] Invalid input parameters");
		return false;
	}

	if (!ground && !ceil)
	{
		assert(false);
		ccLog::Warning("[Volume] No valid input cloud");
		return false;
	}

	if (!gridBox.isValid())
	{
		ccLog::Warning("[Volume] Invalid bounding-box");
		return false;
	}

	//grid size
	unsigned gridTotalSize = gridWidth * gridHeight;
	if (gridTotalSize == 1)
	{
		if (parentWidget && QMessageBox::question(parentWidget, "Unexpected grid size", "The generated grid will only have 1 cell! Do you want to proceed anyway?", QMessageBox::Yes, QMessageBox::No) == QMessageBox::No)
			return false;
	}
	else if (gridTotalSize > 10000000)
	{
		if (parentWidget && QMessageBox::question(parentWidget, "Big grid size", "The generated grid will have more than 10.000.000 cells! Do you want to proceed anyway?", QMessageBox::Yes, QMessageBox::No) == QMessageBox::No)
			return false;
	}

	//memory allocation
	CCVector3d minCorner = CCVector3d::fromArray(gridBox.minCorner().u);
	if (!grid.init(gridWidth, gridHeight, gridStep, minCorner))
	{
		//not enough memory
		m_app->dispToConsole("Something went terribly wrong!");
		return -1;
	}
//TODO: FIgure out htis progress dialog thing
	//progress dialog
	QScopedPointer<ccProgressDialog> pDlg(0);
	if (parentWidget)
	{
		pDlg.reset(new ccProgressDialog(true, parentWidget));
	}

	ccRasterGrid groundRaster;
	if (ground)
	{
		if (!groundRaster.init(gridWidth, gridHeight, gridStep, minCorner))
		{
			//not enough memory
			m_app->dispToConsole("Looks like your a bit short on memory!");
			return -1;
		}

		if (groundRaster.fillWith(	ground,
									vertDim,
									projectionType,
									groundEmptyCellFillStrategy == ccRasterGrid::INTERPOLATE,
									ccRasterGrid::INVALID_PROJECTION_TYPE,
									pDlg.data()))
		{
			groundRaster.fillEmptyCells(groundEmptyCellFillStrategy, groundHeight);
			ccLog::Print(QString("[Volume] Ground raster grid: size: %1 x %2 / heights: [%3 ; %4]").arg(groundRaster.width).arg(groundRaster.height).arg(groundRaster.minHeight).arg(groundRaster.maxHeight));
		}
		else
		{
			return false;
		}
	}

	//ceil
	ccRasterGrid ceilRaster;
	if (ceil)
	{
		if (!ceilRaster.init(gridWidth, gridHeight, gridStep, minCorner))
		{
			//not enough memory
		m_app->dispToConsole("Looks like your a bit short on memory!");
		return -1;
		}

		if (ceilRaster.fillWith(ceil,
								vertDim,
								projectionType,
								ceilEmptyCellFillStrategy == ccRasterGrid::INTERPOLATE,
								ccRasterGrid::INVALID_PROJECTION_TYPE,
								pDlg.data()))
		{
			ceilRaster.fillEmptyCells(ceilEmptyCellFillStrategy, ceilHeight);
			ccLog::Print(QString("[Volume] Ceil raster grid: size: %1 x %2 / heights: [%3 ; %4]").arg(ceilRaster.width).arg(ceilRaster.height).arg(ceilRaster.minHeight).arg(ceilRaster.maxHeight));
		}
		else
		{
			return false;
		}
	}

	//update grid and compute volume
	{
		if (pDlg)
		{
			pDlg->setMethodTitle(QObject::tr("Volume computation"));
			pDlg->setInfo(QObject::tr("Cells: %1 x %2").arg(grid.width).arg(grid.height));
			pDlg->start();
			pDlg->show();
			QCoreApplication::processEvents();
		}
		CCLib::NormalizedProgress nProgress(pDlg.data(), grid.width * grid.height);
		
		size_t ceilNonMatchingCount = 0;
		size_t groundNonMatchingCount = 0;
		size_t cellCount = 0;

		//at least one of the grid is based on a cloud
		grid.nonEmptyCellCount = 0;
		for (unsigned i = 0; i < grid.height; ++i)
		{
			for (unsigned j = 0; j < grid.width; ++j)
			{
				ccRasterCell& cell = grid.rows[i][j];

				bool validGround = true;
				cell.minHeight = groundHeight;
				if (ground)
				{
					cell.minHeight = groundRaster.rows[i][j].h;
					validGround = std::isfinite(cell.minHeight);
				}

				bool validCeil = true;
				cell.maxHeight = ceilHeight;
				if (ceil)
				{
					cell.maxHeight = ceilRaster.rows[i][j].h;
					validCeil = std::isfinite(cell.maxHeight);
				}

				if (validGround && validCeil)
				{
					cell.h = cell.maxHeight - cell.minHeight;
					cell.nbPoints = 1;

					reportInfo.volume += cell.h;
					if (cell.h < 0)
					{
						reportInfo.removedVolume -= cell.h;
					}
					else if (cell.h > 0)
					{
						reportInfo.addedVolume += cell.h;
					}
					reportInfo.surface += 1.0;
					++grid.nonEmptyCellCount; //= matching count
					++cellCount;
				}
				else
				{
					if (validGround)
					{
						++cellCount;
						++groundNonMatchingCount;
					}
					else if (validCeil)
					{
						++cellCount;
						++ceilNonMatchingCount;
					}
					cell.h = std::numeric_limits<double>::quiet_NaN();
					cell.nbPoints = 0;
				}

				cell.avgHeight = (groundHeight + ceilHeight) / 2;
				cell.stdDevHeight = 0;

				if (pDlg && !nProgress.oneStep())
				{
					ccLog::Warning("[Volume] Process cancelled by the user");
					return false;
				}
			}
		}
		grid.validCellCount = grid.nonEmptyCellCount;

		//count the average number of valid neighbors
		{
			size_t validNeighborsCount = 0;
			size_t count = 0;
			for (unsigned i = 1; i < grid.height - 1; ++i)
			{
				for (unsigned j = 1; j < grid.width - 1; ++j)
				{
					ccRasterCell& cell = grid.rows[i][j];
					if (cell.h == cell.h)
					{
						for (unsigned k = i - 1; k <= i + 1; ++k)
						{
							for (unsigned l = j - 1; l <= j + 1; ++l)
							{
								if (k != i || l != j)
								{
									ccRasterCell& otherCell = grid.rows[k][l];
									if (std::isfinite(otherCell.h))
									{
										++validNeighborsCount;
									}
								}
							}
						}

						++count;
					}
				}
			}

			if (count)
			{
				reportInfo.averageNeighborsPerCell = static_cast<double>(validNeighborsCount) / count;
			}
		}

		reportInfo.matchingPrecent = static_cast<float>(grid.validCellCount * 100) / cellCount;
		reportInfo.groundNonMatchingPercent = static_cast<float>(groundNonMatchingCount * 100) / cellCount;
		reportInfo.ceilNonMatchingPercent = static_cast<float>(ceilNonMatchingCount * 100) / cellCount;
		float cellArea = static_cast<float>(grid.gridStep * grid.gridStep);
		reportInfo.volume *= cellArea;
		reportInfo.addedVolume *= cellArea;
		reportInfo.removedVolume *= cellArea;
		reportInfo.surface *= cellArea;
	}

	grid.setValid(true);

	return true;
}