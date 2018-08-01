/********************************************************************************
** Form generated from reading UI file 'displaySurface.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAYSURFACE_H
#define UI_DISPLAYSURFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_displaySurface
{
public:
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLabel *title;
    QTextEdit *Text;
    QPushButton *SaveCSV;
    QDialogButtonBox *cancelButton;

    void setupUi(QDialog *displaySurface)
    {
        if (displaySurface->objectName().isEmpty())
            displaySurface->setObjectName(QStringLiteral("displaySurface"));
        displaySurface->resize(312, 261);
        gridLayout_2 = new QGridLayout(displaySurface);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        frame = new QFrame(displaySurface);
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

        gridLayout->addWidget(title, 0, 0, 1, 2);

        Text = new QTextEdit(frame);
        Text->setObjectName(QStringLiteral("Text"));

        gridLayout->addWidget(Text, 1, 0, 1, 2);

        SaveCSV = new QPushButton(frame);
        SaveCSV->setObjectName(QStringLiteral("SaveCSV"));

        gridLayout->addWidget(SaveCSV, 2, 0, 1, 1);

        cancelButton = new QDialogButtonBox(frame);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setStandardButtons(QDialogButtonBox::Cancel);

        gridLayout->addWidget(cancelButton, 2, 1, 1, 1);


        gridLayout_2->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(displaySurface);

        QMetaObject::connectSlotsByName(displaySurface);
    } // setupUi

    void retranslateUi(QDialog *displaySurface)
    {
        displaySurface->setWindowTitle(QApplication::translate("displaySurface", "display surfaces", nullptr));
        title->setText(QApplication::translate("displaySurface", "Format: Bottom  -  Top  -  Volume ", nullptr));
        SaveCSV->setText(QApplication::translate("displaySurface", "Save .csv", nullptr));
    } // retranslateUi

};

namespace Ui {
    class displaySurface: public Ui_displaySurface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYSURFACE_H
