/********************************************************************************
** Form generated from reading UI file 'displayShoreline.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAYSHORELINE_H
#define UI_DISPLAYSHORELINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
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
    QPushButton *Plot2D;
    QPushButton *Extract;
    QDialogButtonBox *cancelButton;

    void setupUi(QDialog *displayShoreline)
    {
        if (displayShoreline->objectName().isEmpty())
            displayShoreline->setObjectName(QStringLiteral("displayShoreline"));
        displayShoreline->resize(240, 247);
        gridLayout_2 = new QGridLayout(displayShoreline);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        title_2 = new QLabel(displayShoreline);
        title_2->setObjectName(QStringLiteral("title_2"));
        title_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(title_2, 0, 0, 1, 1);

        frame = new QFrame(displayShoreline);
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

        Plot2D = new QPushButton(frame);
        Plot2D->setObjectName(QStringLiteral("Plot2D"));

        gridLayout->addWidget(Plot2D, 5, 0, 1, 1);

        Extract = new QPushButton(frame);
        Extract->setObjectName(QStringLiteral("Extract"));

        gridLayout->addWidget(Extract, 5, 1, 1, 1);


        gridLayout_2->addWidget(frame, 1, 0, 1, 1);

        cancelButton = new QDialogButtonBox(displayShoreline);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setStandardButtons(QDialogButtonBox::Cancel);

        gridLayout_2->addWidget(cancelButton, 2, 0, 1, 1);


        retranslateUi(displayShoreline);

        QMetaObject::connectSlotsByName(displayShoreline);
    } // setupUi

    void retranslateUi(QDialog *displayShoreline)
    {
        displayShoreline->setWindowTitle(QApplication::translate("displayShoreline", "display surfaces", nullptr));
        title_2->setText(QApplication::translate("displayShoreline", "Format: Bottom  -  Top  -  Volume ", nullptr));
        label_3->setText(QApplication::translate("displayShoreline", "Water Level", nullptr));
        label_2->setText(QApplication::translate("displayShoreline", "Sensativity:", nullptr));
        label->setText(QApplication::translate("displayShoreline", "Plot shorelines:", nullptr));
        Plot2D->setText(QApplication::translate("displayShoreline", "plot 3D", nullptr));
        Extract->setText(QApplication::translate("displayShoreline", "extract", nullptr));
    } // retranslateUi

};

namespace Ui {
    class displayShoreline: public Ui_displayShoreline {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYSHORELINE_H
