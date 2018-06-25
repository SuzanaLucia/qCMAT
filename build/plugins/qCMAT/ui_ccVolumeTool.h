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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ccVolumeTool
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *ccVolumeTool)
    {
        if (ccVolumeTool->objectName().isEmpty())
            ccVolumeTool->setObjectName(QStringLiteral("ccVolumeTool"));
        ccVolumeTool->resize(400, 300);
        pushButton = new QPushButton(ccVolumeTool);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(90, 70, 211, 71));

        retranslateUi(ccVolumeTool);

        QMetaObject::connectSlotsByName(ccVolumeTool);
    } // setupUi

    void retranslateUi(QDialog *ccVolumeTool)
    {
        ccVolumeTool->setWindowTitle(QApplication::translate("ccVolumeTool", "ccVolumeTool", nullptr));
        pushButton->setText(QApplication::translate("ccVolumeTool", "CalculateVolume", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ccVolumeTool: public Ui_ccVolumeTool {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CCVOLUMETOOL_H
