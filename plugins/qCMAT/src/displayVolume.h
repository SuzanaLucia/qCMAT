#ifndef DISPLAYVOLUME_H
#define DISPLAYVOLUME_H


#include "ui_displayVolume.h"

#include <QDialog>
#include <QMainWindow>
#include <QLineEdit>

class displayVolume : public QDialog, public Ui::displayVolume
{
	Q_OBJECT


public:
	displayVolume(QWidget* parent = 0, float[][3] = 0, int = 0);
	~displayVolume();
protected slots:
	void closeDisplay();

private:

};


/*
namespace Ui {
class displayVolume;
}

class displayVolume : public QDialog
{
    Q_OBJECT

public:
    explicit displayVolume(QWidget *parent = 0);
    ~displayVolume();

private:
    Ui::displayVolume *ui;
};
*/


#endif // DISPLAYVOLUME_H
