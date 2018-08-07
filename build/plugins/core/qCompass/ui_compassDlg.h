/********************************************************************************
** Form generated from reading UI file 'compassDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPASSDLG_H
#define UI_COMPASSDLG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_compassDlg
{
public:
    QHBoxLayout *hboxLayout;
    QLabel *modeLabel_2;
    QPushButton *compassMode;
    QPushButton *mapMode;
    QFrame *line_4;
    QLabel *modeLabel;
    QPushButton *pickModeButton;
    QPushButton *planeModeButton;
    QPushButton *traceModeButton;
    QPushButton *pairModeButton;
    QToolButton *extraModeButton;
    QFrame *line_2;
    QToolButton *algorithmButton;
    QToolButton *undoButton;
    QToolButton *saveButton;
    QToolButton *infoButton;
    QToolButton *acceptButton;
    QToolButton *closeButton;

    void setupUi(QDialog *compassDlg)
    {
        if (compassDlg->objectName().isEmpty())
            compassDlg->setObjectName(QStringLiteral("compassDlg"));
        compassDlg->resize(575, 33);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(compassDlg->sizePolicy().hasHeightForWidth());
        compassDlg->setSizePolicy(sizePolicy);
        hboxLayout = new QHBoxLayout(compassDlg);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hboxLayout->setContentsMargins(2, 2, 2, 2);
        modeLabel_2 = new QLabel(compassDlg);
        modeLabel_2->setObjectName(QStringLiteral("modeLabel_2"));

        hboxLayout->addWidget(modeLabel_2);

        compassMode = new QPushButton(compassDlg);
        compassMode->setObjectName(QStringLiteral("compassMode"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/CC/images/qCompass.png"), QSize(), QIcon::Normal, QIcon::Off);
        compassMode->setIcon(icon);
        compassMode->setCheckable(true);
        compassMode->setChecked(true);
        compassMode->setFlat(false);

        hboxLayout->addWidget(compassMode);

        mapMode = new QPushButton(compassDlg);
        mapMode->setObjectName(QStringLiteral("mapMode"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/CC/images/mapIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        mapMode->setIcon(icon1);
        mapMode->setCheckable(true);

        hboxLayout->addWidget(mapMode);

        line_4 = new QFrame(compassDlg);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        hboxLayout->addWidget(line_4);

        modeLabel = new QLabel(compassDlg);
        modeLabel->setObjectName(QStringLiteral("modeLabel"));
        modeLabel->setFrameShape(QFrame::NoFrame);
        modeLabel->setScaledContents(false);

        hboxLayout->addWidget(modeLabel);

        pickModeButton = new QPushButton(compassDlg);
        pickModeButton->setObjectName(QStringLiteral("pickModeButton"));
        pickModeButton->setEnabled(true);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/CC/images/dbGBLSensorSymbol.png"), QSize(), QIcon::Normal, QIcon::Off);
        pickModeButton->setIcon(icon2);
        pickModeButton->setCheckable(true);
        pickModeButton->setChecked(true);

        hboxLayout->addWidget(pickModeButton);

        planeModeButton = new QPushButton(compassDlg);
        planeModeButton->setObjectName(QStringLiteral("planeModeButton"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/CC/images/ccSamplePoints.png"), QSize(), QIcon::Normal, QIcon::Off);
        planeModeButton->setIcon(icon3);
        planeModeButton->setCheckable(true);
        planeModeButton->setChecked(false);
        planeModeButton->setAutoDefault(false);
        planeModeButton->setFlat(false);

        hboxLayout->addWidget(planeModeButton);

        traceModeButton = new QPushButton(compassDlg);
        traceModeButton->setObjectName(QStringLiteral("traceModeButton"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/CC/images/orthoSections.png"), QSize(), QIcon::Normal, QIcon::Off);
        traceModeButton->setIcon(icon4);
        traceModeButton->setCheckable(true);
        traceModeButton->setChecked(false);
        traceModeButton->setAutoDefault(false);

        hboxLayout->addWidget(traceModeButton);

        pairModeButton = new QPushButton(compassDlg);
        pairModeButton->setObjectName(QStringLiteral("pairModeButton"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/CC/images/smallPointDistance.png"), QSize(), QIcon::Normal, QIcon::Off);
        pairModeButton->setIcon(icon5);
        pairModeButton->setCheckable(true);
        pairModeButton->setAutoDefault(false);

        hboxLayout->addWidget(pairModeButton);

        extraModeButton = new QToolButton(compassDlg);
        extraModeButton->setObjectName(QStringLiteral("extraModeButton"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/CC/images/ccAddConstSF.png"), QSize(), QIcon::Normal, QIcon::Off);
        extraModeButton->setIcon(icon6);
        extraModeButton->setCheckable(true);
        extraModeButton->setChecked(false);

        hboxLayout->addWidget(extraModeButton);

        line_2 = new QFrame(compassDlg);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        hboxLayout->addWidget(line_2);

        algorithmButton = new QToolButton(compassDlg);
        algorithmButton->setObjectName(QStringLiteral("algorithmButton"));
        algorithmButton->setEnabled(true);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/CC/images/ccGear.png"), QSize(), QIcon::Normal, QIcon::Off);
        algorithmButton->setIcon(icon7);
        algorithmButton->setCheckable(false);
        algorithmButton->setChecked(false);
        algorithmButton->setPopupMode(QToolButton::InstantPopup);
        algorithmButton->setAutoRaise(false);

        hboxLayout->addWidget(algorithmButton);

        undoButton = new QToolButton(compassDlg);
        undoButton->setObjectName(QStringLiteral("undoButton"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/CC/images/smallRevert.png"), QSize(), QIcon::Normal, QIcon::Off);
        undoButton->setIcon(icon8);

        hboxLayout->addWidget(undoButton);

        saveButton = new QToolButton(compassDlg);
        saveButton->setObjectName(QStringLiteral("saveButton"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/CC/images/ccSave.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveButton->setIcon(icon9);

        hboxLayout->addWidget(saveButton);

        infoButton = new QToolButton(compassDlg);
        infoButton->setObjectName(QStringLiteral("infoButton"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/CC/images/ccConsole.png"), QSize(), QIcon::Normal, QIcon::Off);
        infoButton->setIcon(icon10);

        hboxLayout->addWidget(infoButton);

        acceptButton = new QToolButton(compassDlg);
        acceptButton->setObjectName(QStringLiteral("acceptButton"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/CC/images/smallValidate.png"), QSize(), QIcon::Normal, QIcon::Off);
        acceptButton->setIcon(icon11);

        hboxLayout->addWidget(acceptButton);

        closeButton = new QToolButton(compassDlg);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/CC/images/smallCancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        closeButton->setIcon(icon12);

        hboxLayout->addWidget(closeButton);


        retranslateUi(compassDlg);

        compassMode->setDefault(false);
        planeModeButton->setDefault(false);


        QMetaObject::connectSlotsByName(compassDlg);
    } // setupUi

    void retranslateUi(QDialog *compassDlg)
    {
        compassDlg->setWindowTitle(QApplication::translate("compassDlg", "Compass", nullptr));
        modeLabel_2->setText(QApplication::translate("compassDlg", "Mode:", nullptr));
#ifndef QT_NO_TOOLTIP
        compassMode->setToolTip(QApplication::translate("compassDlg", "Activate compass mode to make structural measurements", nullptr));
#endif // QT_NO_TOOLTIP
        compassMode->setText(QString());
#ifndef QT_NO_TOOLTIP
        mapMode->setToolTip(QApplication::translate("compassDlg", "Activate map mode to define geological features", nullptr));
#endif // QT_NO_TOOLTIP
        mapMode->setText(QString());
        modeLabel->setText(QApplication::translate("compassDlg", "Tool:", nullptr));
#ifndef QT_NO_TOOLTIP
        pickModeButton->setToolTip(QApplication::translate("compassDlg", "Picking Tool. Use this to select GeoObjects or measurements.", nullptr));
#endif // QT_NO_TOOLTIP
        pickModeButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        planeModeButton->setToolTip(QApplication::translate("compassDlg", "Plane Tool: Measure surface orientations", nullptr));
#endif // QT_NO_TOOLTIP
        planeModeButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        traceModeButton->setToolTip(QApplication::translate("compassDlg", "Trace Tool: Measure orientation from structure trace", nullptr));
#endif // QT_NO_TOOLTIP
        traceModeButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        pairModeButton->setToolTip(QApplication::translate("compassDlg", "Lineation Tool: Measure distances and directions", nullptr));
#endif // QT_NO_TOOLTIP
        pairModeButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        extraModeButton->setToolTip(QApplication::translate("compassDlg", "Other Tools", nullptr));
#endif // QT_NO_TOOLTIP
        extraModeButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        algorithmButton->setToolTip(QApplication::translate("compassDlg", "Change tool and visibility settings", nullptr));
#endif // QT_NO_TOOLTIP
        algorithmButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        undoButton->setToolTip(QApplication::translate("compassDlg", "Undo last action", nullptr));
#endif // QT_NO_TOOLTIP
        undoButton->setText(QApplication::translate("compassDlg", "...", nullptr));
#ifndef QT_NO_SHORTCUT
        undoButton->setShortcut(QApplication::translate("compassDlg", "Ctrl+Z", nullptr));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        saveButton->setToolTip(QApplication::translate("compassDlg", "Export interpretation and measurements", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        saveButton->setStatusTip(QApplication::translate("compassDlg", "Save current label (added to cloud children)", nullptr));
#endif // QT_NO_STATUSTIP
        saveButton->setText(QApplication::translate("compassDlg", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        infoButton->setToolTip(QApplication::translate("compassDlg", "Show readme and help information", nullptr));
#endif // QT_NO_TOOLTIP
        infoButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        acceptButton->setToolTip(QApplication::translate("compassDlg", "Accept latest changes", nullptr));
#endif // QT_NO_TOOLTIP
        acceptButton->setText(QString());
#ifndef QT_NO_SHORTCUT
        acceptButton->setShortcut(QApplication::translate("compassDlg", "Return", nullptr));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        closeButton->setToolTip(QApplication::translate("compassDlg", "Exit ccCompass plugin. Thanks for visiting :)", nullptr));
#endif // QT_NO_TOOLTIP
        closeButton->setText(QApplication::translate("compassDlg", "...", nullptr));
#ifndef QT_NO_SHORTCUT
        closeButton->setShortcut(QApplication::translate("compassDlg", "Esc", nullptr));
#endif // QT_NO_SHORTCUT
    } // retranslateUi

};

namespace Ui {
    class compassDlg: public Ui_compassDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPASSDLG_H
