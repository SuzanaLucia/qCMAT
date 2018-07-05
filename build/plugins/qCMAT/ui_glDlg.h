/********************************************************************************
** Form generated from reading UI file 'glDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GLDLG_H
#define UI_GLDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QOpenGLWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_glDlg
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QOpenGLWidget *displayBox;
    QDialogButtonBox *cancelButton;

    void setupUi(QDialog *glDlg)
    {
        if (glDlg->objectName().isEmpty())
            glDlg->setObjectName(QStringLiteral("glDlg"));
        glDlg->resize(611, 479);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(glDlg->sizePolicy().hasHeightForWidth());
        glDlg->setSizePolicy(sizePolicy);
        glDlg->setSizeGripEnabled(true);
        verticalLayout_2 = new QVBoxLayout(glDlg);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        widget = new QWidget(glDlg);
        widget->setObjectName(QStringLiteral("widget"));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        displayBox = new QOpenGLWidget(widget);
        displayBox->setObjectName(QStringLiteral("displayBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(displayBox->sizePolicy().hasHeightForWidth());
        displayBox->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(displayBox);


        verticalLayout_2->addWidget(widget);

        cancelButton = new QDialogButtonBox(glDlg);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        QFont font;
        font.setBold(false);
        font.setUnderline(false);
        font.setWeight(50);
        font.setStrikeOut(false);
        font.setKerning(true);
        cancelButton->setFont(font);
        cancelButton->setStandardButtons(QDialogButtonBox::Cancel);

        verticalLayout_2->addWidget(cancelButton);


        retranslateUi(glDlg);

        QMetaObject::connectSlotsByName(glDlg);
    } // setupUi

    void retranslateUi(QDialog *glDlg)
    {
        glDlg->setWindowTitle(QApplication::translate("glDlg", "qCMAT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class glDlg: public Ui_glDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GLDLG_H
