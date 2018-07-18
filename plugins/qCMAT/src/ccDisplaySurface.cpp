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

#include "ccDisplaySurface.h"
#include "ui_displaySurface.h"
#include <string>
#include <QString>
#include <fstream>
#include <QFileDialog>

//TODO: allow user to change grid step
#define GRID_STEP 0.1

ccDisplaySurface::ccDisplaySurface(QWidget* parent, ccMainAppInterface* app, int numberOfClouds)
	: QDialog(parent, Qt::Tool)
	, Ui::displaySurface()
{
	setupUi(this);
	//connect cancel button
	connect( Close,	SIGNAL(clicked()), this, SLOT( closeDisplay() ));
	connect( SaveCSV,	SIGNAL(clicked()), this, SLOT( saveCSV() ));

	//set local variables
	noClouds = numberOfClouds;
	m_app = app;

	//get to displaying the text no need to store volumes internaly
//TODO: check its not empty, if so display a generate first message
	//write format to the top line
//TODO: multiple clouds
	Text->append(QString::fromStdString("[Id] | [Cloud Name] | [Surface Area]"));
	std::string str;
	for(int i = 0; i < noClouds; i++){
		//display each clouds surface area seperatly
		str = std::to_string(i);
		str += " | ";
		str += m_app->getSelectedEntities()[i]->getName().toStdString();
		str += " | ";
		surfaces[i] = calcSurfaceWrapper(ccHObjectCaster::ToPointCloud(m_app->getSelectedEntities()[i]));
		str += std::to_string(surfaces[i]);
		//calculate surface area and store it internaly

		//add it to the string

		//Print out the string
		Text->append(QString::fromStdString(str));
	}
}

void ccDisplaySurface::saveCSV(){
	/*
	Save the contours to a csv file in the following format (fist line records format):

	[Id],[Name],[Surface Area]
	0	, cloud1 , Val			
	1   , cloud2 , Val
	... , ...    , ...		

	*/
	
	//Open get save file name
	QString fileName = QFileDialog::getSaveFileName(this,
    tr("Save contours"), "",
    tr("Save contours(*.csv);;All Files (*)"));

	if(fileName.size() == 0){
		//Check user entered a file name
		return;
	}

	//File stream for output
	std::ofstream surfFile;

	//check file can be opened / open file
  	surfFile.open((fileName.toStdString() + ".csv").c_str(), std::ios::trunc);

	//save format string [Id],[Name],[Surface Area]
	surfFile << "[Id],[Name],[Surface Area]" << std::endl;

	//For each cloud
	for(int i = 0; i < noClouds; i++){
		//Generate and output a line to the file
		std::string str = std::to_string(i) + ",";
		str += m_app->getSelectedEntities()[i]->getName().toStdString() + ",";
		str += std::to_string(surfaces[i]);
		surfFile << str << std::endl;
	}
	//close the fileSteam
	surfFile.close();
	m_app->dispToConsole(QString::fromStdString("Finished saving to: ") + fileName + QString::fromStdString(".csv"));
}

void ccDisplaySurface::closeDisplay(){
	//close the display
	this->close();
}


ccDisplaySurface::~ccDisplaySurface()
{
}


float ccDisplaySurface::calcSurfaceWrapper(ccPointCloud* theCloud){
	/*
	Initialize parameters and call surface calculation function
	*/

	ccRasterGrid grid;
	//specify grid step, 0.1 works well
	float gridStep = GRID_STEP;
	//get cloud bounding box
	ccBBox gridBBox = theCloud->getOwnBB();
	//get grid width and height
	unsigned& gridWidth = *(new unsigned);
	unsigned& gridHeight = *(new unsigned);
	//get volume box size
	ccBBox box = ccBBox();

	//Compute size of raster grid
	ccRasterGrid::ComputeGridSize(2, gridBBox, gridStep, gridWidth, gridHeight);

	//Call compute surface
	double surface = ComputeSurface(
			grid, //raster grid
			0,  //ground
			ccHObjectCaster::ToGenericPointCloud(theCloud),	//cieling
			gridBBox,		//grid box
			2,			//vert dimension, assume z
			gridStep,			//grid step
			gridWidth,		//grid width
			gridHeight,			//grid height
			ccRasterGrid::ProjectionType::PROJ_AVERAGE_VALUE,					//projection type
			ccRasterGrid::EmptyCellFillOption::LEAVE_EMPTY,			//fill ground empty cells strat
			ccRasterGrid::EmptyCellFillOption::LEAVE_EMPTY,			//fill ciel empty cells strat
			0.0 ,			//ground height
			0.0 ,			//ciel height
			m_app->getMainWindow()		//parent widget
			);

	//Print the computed volume
	m_app->dispToConsole(std::to_string(surface).c_str());

	return surface;
}


float ccDisplaySurface::ComputeSurface(	ccRasterGrid& grid,
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
										double groundHeight,
										double ceilHeight,
										QWidget* parentWidget)
{

	//store surface
	double surface = 0;

	if (	gridStep <= 1.0e-8
		||	gridWidth == 0
		||	gridHeight == 0
		||	vertDim > 2)
	{
		assert(false);
		ccLog::Warning("[Surface] Invalid input parameters");
		return -1;
	}

	if (!ground && !ceil)
	{
		assert(false);
		ccLog::Warning("[Surface] No valid input cloud");
		return -1;
	}

	if (!gridBox.isValid())
	{
		ccLog::Warning("[Surface] Invalid bounding-box");
		return -1;
	}

	//grid size
	unsigned gridTotalSize = gridWidth * gridHeight;
	if (gridTotalSize == 1)
	{
		if (parentWidget && QMessageBox::question(parentWidget, "Unexpected grid size", "The generated grid will only have 1 cell! Do you want to proceed anyway?", QMessageBox::Yes, QMessageBox::No) == QMessageBox::No)
			return -1;
	}
	else if (gridTotalSize > 10000000)
	{
		if (parentWidget && QMessageBox::question(parentWidget, "Big grid size", "The generated grid will have more than 10.000.000 cells! Do you want to proceed anyway?", QMessageBox::Yes, QMessageBox::No) == QMessageBox::No)
			return -1;
	}

	//memory allocation
	CCVector3d minCorner = CCVector3d::fromArray(gridBox.minCorner().u);
	if (!grid.init(gridWidth, gridHeight, gridStep, minCorner))
	{
		//not enough memory
		m_app->dispToConsole("Something went terribly wrong!");
		return -1;
	}

	//Create process dialog
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
			ccLog::Print(QString("[Surface] Ground raster grid: size: %1 x %2 / heights: [%3 ; %4]").arg(groundRaster.width).arg(groundRaster.height).arg(groundRaster.minHeight).arg(groundRaster.maxHeight));
		}
		else
		{
			return -1;
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
		//fill cells with height
		if (ceilRaster.fillWith(ceil,
								vertDim,
								projectionType,
								ceilEmptyCellFillStrategy == ccRasterGrid::INTERPOLATE,
								ccRasterGrid::INVALID_PROJECTION_TYPE,
								pDlg.data()))
		{
			//Fill with surface
			ceilRaster.fillEmptyCells(ceilEmptyCellFillStrategy, ceilHeight);
			ccLog::Print(QString("[Surface] Ceil raster grid: size: %1 x %2 / heights: [%3 ; %4]").arg(ceilRaster.width).arg(ceilRaster.height).arg(ceilRaster.minHeight).arg(ceilRaster.maxHeight));
		}
		else
		{
			return -1;
		}
	}

	//update grid and compute volume
	{
		if (pDlg)
		{
			//IName, initialize and display progress dialog
			pDlg->setMethodTitle(QObject::tr("Surface computation"));
			pDlg->setInfo(QObject::tr("Cells: %1 x %2").arg(grid.width).arg(grid.height));
			pDlg->start();
			pDlg->show();
			QCoreApplication::processEvents();
		}
		//Create progress bar
		CCLib::NormalizedProgress nProgress(pDlg.data(), grid.width * grid.height);


		long int ceilNonMatchingCount = 0;
		long int groundNonMatchingCount = 0;
		long int noCells = 0;

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

					surface += 1.0;
					++grid.nonEmptyCellCount; //= matching count
					++noCells;
				}
				else
				{
					if (validGround)
					{
						++noCells;
						++groundNonMatchingCount;
					}
					else if (validCeil)
					{
						++noCells;
						++ceilNonMatchingCount;
					}
					cell.h = std::numeric_limits<double>::quiet_NaN();
					cell.nbPoints = 0;
				}

				cell.avgHeight = (groundHeight + ceilHeight) / 2;
				cell.stdDevHeight = 0;

				if (pDlg && !nProgress.oneStep())
				{
					ccLog::Warning("[Surface] Process cancelled by the user");
					return -1;
				}
			}
		}
		grid.validCellCount = grid.nonEmptyCellCount;

		//count the average number of valid neighbors
		{
			size_t count = 0;
			for (unsigned i = 1; i < grid.height - 1; ++i)
			{
				for (unsigned j = 1; j < grid.width - 1; ++j)
				{
					ccRasterCell& cell = grid.rows[i][j];
					if (cell.h == cell.h)
					{
						++count;
					}
				}
			}

		}

		float cellArea = static_cast<float>(grid.gridStep * grid.gridStep);
		surface *= cellArea;
	}

	grid.setValid(true);
	return surface;
}