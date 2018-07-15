/********************************************************************************
** Form generated from reading UI file 'dummyFeat.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DUMMYFEAT_H
#define UI_DUMMYFEAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_dummyFeat
{
public:
    QLabel *textLabel;

    void setupUi(QDialog *dummyFeat)
    {
        if (dummyFeat->objectName().isEmpty())
            dummyFeat->setObjectName(QStringLiteral("dummyFeat"));
        dummyFeat->resize(121, 35);
        textLabel = new QLabel(dummyFeat);
        textLabel->setObjectName(QStringLiteral("textLabel"));
        textLabel->setGeometry(QRect(20, 5, 82, 20));

        retranslateUi(dummyFeat);

        QMetaObject::connectSlotsByName(dummyFeat);
    } // setupUi

    void retranslateUi(QDialog *dummyFeat)
    {
        dummyFeat->setWindowTitle(QApplication::translate("dummyFeat", "display surfaces", nullptr));
        textLabel->setText(QApplication::translate("dummyFeat", " Hello, World!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dummyFeat: public Ui_dummyFeat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DUMMYFEAT_H
