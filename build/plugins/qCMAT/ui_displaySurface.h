/********************************************************************************
** Form generated from reading UI file 'displaySurface.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAYSURFACE_H
#define UI_DISPLAYSURFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_displaySurface
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QLabel *title;
    QTextEdit *Text;
    QPushButton *SaveCSV;
    QPushButton *Close;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(500, 461);
        gridLayout = new QGridLayout(Dialog);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        frame = new QFrame(Dialog);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        title = new QLabel(frame);
        title->setObjectName(QStringLiteral("title"));
        title->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(title, 0, 0, 1, 2);

        Text = new QTextEdit(frame);
        Text->setObjectName(QStringLiteral("Text"));

        gridLayout_2->addWidget(Text, 1, 0, 1, 2);

        SaveCSV = new QPushButton(frame);
        SaveCSV->setObjectName(QStringLiteral("SaveCSV"));

        gridLayout_2->addWidget(SaveCSV, 2, 0, 1, 1);

        Close = new QPushButton(frame);
        Close->setObjectName(QStringLiteral("Close"));

        gridLayout_2->addWidget(Close, 2, 1, 1, 1);


        gridLayout->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("displaySurface", "display surfaces", nullptr));
        title->setText(QApplication::translate("displaySurface", "Format: Bottom  -  Top  -  Volume ", nullptr));
        SaveCSV->setText(QApplication::translate("displaySurface", "Save .csv", nullptr));
        Close->setText(QApplication::translate("displaySurface", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class displaySurface: public Ui_displaySurface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYSURFACE_H
