/********************************************************************************
** Form generated from reading UI file 'poissonReconParamDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POISSONRECONPARAMDLG_H
#define UI_POISSONRECONPARAMDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PoissonReconParamDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *octreeLevelSpinBox;
    QCheckBox *importColorsCheckBox;
    QTabWidget *tabWidget;
    QWidget *tabDensity;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *densityCheckBox;
    QTextEdit *textEdit;
    QWidget *tabAdvanced;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    QDoubleSpinBox *samplesPerNodeSpinBox;
    QLabel *label_2;
    QSpinBox *fullDepthSpinBox;
    QLabel *label_5;
    QDoubleSpinBox *weightDoubleSpinBox;
    QLabel *label_4;
    QComboBox *boundaryComboBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PoissonReconParamDialog)
    {
        if (PoissonReconParamDialog->objectName().isEmpty())
            PoissonReconParamDialog->setObjectName(QStringLiteral("PoissonReconParamDialog"));
        PoissonReconParamDialog->resize(400, 350);
        verticalLayout = new QVBoxLayout(PoissonReconParamDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(PoissonReconParamDialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        octreeLevelSpinBox = new QSpinBox(PoissonReconParamDialog);
        octreeLevelSpinBox->setObjectName(QStringLiteral("octreeLevelSpinBox"));
        octreeLevelSpinBox->setMinimum(4);
        octreeLevelSpinBox->setMaximum(24);
        octreeLevelSpinBox->setValue(8);

        horizontalLayout->addWidget(octreeLevelSpinBox);


        verticalLayout->addLayout(horizontalLayout);

        importColorsCheckBox = new QCheckBox(PoissonReconParamDialog);
        importColorsCheckBox->setObjectName(QStringLiteral("importColorsCheckBox"));
        importColorsCheckBox->setLayoutDirection(Qt::RightToLeft);
        importColorsCheckBox->setChecked(true);

        verticalLayout->addWidget(importColorsCheckBox);

        tabWidget = new QTabWidget(PoissonReconParamDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabDensity = new QWidget();
        tabDensity->setObjectName(QStringLiteral("tabDensity"));
        verticalLayout_3 = new QVBoxLayout(tabDensity);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        densityCheckBox = new QCheckBox(tabDensity);
        densityCheckBox->setObjectName(QStringLiteral("densityCheckBox"));

        verticalLayout_3->addWidget(densityCheckBox);

        textEdit = new QTextEdit(tabDensity);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setEnabled(false);

        verticalLayout_3->addWidget(textEdit);

        tabWidget->addTab(tabDensity, QString());
        tabAdvanced = new QWidget();
        tabAdvanced->setObjectName(QStringLiteral("tabAdvanced"));
        formLayout_2 = new QFormLayout(tabAdvanced);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_3 = new QLabel(tabAdvanced);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_3);

        samplesPerNodeSpinBox = new QDoubleSpinBox(tabAdvanced);
        samplesPerNodeSpinBox->setObjectName(QStringLiteral("samplesPerNodeSpinBox"));
        samplesPerNodeSpinBox->setDecimals(2);
        samplesPerNodeSpinBox->setMinimum(1);
        samplesPerNodeSpinBox->setMaximum(20);
        samplesPerNodeSpinBox->setSingleStep(1);
        samplesPerNodeSpinBox->setValue(1);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, samplesPerNodeSpinBox);

        label_2 = new QLabel(tabAdvanced);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_2);

        fullDepthSpinBox = new QSpinBox(tabAdvanced);
        fullDepthSpinBox->setObjectName(QStringLiteral("fullDepthSpinBox"));
        fullDepthSpinBox->setValue(5);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, fullDepthSpinBox);

        label_5 = new QLabel(tabAdvanced);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_5);

        weightDoubleSpinBox = new QDoubleSpinBox(tabAdvanced);
        weightDoubleSpinBox->setObjectName(QStringLiteral("weightDoubleSpinBox"));
        weightDoubleSpinBox->setMaximum(999.99);
        weightDoubleSpinBox->setValue(4);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, weightDoubleSpinBox);

        label_4 = new QLabel(tabAdvanced);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_4);

        boundaryComboBox = new QComboBox(tabAdvanced);
        boundaryComboBox->addItem(QString());
        boundaryComboBox->addItem(QString());
        boundaryComboBox->addItem(QString());
        boundaryComboBox->setObjectName(QStringLiteral("boundaryComboBox"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, boundaryComboBox);

        tabWidget->addTab(tabAdvanced, QString());

        verticalLayout->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(PoissonReconParamDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(PoissonReconParamDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PoissonReconParamDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PoissonReconParamDialog, SLOT(reject()));
        QObject::connect(densityCheckBox, SIGNAL(toggled(bool)), textEdit, SLOT(setEnabled(bool)));

        tabWidget->setCurrentIndex(0);
        boundaryComboBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(PoissonReconParamDialog);
    } // setupUi

    void retranslateUi(QDialog *PoissonReconParamDialog)
    {
        PoissonReconParamDialog->setWindowTitle(QApplication::translate("PoissonReconParamDialog", "Poisson Surface Reconstruction", nullptr));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("PoissonReconParamDialog", "maximum reconstruction depth", nullptr));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("PoissonReconParamDialog", "Octree depth", nullptr));
#ifndef QT_NO_TOOLTIP
        octreeLevelSpinBox->setToolTip(QApplication::translate("PoissonReconParamDialog", "The maximum depth of the tree that will be used for surface reconstruction", nullptr));
#endif // QT_NO_TOOLTIP
        importColorsCheckBox->setText(QApplication::translate("PoissonReconParamDialog", "interpolate cloud colors", nullptr));
#ifndef QT_NO_TOOLTIP
        densityCheckBox->setToolTip(QApplication::translate("PoissonReconParamDialog", "If this flag is enabled, the sampling density is output as a scalar field", nullptr));
#endif // QT_NO_TOOLTIP
        densityCheckBox->setText(QApplication::translate("PoissonReconParamDialog", "output density as SF", nullptr));
        textEdit->setHtml(QApplication::translate("PoissonReconParamDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Density is useful to reduce the extents of the output mesh to fit as much as possible the input point cloud.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">On the output mesh:</span></p>\n"
"<p style=\" margin-top:0px; margin-botto"
                        "m:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">- Change the SF '</span><span style=\" font-size:8pt; font-style:italic;\">min displayed'</span><span style=\" font-size:8pt;\">' value (in the mesh properties) until the visible part meets your expectations</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">- Eventually export this mesh as a new one with '</span><span style=\" font-size:8pt; font-style:italic;\">Edit &gt; Scalar fields &gt; Filter by Value</span><span style=\" font-size:8pt;\">' (you can delete the 'density' scalar field afterwards) </span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabDensity), QApplication::translate("PoissonReconParamDialog", "Density", nullptr));
#ifndef QT_NO_TOOLTIP
        label_3->setToolTip(QApplication::translate("PoissonReconParamDialog", "The minimum number of sample points that should fall within an octree node\n"
"as the octree construction is adapted to sampling density. For noise-free\n"
"samples, small values in the range [1.0 - 5.0] can be used. For more noisy\n"
"samples, larger values in the range [15.0 - 20.0] may be needed to provide\n"
"a smoother, noise-reduced, reconstruction.", nullptr));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("PoissonReconParamDialog", "samples per node", nullptr));
#ifndef QT_NO_TOOLTIP
        samplesPerNodeSpinBox->setToolTip(QApplication::translate("PoissonReconParamDialog", "The minimum number of sample points that should fall within an octree node\n"
"as the octree construction is adapted to sampling density. For noise-free\n"
"samples, small values in the range [1.0 - 5.0] can be used. For more noisy\n"
"samples, larger values in the range [15.0 - 20.0] may be needed to provide\n"
"a smoother, noise-reduced, reconstruction.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        label_2->setToolTip(QApplication::translate("PoissonReconParamDialog", "The maximum depth of the tree that will be used for surface reconstruction", nullptr));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("PoissonReconParamDialog", "full depth", nullptr));
#ifndef QT_NO_TOOLTIP
        fullDepthSpinBox->setToolTip(QApplication::translate("PoissonReconParamDialog", "The depth beyond depth the octree will be adapted. At coarser depths, the octree will be complete.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        label_5->setToolTip(QApplication::translate("PoissonReconParamDialog", "The importance that interpolation of the point samples is given in the formulation of the screened Poisson equation", nullptr));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("PoissonReconParamDialog", "point weight", nullptr));
#ifndef QT_NO_TOOLTIP
        weightDoubleSpinBox->setToolTip(QApplication::translate("PoissonReconParamDialog", "The importance that interpolation of the point samples is given in the formulation of the screened Poisson equation", nullptr));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("PoissonReconParamDialog", "boundary", nullptr));
        boundaryComboBox->setItemText(0, QApplication::translate("PoissonReconParamDialog", "Free", nullptr));
        boundaryComboBox->setItemText(1, QApplication::translate("PoissonReconParamDialog", "Dirichlet", nullptr));
        boundaryComboBox->setItemText(2, QApplication::translate("PoissonReconParamDialog", "Neumann", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(tabAdvanced), QApplication::translate("PoissonReconParamDialog", "Advanced", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PoissonReconParamDialog: public Ui_PoissonReconParamDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POISSONRECONPARAMDLG_H
