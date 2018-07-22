/********************************************************************************
** Form generated from reading UI file 'splashScreen.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPLASHSCREEN_H
#define UI_SPLASHSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_splashScreen
{
public:
    QLabel *label;
    QLabel *splashScreen;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(396, 396);
        label = new QLabel(Dialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(411, 412, 16, 16));
        splashScreen = new QLabel(Dialog);
        splashScreen->setObjectName(QStringLiteral("splashScreen"));
        splashScreen->setGeometry(QRect(0, 0, 396, 397));
        splashScreen->setPixmap(QPixmap(QString::fromUtf8("../images/qCMATSplash.png")));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("splashScreen", "Dialog", nullptr));
        label->setText(QString());
        splashScreen->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class splashScreen: public Ui_splashScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPLASHSCREEN_H
