/********************************************************************************
** Form generated from reading UI file 'plotShorelines.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLOTSHORELINES_H
#define UI_PLOTSHORELINES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_plotShorelines
{
public:
    QFrame *frame;
    QLabel *title;
    QTextEdit *Text;
    QPushButton *Close;
    QPushButton *SaveCSV;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(500, 461);
        frame = new QFrame(Dialog);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 10, 481, 441));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        title = new QLabel(frame);
        title->setObjectName(QStringLiteral("title"));
        title->setGeometry(QRect(10, 10, 461, 20));
        title->setAlignment(Qt::AlignCenter);
        Text = new QTextEdit(frame);
        Text->setObjectName(QStringLiteral("Text"));
        Text->setGeometry(QRect(10, 40, 461, 361));
        Close = new QPushButton(frame);
        Close->setObjectName(QStringLiteral("Close"));
        Close->setGeometry(QRect(390, 410, 80, 23));
        SaveCSV = new QPushButton(frame);
        SaveCSV->setObjectName(QStringLiteral("SaveCSV"));
        SaveCSV->setGeometry(QRect(300, 410, 80, 23));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("plotShorelines", "display surfaces", nullptr));
        title->setText(QApplication::translate("plotShorelines", "Format: Bottom  -  Top  -  Volume ", nullptr));
        Close->setText(QApplication::translate("plotShorelines", "Close", nullptr));
        SaveCSV->setText(QApplication::translate("plotShorelines", "Save .csv", nullptr));
    } // retranslateUi

};

namespace Ui {
    class plotShorelines: public Ui_plotShorelines {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLOTSHORELINES_H
