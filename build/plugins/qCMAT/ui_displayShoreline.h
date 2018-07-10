/********************************************************************************
** Form generated from reading UI file 'displayShoreline.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAYSHORELINE_H
#define UI_DISPLAYSHORELINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_displayShoreline
{
public:
    QGridLayout *gridLayout_2;
    QLabel *title_2;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLineEdit *WaterLevel;
    QLabel *label_2;
    QSlider *SensetivitySlider;
    QLabel *label;
    QPushButton *Plot3D;
    QPushButton *Plot2D;
    QPushButton *Close;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(240, 247);
        gridLayout_2 = new QGridLayout(Dialog);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        title_2 = new QLabel(Dialog);
        title_2->setObjectName(QStringLiteral("title_2"));
        title_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(title_2, 0, 0, 1, 1);

        frame = new QFrame(Dialog);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        WaterLevel = new QLineEdit(frame);
        WaterLevel->setObjectName(QStringLiteral("WaterLevel"));

        gridLayout->addWidget(WaterLevel, 1, 0, 1, 2);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        SensetivitySlider = new QSlider(frame);
        SensetivitySlider->setObjectName(QStringLiteral("SensetivitySlider"));
        SensetivitySlider->setMinimum(1);
        SensetivitySlider->setMaximum(100);
        SensetivitySlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(SensetivitySlider, 3, 0, 1, 2);

        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 4, 0, 1, 1);

        Plot3D = new QPushButton(frame);
        Plot3D->setObjectName(QStringLiteral("Plot3D"));

        gridLayout->addWidget(Plot3D, 5, 0, 1, 1);

        Plot2D = new QPushButton(frame);
        Plot2D->setObjectName(QStringLiteral("Plot2D"));

        gridLayout->addWidget(Plot2D, 5, 1, 1, 1);


        gridLayout_2->addWidget(frame, 1, 0, 1, 1);

        Close = new QPushButton(Dialog);
        Close->setObjectName(QStringLiteral("Close"));

        gridLayout_2->addWidget(Close, 2, 0, 1, 1);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("displayShoreline", "display surfaces", nullptr));
        title_2->setText(QApplication::translate("displayShoreline", "Format: Bottom  -  Top  -  Volume ", nullptr));
        label_3->setText(QApplication::translate("displayShoreline", "Water Level", nullptr));
        label_2->setText(QApplication::translate("displayShoreline", "Sensetivity:", nullptr));
        label->setText(QApplication::translate("displayShoreline", "Plot shorelines:", nullptr));
        Plot3D->setText(QApplication::translate("displayShoreline", "plot 3D", nullptr));
        Plot2D->setText(QApplication::translate("displayShoreline", "plot 2D", nullptr));
        Close->setText(QApplication::translate("displayShoreline", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class displayShoreline: public Ui_displayShoreline {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYSHORELINE_H
