/********************************************************************************
** Form generated from reading UI file 'ccVolumeTool.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CCVOLUMETOOL_H
#define UI_CCVOLUMETOOL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
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
    QGridLayout *gridLayout;
    QLineEdit *noSliceInput;
    QLineEdit *bottomInput;
    QLabel *label_3;
    QLineEdit *topInput;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_6;
    QLineEdit *heightDisplay;
    QLabel *label_7;
    QPushButton *CalcContours;
    QFrame *frame_3;
    QLabel *label_8;
    QPushButton *CalcLoadFile;
    QLineEdit *CFileName;
    QPushButton *LoadCFile;
    QLabel *FormatLabel_3;
    QLabel *label_11;
    QPushButton *SaveCloudCont;
    QDialogButtonBox *cancelButton;

    void setupUi(QDialog *ccVolumeTool)
    {
        if (ccVolumeTool->objectName().isEmpty())
            ccVolumeTool->setObjectName(QStringLiteral("ccVolumeTool"));
        ccVolumeTool->resize(441, 433);
        saveButton = new QPushButton(ccVolumeTool);
        saveButton->setObjectName(QStringLiteral("saveButton"));
        saveButton->setGeometry(QRect(100, 400, 80, 23));
        DisplayVolume = new QPushButton(ccVolumeTool);
        DisplayVolume->setObjectName(QStringLiteral("DisplayVolume"));
        DisplayVolume->setGeometry(QRect(190, 400, 80, 23));
        DisplayVolume->setCheckable(false);
        DisplayVolume->setAutoRepeat(false);
        DisplayVolume->setAutoDefault(false);
        label = new QLabel(ccVolumeTool);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 0, 161, 31));
        frame = new QFrame(ccVolumeTool);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 30, 421, 93));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        CalcAbreviations = new QPushButton(frame);
        CalcAbreviations->setObjectName(QStringLiteral("CalcAbreviations"));
        CalcAbreviations->setGeometry(QRect(290, 60, 121, 21));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 10, 141, 16));
        frame_2 = new QFrame(ccVolumeTool);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(10, 130, 421, 122));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        noSliceInput = new QLineEdit(frame_2);
        noSliceInput->setObjectName(QStringLiteral("noSliceInput"));

        gridLayout->addWidget(noSliceInput, 2, 4, 1, 1);

        bottomInput = new QLineEdit(frame_2);
        bottomInput->setObjectName(QStringLiteral("bottomInput"));

        gridLayout->addWidget(bottomInput, 4, 2, 1, 1);

        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 4, 0, 1, 2);

        topInput = new QLineEdit(frame_2);
        topInput->setObjectName(QStringLiteral("topInput"));

        gridLayout->addWidget(topInput, 2, 2, 1, 1);

        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 2);

        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 2, 3, 1, 1);

        label_6 = new QLabel(frame_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 0, 0, 1, 3);

        heightDisplay = new QLineEdit(frame_2);
        heightDisplay->setObjectName(QStringLiteral("heightDisplay"));
        heightDisplay->setReadOnly(true);

        gridLayout->addWidget(heightDisplay, 1, 1, 1, 4);

        label_7 = new QLabel(frame_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 1, 0, 1, 1);

        CalcContours = new QPushButton(frame_2);
        CalcContours->setObjectName(QStringLiteral("CalcContours"));

        gridLayout->addWidget(CalcContours, 4, 4, 1, 1);

        frame_3 = new QFrame(ccVolumeTool);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(10, 260, 421, 131));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_8 = new QLabel(frame_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 10, 111, 16));
        CalcLoadFile = new QPushButton(frame_3);
        CalcLoadFile->setObjectName(QStringLiteral("CalcLoadFile"));
        CalcLoadFile->setGeometry(QRect(290, 100, 121, 21));
        CFileName = new QLineEdit(frame_3);
        CFileName->setObjectName(QStringLiteral("CFileName"));
        CFileName->setGeometry(QRect(110, 30, 261, 23));
        LoadCFile = new QPushButton(frame_3);
        LoadCFile->setObjectName(QStringLiteral("LoadCFile"));
        LoadCFile->setGeometry(QRect(20, 30, 80, 23));
        FormatLabel_3 = new QLabel(frame_3);
        FormatLabel_3->setObjectName(QStringLiteral("FormatLabel_3"));
        FormatLabel_3->setGeometry(QRect(10, 60, 401, 16));
        label_11 = new QLabel(frame_3);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(30, 80, 351, 16));
        SaveCloudCont = new QPushButton(ccVolumeTool);
        SaveCloudCont->setObjectName(QStringLiteral("SaveCloudCont"));
        SaveCloudCont->setGeometry(QRect(10, 400, 80, 23));
        cancelButton = new QDialogButtonBox(ccVolumeTool);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(350, 400, 80, 24));
        cancelButton->setStandardButtons(QDialogButtonBox::Cancel);

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
        label_3->setText(QApplication::translate("ccVolumeTool", "Bottom:", nullptr));
        label_2->setText(QApplication::translate("ccVolumeTool", "Top:", nullptr));
        label_4->setText(QApplication::translate("ccVolumeTool", "No. slices:", nullptr));
        label_6->setText(QApplication::translate("ccVolumeTool", "Calculate Between Contour Lines", nullptr));
        label_7->setText(QApplication::translate("ccVolumeTool", "Height:", nullptr));
        CalcContours->setText(QApplication::translate("ccVolumeTool", "Calculate Volumes", nullptr));
        label_8->setText(QApplication::translate("ccVolumeTool", "Load Contour File", nullptr));
        CalcLoadFile->setText(QApplication::translate("ccVolumeTool", "Calculate Volumes", nullptr));
#ifndef QT_NO_TOOLTIP
        LoadCFile->setToolTip(QApplication::translate("ccVolumeTool", "Load contours from csv file", nullptr));
#endif // QT_NO_TOOLTIP
        LoadCFile->setText(QApplication::translate("ccVolumeTool", "Load", nullptr));
        FormatLabel_3->setText(QApplication::translate("ccVolumeTool", "The format of lines should be: [id],[Contour Bottom],[Contour Top]", nullptr));
        label_11->setText(QApplication::translate("ccVolumeTool", "The first line is assumed, to be the format, and is ignored", nullptr));
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
