/********************************************************************************
** Form generated from reading UI file 'extractProfile.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXTRACTPROFILE_H
#define UI_EXTRACTPROFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_extractProfile
{
public:
    QGridLayout *gridLayout;
    QLabel *TitleText;
    QLabel *P1name;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QLabel *P1Z;
    QLabel *P1Y;
    QLabel *P1X;
    QSpacerItem *spacerp1;
    QLabel *P2name;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout;
    QLabel *P2Z;
    QLabel *P2Y;
    QLabel *P2X;
    QSpacerItem *spacerp2;
    QPushButton *PlotProfilesPush;
    QDialogButtonBox *cancelButton;

    void setupUi(QDialog *extractProfile)
    {
        if (extractProfile->objectName().isEmpty())
            extractProfile->setObjectName(QStringLiteral("extractProfile"));
        extractProfile->resize(326, 203);
        gridLayout = new QGridLayout(extractProfile);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        TitleText = new QLabel(extractProfile);
        TitleText->setObjectName(QStringLiteral("TitleText"));

        gridLayout->addWidget(TitleText, 0, 1, 1, 3);

        P1name = new QLabel(extractProfile);
        P1name->setObjectName(QStringLiteral("P1name"));

        gridLayout->addWidget(P1name, 1, 0, 1, 1);

        frame = new QFrame(extractProfile);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        P1Z = new QLabel(frame);
        P1Z->setObjectName(QStringLiteral("P1Z"));

        verticalLayout_2->addWidget(P1Z);

        P1Y = new QLabel(frame);
        P1Y->setObjectName(QStringLiteral("P1Y"));

        verticalLayout_2->addWidget(P1Y);

        P1X = new QLabel(frame);
        P1X->setObjectName(QStringLiteral("P1X"));

        verticalLayout_2->addWidget(P1X);

        spacerp1 = new QSpacerItem(87, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(spacerp1);


        gridLayout->addWidget(frame, 1, 1, 1, 1);

        P2name = new QLabel(extractProfile);
        P2name->setObjectName(QStringLiteral("P2name"));

        gridLayout->addWidget(P2name, 1, 2, 1, 1);

        frame_2 = new QFrame(extractProfile);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        P2Z = new QLabel(frame_2);
        P2Z->setObjectName(QStringLiteral("P2Z"));

        verticalLayout->addWidget(P2Z);

        P2Y = new QLabel(frame_2);
        P2Y->setObjectName(QStringLiteral("P2Y"));

        verticalLayout->addWidget(P2Y);

        P2X = new QLabel(frame_2);
        P2X->setObjectName(QStringLiteral("P2X"));

        verticalLayout->addWidget(P2X);

        spacerp2 = new QSpacerItem(86, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(spacerp2);


        gridLayout->addWidget(frame_2, 1, 3, 1, 1);

        PlotProfilesPush = new QPushButton(extractProfile);
        PlotProfilesPush->setObjectName(QStringLiteral("PlotProfilesPush"));

        gridLayout->addWidget(PlotProfilesPush, 2, 1, 1, 1);

        cancelButton = new QDialogButtonBox(extractProfile);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setStandardButtons(QDialogButtonBox::Cancel);

        gridLayout->addWidget(cancelButton, 2, 3, 1, 1);


        retranslateUi(extractProfile);

        QMetaObject::connectSlotsByName(extractProfile);
    } // setupUi

    void retranslateUi(QDialog *extractProfile)
    {
        extractProfile->setWindowTitle(QApplication::translate("extractProfile", "display surfaces", nullptr));
        TitleText->setText(QApplication::translate("extractProfile", "Pick two points (line along witch to segment)", nullptr));
        P1name->setText(QApplication::translate("extractProfile", "P1:", nullptr));
        P1Z->setText(QApplication::translate("extractProfile", "Z:", nullptr));
        P1Y->setText(QApplication::translate("extractProfile", "Y:", nullptr));
        P1X->setText(QApplication::translate("extractProfile", "X:", nullptr));
        P2name->setText(QApplication::translate("extractProfile", "P2:", nullptr));
        P2Z->setText(QApplication::translate("extractProfile", "Z:", nullptr));
        P2Y->setText(QApplication::translate("extractProfile", "Y:", nullptr));
        P2X->setText(QApplication::translate("extractProfile", "X:", nullptr));
        PlotProfilesPush->setText(QApplication::translate("extractProfile", "Plot Profiles", nullptr));
    } // retranslateUi

};

namespace Ui {
    class extractProfile: public Ui_extractProfile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXTRACTPROFILE_H
