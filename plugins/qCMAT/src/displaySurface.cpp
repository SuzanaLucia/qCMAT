#include "displaySurface.h"
#include "ui_displaySurface.h"
#include <string>
#include <QString>
qDisplaySurface::qDisplaySurface(QWidget* parent, ccMainAppInterface* app, int numberOfClouds)
	: QDialog(parent, Qt::Tool)
	, Ui::displaySurface()
{
	setupUi(this);
	//connect cancel button
	connect( Close,	SIGNAL(clicked()), this, SLOT( closeDisplay() ));

	//set local variables
	noClouds = numberOfClouds;
	m_app = app;

	//get to displaying the text no need to store volumes internaly
//TODO: check its not empty, if so display a generate first message
	//write format to the top line
//TODO: multiple clouds
	Text->append(QString::fromStdString(" [Cloud Name] | [Surface Area]"));
	std::string str;
	for(int i = 0; i < noClouds; i++){
		//display each clouds surface area seperatly
		str = m_app->getSelectedEntities()[i]->getName().toStdString();
		str += " | ";
		surfaces[i] = volumeBetweenHeights(ccHObjectCaster::ToPointCloud(m_app->getSelectedEntities()[i]));
		str += std::to_string(surfaces[i]);
		//calculate surface area and store it internaly

		//add it to the string

		//Print out the string
		Text->append(QString::fromStdString(str));
	}
}



void qDisplaySurface::closeDisplay(){
	this->close();
}


qDisplaySurface::~qDisplaySurface()
{
}


float qDisplaySurface::volumeBetweenHeights(ccPointCloud* theCloud){
	//get a list of all the clouds i guess | Assume its just one Cloud selected and given as argument
		//for now ignore min and max limits
	//start off by just displaying the volume
		//Fool! You thought that would be easy!

	//make a volume tool object, dont display it
	//force set all the settings and then call its calculate method

	//store the result of the volume computation
	ReportInfo result;
	ccRasterGrid grid;

	//specify grid step, 0.5 seems sensible
	float gridStep = 0.1;

	ccBBox gridBBox = theCloud->getOwnBB();
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
			ccHObjectCaster::ToGenericPointCloud(theCloud),	//cieling
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
	m_app->dispToConsole(std::to_string(result.surface).c_str());

	return result.surface;
}


float qDisplaySurface::ComputeVolume(	ccRasterGrid& grid,
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
										qDisplaySurface::ReportInfo& reportInfo,
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

		if (ceilRaster.fillWith(ceil,
								vertDim,
								projectionType,
								ceilEmptyCellFillStrategy == ccRasterGrid::INTERPOLATE,
								ccRasterGrid::INVALID_PROJECTION_TYPE,
								pDlg.data()))
		{
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
					ccLog::Warning("[Surface] Process cancelled by the user");
					return -1;
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

	return reportInfo.volume;
}