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
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_ccVolumeTool
{
public:
    QPushButton *pushButton_2;
    QPushButton *DisplayVolume;
    QLabel *label;
    QFrame *frame;
    QPushButton *pushButton_4;
    QLabel *label_5;
    QFrame *frame_2;
    QPushButton *CalcVolButton;
    QSlider *horizontalSlider;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;

    void setupUi(QDialog *ccVolumeTool)
    {
        if (ccVolumeTool->objectName().isEmpty())
            ccVolumeTool->setObjectName(QStringLiteral("ccVolumeTool"));
        ccVolumeTool->resize(400, 301);
        pushButton_2 = new QPushButton(ccVolumeTool);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 250, 91, 41));
        DisplayVolume = new QPushButton(ccVolumeTool);
        DisplayVolume->setObjectName(QStringLiteral("DisplayVolume"));
        DisplayVolume->setGeometry(QRect(130, 250, 91, 41));
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
        pushButton_4 = new QPushButton(frame);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(250, 70, 121, 21));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 10, 141, 16));
        frame_2 = new QFrame(ccVolumeTool);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(10, 140, 381, 101));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        CalcVolButton = new QPushButton(frame_2);
        CalcVolButton->setObjectName(QStringLiteral("CalcVolButton"));
        CalcVolButton->setGeometry(QRect(250, 70, 121, 21));
        horizontalSlider = new QSlider(frame_2);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(20, 70, 160, 16));
        horizontalSlider->setOrientation(Qt::Horizontal);
        lineEdit_2 = new QLineEdit(frame_2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(320, 10, 41, 23));
        lineEdit = new QLineEdit(frame_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(320, 40, 41, 23));
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(270, 10, 31, 16));
        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(250, 40, 59, 15));
        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 40, 59, 21));
        label_6 = new QLabel(frame_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 10, 201, 16));

        retranslateUi(ccVolumeTool);

        QMetaObject::connectSlotsByName(ccVolumeTool);
    } // setupUi

    void retranslateUi(QDialog *ccVolumeTool)
    {
        ccVolumeTool->setWindowTitle(QApplication::translate("ccVolumeTool", "ccVolumeTool", nullptr));
        pushButton_2->setText(QApplication::translate("ccVolumeTool", "Save", nullptr));
#ifndef QT_NO_TOOLTIP
        DisplayVolume->setToolTip(QApplication::translate("ccVolumeTool", "Display beach volume", nullptr));
#endif // QT_NO_TOOLTIP
        DisplayVolume->setText(QApplication::translate("ccVolumeTool", "Display", nullptr));
        label->setText(QApplication::translate("ccVolumeTool", "Calculate Beach Volumes", nullptr));
        pushButton_4->setText(QApplication::translate("ccVolumeTool", "Calculate Volumes", nullptr));
        label_5->setText(QApplication::translate("ccVolumeTool", "Calculate Abreviations", nullptr));
        CalcVolButton->setText(QApplication::translate("ccVolumeTool", "Calculate Volumes", nullptr));
        label_2->setText(QApplication::translate("ccVolumeTool", "Top:", nullptr));
        label_3->setText(QApplication::translate("ccVolumeTool", "Bottom:", nullptr));
        label_4->setText(QApplication::translate("ccVolumeTool", "Interval:", nullptr));
        label_6->setText(QApplication::translate("ccVolumeTool", "Calculate Between Contour Lines", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ccVolumeTool: public Ui_ccVolumeTool {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CCVOLUMETOOL_H
