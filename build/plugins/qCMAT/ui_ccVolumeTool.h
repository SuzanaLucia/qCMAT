/********************************************************************************
** Form generated from reading UI file 'ccVolumeTool.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CCVOLUMETOOL_H
#define UI_CCVOLUMETOOL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ccVolumeTool
{
public:
    QPushButton *saveButton;
    QPushButton *DisplayVolume;
    QLabel *label;
    QFrame *frame;
    QPushButton *CalcAbreviations;
    QLabel *label_5;
    QFrame *frame_2;
    QPushButton *CalcContours;
    QLineEdit *bottomInput;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *heightDisplay;
    QLineEdit *topInput;
    QLineEdit *noSliceInput;
    QFrame *frame_3;
    QLabel *label_8;
    QPushButton *CalcLoadFile;
    QLineEdit *CFileName;
    QPushButton *LoadCFile;
    QLabel *label_9;
    QPushButton *SaveCloudCont;

    void setupUi(QDialog *ccVolumeTool)
    {
        if (ccVolumeTool->objectName().isEmpty())
            ccVolumeTool->setObjectName(QStringLiteral("ccVolumeTool"));
        ccVolumeTool->resize(400, 440);
        saveButton = new QPushButton(ccVolumeTool);
        saveButton->setObjectName(QStringLiteral("saveButton"));
        saveButton->setGeometry(QRect(190, 390, 91, 41));
        DisplayVolume = new QPushButton(ccVolumeTool);
        DisplayVolume->setObjectName(QStringLiteral("DisplayVolume"));
        DisplayVolume->setGeometry(QRect(290, 390, 91, 41));
        DisplayVolume->setCheckable(false);
        DisplayVolume->setAutoRepeat(false);
        DisplayVolume->setAutoDefault(false);
        label = new QLabel(ccVolumeTool);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 6, 381, 20));
        frame = new QFrame(ccVolumeTool);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 30, 381, 101));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        CalcAbreviations = new QPushButton(frame);
        CalcAbreviations->setObjectName(QStringLiteral("CalcAbreviations"));
        CalcAbreviations->setGeometry(QRect(250, 70, 121, 21));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 10, 141, 16));
        frame_2 = new QFrame(ccVolumeTool);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(10, 140, 381, 121));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        CalcContours = new QPushButton(frame_2);
        CalcContours->setObjectName(QStringLiteral("CalcContours"));
        CalcContours->setGeometry(QRect(250, 90, 121, 21));
        bottomInput = new QLineEdit(frame_2);
        bottomInput->setObjectName(QStringLiteral("bottomInput"));
        bottomInput->setGeometry(QRect(100, 90, 81, 23));
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 70, 31, 16));
        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 90, 59, 15));
        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(220, 60, 71, 21));
        label_6 = new QLabel(frame_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 10, 201, 16));
        label_7 = new QLabel(frame_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 30, 51, 16));
        heightDisplay = new QLineEdit(frame_2);
        heightDisplay->setObjectName(QStringLiteral("heightDisplay"));
        heightDisplay->setGeometry(QRect(60, 30, 311, 16));
        heightDisplay->setReadOnly(true);
        topInput = new QLineEdit(frame_2);
        topInput->setObjectName(QStringLiteral("topInput"));
        topInput->setGeometry(QRect(100, 60, 81, 23));
        noSliceInput = new QLineEdit(frame_2);
        noSliceInput->setObjectName(QStringLiteral("noSliceInput"));
        noSliceInput->setGeometry(QRect(290, 60, 81, 23));
        frame_3 = new QFrame(ccVolumeTool);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(10, 270, 381, 111));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_8 = new QLabel(frame_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 10, 111, 16));
        CalcLoadFile = new QPushButton(frame_3);
        CalcLoadFile->setObjectName(QStringLiteral("CalcLoadFile"));
        CalcLoadFile->setGeometry(QRect(250, 80, 121, 21));
        CFileName = new QLineEdit(frame_3);
        CFileName->setObjectName(QStringLiteral("CFileName"));
        CFileName->setGeometry(QRect(110, 40, 261, 23));
        LoadCFile = new QPushButton(frame_3);
        LoadCFile->setObjectName(QStringLiteral("LoadCFile"));
        LoadCFile->setGeometry(QRect(20, 40, 80, 23));
        label_9 = new QLabel(frame_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(130, 20, 221, 16));
        SaveCloudCont = new QPushButton(ccVolumeTool);
        SaveCloudCont->setObjectName(QStringLiteral("SaveCloudCont"));
        SaveCloudCont->setGeometry(QRect(90, 390, 91, 41));

        retranslateUi(ccVolumeTool);

        QMetaObject::connectSlotsByName(ccVolumeTool);
    } // setupUi

    void retranslateUi(QDialog *ccVolumeTool)
    {
        ccVolumeTool->setWindowTitle(QApplication::translate("ccVolumeTool", "ccVolumeTool", nullptr));
#ifndef QT_NO_TOOLTIP
        saveButton->setToolTip(QApplication::translate("ccVolumeTool", "Save results as CSV file", nullptr));
#endif // QT_NO_TOOLTIP
        saveButton->setText(QApplication::translate("ccVolumeTool", "Save .csv", nullptr));
#ifndef QT_NO_TOOLTIP
        DisplayVolume->setToolTip(QApplication::translate("ccVolumeTool", "Display beach volume", nullptr));
#endif // QT_NO_TOOLTIP
        DisplayVolume->setText(QApplication::translate("ccVolumeTool", "Display", nullptr));
        label->setText(QApplication::translate("ccVolumeTool", "Calculate Beach Volumes", nullptr));
        CalcAbreviations->setText(QApplication::translate("ccVolumeTool", "Calculate Volumes", nullptr));
        label_5->setText(QApplication::translate("ccVolumeTool", "Calculate Abreviations", nullptr));
        CalcContours->setText(QApplication::translate("ccVolumeTool", "Calculate Volumes", nullptr));
        label_2->setText(QApplication::translate("ccVolumeTool", "Top:", nullptr));
        label_3->setText(QApplication::translate("ccVolumeTool", "Bottom:", nullptr));
        label_4->setText(QApplication::translate("ccVolumeTool", "No. slices:", nullptr));
        label_6->setText(QApplication::translate("ccVolumeTool", "Calculate Between Contour Lines", nullptr));
        label_7->setText(QApplication::translate("ccVolumeTool", "Height:", nullptr));
        label_8->setText(QApplication::translate("ccVolumeTool", "Load Contour File", nullptr));
        CalcLoadFile->setText(QApplication::translate("ccVolumeTool", "Calculate Volumes", nullptr));
#ifndef QT_NO_TOOLTIP
        LoadCFile->setToolTip(QApplication::translate("ccVolumeTool", "Load contours from csv file", nullptr));
#endif // QT_NO_TOOLTIP
        LoadCFile->setText(QApplication::translate("ccVolumeTool", "Load", nullptr));
        label_9->setText(QApplication::translate("ccVolumeTool", "Load csv file of [bottom],[top] pairs", nullptr));
#ifndef QT_NO_TOOLTIP
        SaveCloudCont->setToolTip(QApplication::translate("ccVolumeTool", "Save results as CSV file", nullptr));
#endif // QT_NO_TOOLTIP
        SaveCloudCont->setText(QApplication::translate("ccVolumeTool", "Save Cloud", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ccVolumeTool: public Ui_ccVolumeTool {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CCVOLUMETOOL_H
