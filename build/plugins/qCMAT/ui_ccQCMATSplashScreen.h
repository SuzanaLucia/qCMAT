/********************************************************************************
** Form generated from reading UI file 'ccQCMATSplashScreen.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CCQCMATSPLASHSCREEN_H
#define UI_CCQCMATSPLASHSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_ccQCMATSplashScreen
{
public:
    QLabel *label;
    QLabel *splashScreen;

    void setupUi(QDialog *ccQCMATSplashScreen)
    {
        if (ccQCMATSplashScreen->objectName().isEmpty())
            ccQCMATSplashScreen->setObjectName(QStringLiteral("ccQCMATSplashScreen"));
        ccQCMATSplashScreen->resize(396, 396);
        label = new QLabel(ccQCMATSplashScreen);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(411, 412, 16, 16));
        splashScreen = new QLabel(ccQCMATSplashScreen);
        splashScreen->setObjectName(QStringLiteral("splashScreen"));
        splashScreen->setGeometry(QRect(0, 0, 396, 397));
        splashScreen->setPixmap(QPixmap(QString::fromUtf8("../images/qCMATSplash.png")));

        retranslateUi(ccQCMATSplashScreen);

        QMetaObject::connectSlotsByName(ccQCMATSplashScreen);
    } // setupUi

    void retranslateUi(QDialog *ccQCMATSplashScreen)
    {
        ccQCMATSplashScreen->setWindowTitle(QApplication::translate("ccQCMATSplashScreen", "qCMAT", nullptr));
        label->setText(QString());
        splashScreen->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ccQCMATSplashScreen: public Ui_ccQCMATSplashScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CCQCMATSPLASHSCREEN_H
