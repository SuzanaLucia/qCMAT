#ifndef DISPLAY__SHORELINE_H
#define DISPLAY__SHORELINE_H


#include "ui_displayShoreline.h"
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



class qDisplayShoreline : public QDialog, public Ui::displayShoreline
{
	Q_OBJECT


public:
//TODO: Change it to max Clouds
	qDisplayShoreline(QWidget* parent = 0, ccMainAppInterface* = 0, int = 0);
	~qDisplayShoreline();
protected slots:
	void closeDisplay();
	void save2D();
	void save3D();

private:
	float surfaces[MAX_CLOUDS];
	int noClouds;
	ccMainAppInterface* m_app;
		//TODO: replace with proper color scale
	float contourShore[MAX_CLOUDS][3]; //one each for r g and b
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
