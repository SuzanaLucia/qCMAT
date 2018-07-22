/********************************************************************************
** Form generated from reading UI file 'disclaimerDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISCLAIMERDLG_H
#define UI_DISCLAIMERDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DisclaimerDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *logo;
    QTextEdit *disclaimerTextEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DisclaimerDialog)
    {
        if (DisclaimerDialog->objectName().isEmpty())
            DisclaimerDialog->setObjectName(QStringLiteral("DisclaimerDialog"));
        DisclaimerDialog->resize(480, 270);
        QIcon icon;
        icon.addFile(QStringLiteral(":/CC/plugin/qM3C2Plugin/images/iconM3C2.png"), QSize(), QIcon::Normal, QIcon::Off);
        DisclaimerDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(DisclaimerDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        logo = new QLabel(DisclaimerDialog);
        logo->setObjectName(QStringLiteral("logo"));
        logo->setMaximumSize(QSize(150, 174));
        logo->setPixmap(QPixmap(QString::fromUtf8(":/CC/plugin/qM3C2Plugin/images/Logo_cnrs_eub_eec.png")));
        logo->setScaledContents(true);

        horizontalLayout->addWidget(logo);

        disclaimerTextEdit = new QTextEdit(DisclaimerDialog);
        disclaimerTextEdit->setObjectName(QStringLiteral("disclaimerTextEdit"));
        disclaimerTextEdit->setReadOnly(true);

        horizontalLayout->addWidget(disclaimerTextEdit);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(DisclaimerDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DisclaimerDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), DisclaimerDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DisclaimerDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(DisclaimerDialog);
    } // setupUi

    void retranslateUi(QDialog *DisclaimerDialog)
    {
        DisclaimerDialog->setWindowTitle(QApplication::translate("DisclaimerDialog", "qM3C2 (disclaimer)", nullptr));
        logo->setText(QString());
        disclaimerTextEdit->setHtml(QApplication::translate("DisclaimerDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Calibri,sans-serif'; font-size:10pt; font-weight:600; color:#1f497d;\">Point cloud comparison with M3C2</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Calibri,sans-serif'; font-size:10pt; font-style:italic; color:#1f497d;\">Lague et al., Accurate 3D comparison of complex topography with terrestrial laser scanner, ISPRS j. of Ph"
                        "otogram.\302\240Rem. Sens., 2013</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Calibri,sans-serif'; font-size:10pt; font-style:italic; color:#1f497d; background-color:#ffffff;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'MS Shell Dlg 2,serif'; font-size:8pt; color:#aa007f; background-color:#ffffff;\">This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-fa"
                        "mily:'arial,sans-serif'; font-size:10pt; font-style:italic; color:#222222; background-color:#ffffff;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Calibri,sans-serif'; font-size:10pt; color:#1f497d; background-color:#ffffff;\">Funded by Universit\303\251 Europ\303\251enne de Bretagne, Centre National de la Recherche Scientifique and EEC Marie-Curie actions</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DisclaimerDialog: public Ui_DisclaimerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISCLAIMERDLG_H
