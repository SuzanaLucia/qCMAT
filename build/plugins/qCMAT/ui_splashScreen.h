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

class Ui_ccSplashScreen
{
public:
    QLabel *label;
    QLabel *splashScreen;

    void setupUi(QDialog *ccSplashScreen)
    {
        if (ccSplashScreen->objectName().isEmpty())
            ccSplashScreen->setObjectName(QStringLiteral("ccSplashScreen"));
        ccSplashScreen->resize(396, 396);
        label = new QLabel(ccSplashScreen);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(411, 412, 16, 16));
        splashScreen = new QLabel(ccSplashScreen);
        splashScreen->setObjectName(QStringLiteral("splashScreen"));
        splashScreen->setGeometry(QRect(0, 0, 396, 397));
        splashScreen->setPixmap(QPixmap(QString::fromUtf8("../images/qCMATSplash.png")));

        retranslateUi(ccSplashScreen);

        QMetaObject::connectSlotsByName(ccSplashScreen);
    } // setupUi

    void retranslateUi(QDialog *ccSplashScreen)
    {
        ccSplashScreen->setWindowTitle(QApplication::translate("ccSplashScreen", "qCMAT", nullptr));
        label->setText(QString());
        splashScreen->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ccSplashScreen: public Ui_ccSplashScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPLASHSCREEN_H