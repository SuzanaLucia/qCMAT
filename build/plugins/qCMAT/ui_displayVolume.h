/********************************************************************************
** Form generated from reading UI file 'displayVolume.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAYVOLUME_H
#define UI_DISPLAYVOLUME_H

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

class Ui_displayVolume
{
public:
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLabel *title;
    QPushButton *Close;
    QTextEdit *Text;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(500, 431);
        gridLayout_2 = new QGridLayout(Dialog);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        frame = new QFrame(Dialog);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        title = new QLabel(frame);
        title->setObjectName(QStringLiteral("title"));
        title->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(title, 0, 0, 1, 1);

        Close = new QPushButton(frame);
        Close->setObjectName(QStringLiteral("Close"));

        gridLayout->addWidget(Close, 0, 1, 1, 1);

        Text = new QTextEdit(frame);
        Text->setObjectName(QStringLiteral("Text"));

        gridLayout->addWidget(Text, 1, 0, 1, 3);


        gridLayout_2->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("displayVolume", "Dialog", nullptr));
        title->setText(QApplication::translate("displayVolume", "Format: Bottom  -  Top  -  Volume ", nullptr));
        Close->setText(QApplication::translate("displayVolume", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class displayVolume: public Ui_displayVolume {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYVOLUME_H
