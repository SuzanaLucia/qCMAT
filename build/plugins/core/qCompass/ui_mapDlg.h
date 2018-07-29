/********************************************************************************
** Form generated from reading UI file 'mapDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAPDLG_H
#define UI_MAPDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_mapDlg
{
public:
    QHBoxLayout *hboxLayout;
    QLabel *GeoObjectLabel;
    QToolButton *addObjectButton;
    QFrame *line;
    QLabel *selectionLabel;
    QSpacerItem *horizontalSpacer;
    QPushButton *setLowerButton;
    QPushButton *setUpperButton;
    QPushButton *setInteriorButton;

    void setupUi(QDialog *mapDlg)
    {
        if (mapDlg->objectName().isEmpty())
            mapDlg->setObjectName(QStringLiteral("mapDlg"));
        mapDlg->resize(548, 33);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mapDlg->sizePolicy().hasHeightForWidth());
        mapDlg->setSizePolicy(sizePolicy);
        hboxLayout = new QHBoxLayout(mapDlg);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hboxLayout->setContentsMargins(2, 2, 2, 2);
        GeoObjectLabel = new QLabel(mapDlg);
        GeoObjectLabel->setObjectName(QStringLiteral("GeoObjectLabel"));

        hboxLayout->addWidget(GeoObjectLabel);

        addObjectButton = new QToolButton(mapDlg);
        addObjectButton->setObjectName(QStringLiteral("addObjectButton"));
        addObjectButton->setEnabled(true);
        QIcon icon;
        icon.addFile(QStringLiteral(":/CC/images/ccAddConstSF.png"), QSize(), QIcon::Normal, QIcon::Off);
        addObjectButton->setIcon(icon);
        addObjectButton->setPopupMode(QToolButton::InstantPopup);
        addObjectButton->setAutoRaise(false);

        hboxLayout->addWidget(addObjectButton);

        line = new QFrame(mapDlg);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        hboxLayout->addWidget(line);

        selectionLabel = new QLabel(mapDlg);
        selectionLabel->setObjectName(QStringLiteral("selectionLabel"));
        selectionLabel->setEnabled(false);
        QFont font;
        font.setItalic(true);
        selectionLabel->setFont(font);
        selectionLabel->setLayoutDirection(Qt::LeftToRight);
        selectionLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hboxLayout->addWidget(selectionLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(horizontalSpacer);

        setLowerButton = new QPushButton(mapDlg);
        setLowerButton->setObjectName(QStringLiteral("setLowerButton"));
        setLowerButton->setEnabled(false);
        QPalette palette;
        QBrush brush(QColor(4, 255, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush1(QColor(3, 184, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        QBrush brush2(QColor(120, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        setLowerButton->setPalette(palette);
        setLowerButton->setCheckable(true);
        setLowerButton->setChecked(true);

        hboxLayout->addWidget(setLowerButton);

        setUpperButton = new QPushButton(mapDlg);
        setUpperButton->setObjectName(QStringLiteral("setUpperButton"));
        setUpperButton->setEnabled(false);
        QPalette palette1;
        QBrush brush3(QColor(0, 255, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush3);
        QBrush brush4(QColor(0, 195, 198, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        setUpperButton->setPalette(palette1);
        setUpperButton->setCheckable(true);
        setUpperButton->setChecked(false);
        setUpperButton->setFlat(false);

        hboxLayout->addWidget(setUpperButton);

        setInteriorButton = new QPushButton(mapDlg);
        setInteriorButton->setObjectName(QStringLiteral("setInteriorButton"));
        setInteriorButton->setEnabled(false);
        setInteriorButton->setCheckable(true);
        setInteriorButton->setChecked(false);
        setInteriorButton->setAutoDefault(false);
        setInteriorButton->setFlat(false);

        hboxLayout->addWidget(setInteriorButton);


        retranslateUi(mapDlg);

        setUpperButton->setDefault(false);
        setInteriorButton->setDefault(false);


        QMetaObject::connectSlotsByName(mapDlg);
    } // setupUi

    void retranslateUi(QDialog *mapDlg)
    {
        mapDlg->setWindowTitle(QApplication::translate("mapDlg", "Map", nullptr));
        GeoObjectLabel->setText(QApplication::translate("mapDlg", "GeoObjects:", nullptr));
#ifndef QT_NO_TOOLTIP
        addObjectButton->setToolTip(QApplication::translate("mapDlg", "Create new GeoObject", nullptr));
#endif // QT_NO_TOOLTIP
        addObjectButton->setText(QString());
        selectionLabel->setText(QApplication::translate("mapDlg", "No Selection", nullptr));
#ifndef QT_NO_TOOLTIP
        setLowerButton->setToolTip(QApplication::translate("mapDlg", "Digitise to lower-contact of GeoObject", nullptr));
#endif // QT_NO_TOOLTIP
        setLowerButton->setText(QApplication::translate("mapDlg", "Lower", nullptr));
#ifndef QT_NO_TOOLTIP
        setUpperButton->setToolTip(QApplication::translate("mapDlg", "Digitise to upper-contact of GeoObject", nullptr));
#endif // QT_NO_TOOLTIP
        setUpperButton->setText(QApplication::translate("mapDlg", "Upper", nullptr));
#ifndef QT_NO_TOOLTIP
        setInteriorButton->setToolTip(QApplication::translate("mapDlg", "Digitise to interior of geo-object", nullptr));
#endif // QT_NO_TOOLTIP
        setInteriorButton->setText(QApplication::translate("mapDlg", "Interior", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mapDlg: public Ui_mapDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAPDLG_H
