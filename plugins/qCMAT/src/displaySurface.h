#ifndef DISPLAY__SURFACE_H
#define DISPLAY__SURFACE_H


#include "ui_displaySurface.h"
#include "ccStdPluginInterface.h"

#include <QDialog>
#include <QMainWindow>
#include <QLineEdit>
#include <QMessageBox>

//cloud compare stuff
//ccLib
#include <Delaunay2dMesh.h>
#include <PointProjectionTools.h>
#include <ccProgressDialog.h>
#include <ccRasterGrid.h>
#include <ccPointCloud.h>
#include <ccMaterialSet.h>
#include <ccScalarField.h>
#include <SimpleCloud.h>
#include <GenericCloud.h>

#define MAX_CLOUDS 100



class qDisplaySurface : public QDialog, public Ui::displaySurface
{
	Q_OBJECT


public:
//TODO: Change it to max Clouds
	qDisplaySurface(QWidget* parent = 0, ccMainAppInterface* = 0, int = 0);
	~qDisplaySurface();
protected slots:
	void closeDisplay();

private:
	float surfaces[MAX_CLOUDS];
	int noClouds;
	ccMainAppInterface* m_app;
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
	float volumeBetweenHeights(ccPointCloud*);
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
										qDisplaySurface::ReportInfo&,
										double groundHeight = std::numeric_limits<double>::quiet_NaN(),
										double ceilHeight = std::numeric_limits<double>::quiet_NaN(),
										QWidget* parentWidget = 0);
};


/*
namespace Ui {
class displaySurface;
}

class displaySurface : public QDialog
{
    Q_OBJECT

public:
    explicit displaySurface(QWidget *parent = 0);
    ~displaySurface();

private:
    Ui::displaySurface *ui;
};
*/


#endif // DISPLAYVOLUME_H
