/********************************************************************************
** Form generated from reading UI file 'displayVolume.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAYVOLUME_H
#define UI_DISPLAYVOLUME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_displayVolume
{
public:
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QGridLayout *gridLayout;
    QTextEdit *Text;
    QLabel *title;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *cancelButton;

    void setupUi(QDialog *displayVolume)
    {
        if (displayVolume->objectName().isEmpty())
            displayVolume->setObjectName(QStringLiteral("displayVolume"));
        displayVolume->resize(483, 454);
        gridLayout_2 = new QGridLayout(displayVolume);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        frame = new QFrame(displayVolume);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        Text = new QTextEdit(frame);
        Text->setObjectName(QStringLiteral("Text"));

        gridLayout->addWidget(Text, 1, 0, 1, 3);

        title = new QLabel(frame);
        title->setObjectName(QStringLiteral("title"));
        title->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(title, 0, 0, 1, 3);


        gridLayout_2->addWidget(frame, 0, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(368, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 0, 1, 1);

        cancelButton = new QDialogButtonBox(displayVolume);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setStandardButtons(QDialogButtonBox::Cancel);

        gridLayout_2->addWidget(cancelButton, 1, 1, 1, 1);


        retranslateUi(displayVolume);

        QMetaObject::connectSlotsByName(displayVolume);
    } // setupUi

    void retranslateUi(QDialog *displayVolume)
    {
        displayVolume->setWindowTitle(QApplication::translate("displayVolume", "Dialog", nullptr));
        title->setText(QApplication::translate("displayVolume", "Format: id -  Bottom  -  Top  -  Volume[cloud 1] - Volume [c2] ... ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class displayVolume: public Ui_displayVolume {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYVOLUME_H
