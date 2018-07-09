/********************************************************************************
** Form generated from reading UI file 'qM3C2Dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QM3C2DIALOG_H
#define UI_QM3C2DIALOG_H

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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_M3C2Dialog
{
public:
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_3;
    QFormLayout *formLayout_3;
    QCheckBox *showCloud1CheckBox;
    QLineEdit *cloud1LineEdit;
    QCheckBox *showCloud2CheckBox;
    QLineEdit *cloud2LineEdit;
    QToolButton *swapCloudsToolButton;
    QTabWidget *m3c2PMTabWidget;
    QWidget *mainParams;
    QVBoxLayout *verticalLayout;
    QGroupBox *mainGroupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QCheckBox *useCloud1NormalsCheckBox;
    QLabel *label_2;
    QDoubleSpinBox *cylDiameterDoubleSpinBox;
    QDoubleSpinBox *normalScaleDoubleSpinBox;
    QDoubleSpinBox *cylHalfHeightDoubleSpinBox;
    QGroupBox *corePointsGroupBox;
    QFormLayout *formLayout;
    QRadioButton *cpUseCloud1RadioButton;
    QRadioButton *cpUseOtherCloudRadioButton;
    QComboBox *cpOtherCloudComboBox;
    QRadioButton *cpSubsampleRadioButton;
    QDoubleSpinBox *cpSubsamplingDoubleSpinBox;
    QFrame *rmsFrame;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *rmsCheckBox;
    QDoubleSpinBox *rmsDoubleSpinBox;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *guessParamsPushButton;
    QSpacerItem *verticalSpacer_4;
    QWidget *normals;
    QVBoxLayout *verticalLayout_4;
    QFrame *normParamsFrame;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *normCalcModeGroupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *normDefaultRadioButton;
    QRadioButton *normMultiScaleRadioButton;
    QRadioButton *normVertRadioButton;
    QRadioButton *normHorizRadioButton;
    QFrame *normMultiScaleFrame;
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *minScaleDoubleSpinBox;
    QDoubleSpinBox *stepScaleDoubleSpinBox;
    QDoubleSpinBox *maxScaleDoubleSpinBox;
    QCheckBox *normUseCorePointsCheckBox;
    QGroupBox *normOriGroupBox;
    QFormLayout *formLayout_2;
    QRadioButton *normOriPreferredRadioButton;
    QComboBox *normOriPreferredComboBox;
    QRadioButton *normOriUseCloudRadioButton;
    QComboBox *normOriCloudComboBox;
    QSpacerItem *verticalSpacer;
    QWidget *advanced;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *useSinglePass4DepthCheckBox;
    QCheckBox *positiveSearchOnlyCheckBox;
    QCheckBox *useMedianCheckBox;
    QFrame *minPoints4StatsFrame;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *useMinPoints4StatCheckBox;
    QSpinBox *minPoints4StatSpinBox;
    QSpacerItem *horizontalSpacer_5;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_3;
    QSpinBox *maxThreadCountSpinBox;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab;
    QVBoxLayout *verticalLayout_8;
    QTextBrowser *m3c2PMTextBrowser;
    QGroupBox *precisionMapsGroupBox;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QLabel *label_4;
    QLabel *label_8;
    QComboBox *c2SxComboBox;
    QComboBox *c1SyComboBox;
    QComboBox *c1SxComboBox;
    QLabel *label_7;
    QComboBox *c2SyComboBox;
    QComboBox *c1SzComboBox;
    QLabel *label_9;
    QComboBox *c2SzComboBox;
    QLabel *label_10;
    QDoubleSpinBox *pm1ScaleDoubleSpinBox;
    QDoubleSpinBox *pm2ScaleDoubleSpinBox;
    QWidget *output;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QComboBox *projDestComboBox;
    QCheckBox *useOriginalCloudCheckBox;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *exportStdDevInfoCheckBox;
    QCheckBox *exportDensityAtProjScaleCheckBox;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_7;
    QToolButton *loadParamsToolButton;
    QToolButton *saveParamsToolButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *M3C2Dialog)
    {
        if (M3C2Dialog->objectName().isEmpty())
            M3C2Dialog->setObjectName(QStringLiteral("M3C2Dialog"));
        M3C2Dialog->resize(755, 490);
        QIcon icon;
        icon.addFile(QStringLiteral(":/CC/plugin/qM3C2Plugin/images/iconM3C2.png"), QSize(), QIcon::Normal, QIcon::Off);
        M3C2Dialog->setWindowIcon(icon);
        verticalLayout_7 = new QVBoxLayout(M3C2Dialog);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        showCloud1CheckBox = new QCheckBox(M3C2Dialog);
        showCloud1CheckBox->setObjectName(QStringLiteral("showCloud1CheckBox"));
        showCloud1CheckBox->setChecked(true);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, showCloud1CheckBox);

        cloud1LineEdit = new QLineEdit(M3C2Dialog);
        cloud1LineEdit->setObjectName(QStringLiteral("cloud1LineEdit"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, cloud1LineEdit);

        showCloud2CheckBox = new QCheckBox(M3C2Dialog);
        showCloud2CheckBox->setObjectName(QStringLiteral("showCloud2CheckBox"));
        showCloud2CheckBox->setChecked(true);

        formLayout_3->setWidget(1, QFormLayout::LabelRole, showCloud2CheckBox);

        cloud2LineEdit = new QLineEdit(M3C2Dialog);
        cloud2LineEdit->setObjectName(QStringLiteral("cloud2LineEdit"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, cloud2LineEdit);


        horizontalLayout_3->addLayout(formLayout_3);

        swapCloudsToolButton = new QToolButton(M3C2Dialog);
        swapCloudsToolButton->setObjectName(QStringLiteral("swapCloudsToolButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/CC/plugin/qM3C2Plugin/images/iconSwap.png"), QSize(), QIcon::Normal, QIcon::Off);
        swapCloudsToolButton->setIcon(icon1);

        horizontalLayout_3->addWidget(swapCloudsToolButton);


        verticalLayout_7->addLayout(horizontalLayout_3);

        m3c2PMTabWidget = new QTabWidget(M3C2Dialog);
        m3c2PMTabWidget->setObjectName(QStringLiteral("m3c2PMTabWidget"));
        mainParams = new QWidget();
        mainParams->setObjectName(QStringLiteral("mainParams"));
        verticalLayout = new QVBoxLayout(mainParams);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        mainGroupBox = new QGroupBox(mainParams);
        mainGroupBox->setObjectName(QStringLiteral("mainGroupBox"));
        gridLayout = new QGridLayout(mainGroupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(mainGroupBox);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        useCloud1NormalsCheckBox = new QCheckBox(mainGroupBox);
        useCloud1NormalsCheckBox->setObjectName(QStringLiteral("useCloud1NormalsCheckBox"));

        gridLayout->addWidget(useCloud1NormalsCheckBox, 0, 3, 1, 1);

        label_2 = new QLabel(mainGroupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        cylDiameterDoubleSpinBox = new QDoubleSpinBox(mainGroupBox);
        cylDiameterDoubleSpinBox->setObjectName(QStringLiteral("cylDiameterDoubleSpinBox"));
        cylDiameterDoubleSpinBox->setDecimals(6);
        cylDiameterDoubleSpinBox->setMinimum(1e-6);
        cylDiameterDoubleSpinBox->setMaximum(1e+9);
        cylDiameterDoubleSpinBox->setValue(1);

        gridLayout->addWidget(cylDiameterDoubleSpinBox, 1, 1, 1, 1);

        normalScaleDoubleSpinBox = new QDoubleSpinBox(mainGroupBox);
        normalScaleDoubleSpinBox->setObjectName(QStringLiteral("normalScaleDoubleSpinBox"));
        normalScaleDoubleSpinBox->setDecimals(6);
        normalScaleDoubleSpinBox->setMinimum(1e-6);
        normalScaleDoubleSpinBox->setMaximum(1e+9);
        normalScaleDoubleSpinBox->setValue(1);

        gridLayout->addWidget(normalScaleDoubleSpinBox, 0, 1, 1, 1);

        cylHalfHeightDoubleSpinBox = new QDoubleSpinBox(mainGroupBox);
        cylHalfHeightDoubleSpinBox->setObjectName(QStringLiteral("cylHalfHeightDoubleSpinBox"));
        cylHalfHeightDoubleSpinBox->setDecimals(6);
        cylHalfHeightDoubleSpinBox->setMinimum(1e-6);
        cylHalfHeightDoubleSpinBox->setMaximum(1e+9);
        cylHalfHeightDoubleSpinBox->setValue(1);

        gridLayout->addWidget(cylHalfHeightDoubleSpinBox, 1, 3, 1, 1);


        verticalLayout->addWidget(mainGroupBox);

        corePointsGroupBox = new QGroupBox(mainParams);
        corePointsGroupBox->setObjectName(QStringLiteral("corePointsGroupBox"));
        formLayout = new QFormLayout(corePointsGroupBox);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        cpUseCloud1RadioButton = new QRadioButton(corePointsGroupBox);
        cpUseCloud1RadioButton->setObjectName(QStringLiteral("cpUseCloud1RadioButton"));

        formLayout->setWidget(0, QFormLayout::LabelRole, cpUseCloud1RadioButton);

        cpUseOtherCloudRadioButton = new QRadioButton(corePointsGroupBox);
        cpUseOtherCloudRadioButton->setObjectName(QStringLiteral("cpUseOtherCloudRadioButton"));

        formLayout->setWidget(2, QFormLayout::LabelRole, cpUseOtherCloudRadioButton);

        cpOtherCloudComboBox = new QComboBox(corePointsGroupBox);
        cpOtherCloudComboBox->setObjectName(QStringLiteral("cpOtherCloudComboBox"));
        cpOtherCloudComboBox->setEnabled(false);

        formLayout->setWidget(2, QFormLayout::FieldRole, cpOtherCloudComboBox);

        cpSubsampleRadioButton = new QRadioButton(corePointsGroupBox);
        cpSubsampleRadioButton->setObjectName(QStringLiteral("cpSubsampleRadioButton"));
        cpSubsampleRadioButton->setChecked(true);

        formLayout->setWidget(1, QFormLayout::LabelRole, cpSubsampleRadioButton);

        cpSubsamplingDoubleSpinBox = new QDoubleSpinBox(corePointsGroupBox);
        cpSubsamplingDoubleSpinBox->setObjectName(QStringLiteral("cpSubsamplingDoubleSpinBox"));
        cpSubsamplingDoubleSpinBox->setDecimals(6);
        cpSubsamplingDoubleSpinBox->setMaximum(1e+9);

        formLayout->setWidget(1, QFormLayout::FieldRole, cpSubsamplingDoubleSpinBox);


        verticalLayout->addWidget(corePointsGroupBox);

        rmsFrame = new QFrame(mainParams);
        rmsFrame->setObjectName(QStringLiteral("rmsFrame"));
        horizontalLayout_4 = new QHBoxLayout(rmsFrame);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 0, -1, 0);
        rmsCheckBox = new QCheckBox(rmsFrame);
        rmsCheckBox->setObjectName(QStringLiteral("rmsCheckBox"));

        horizontalLayout_4->addWidget(rmsCheckBox);

        rmsDoubleSpinBox = new QDoubleSpinBox(rmsFrame);
        rmsDoubleSpinBox->setObjectName(QStringLiteral("rmsDoubleSpinBox"));
        rmsDoubleSpinBox->setEnabled(false);
        rmsDoubleSpinBox->setDecimals(6);
        rmsDoubleSpinBox->setMaximum(1e+9);

        horizontalLayout_4->addWidget(rmsDoubleSpinBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        guessParamsPushButton = new QPushButton(rmsFrame);
        guessParamsPushButton->setObjectName(QStringLiteral("guessParamsPushButton"));

        horizontalLayout_4->addWidget(guessParamsPushButton);


        verticalLayout->addWidget(rmsFrame);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        m3c2PMTabWidget->addTab(mainParams, QString());
        normals = new QWidget();
        normals->setObjectName(QStringLiteral("normals"));
        verticalLayout_4 = new QVBoxLayout(normals);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        normParamsFrame = new QFrame(normals);
        normParamsFrame->setObjectName(QStringLiteral("normParamsFrame"));
        verticalLayout_3 = new QVBoxLayout(normParamsFrame);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        normCalcModeGroupBox = new QGroupBox(normParamsFrame);
        normCalcModeGroupBox->setObjectName(QStringLiteral("normCalcModeGroupBox"));
        verticalLayout_2 = new QVBoxLayout(normCalcModeGroupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        normDefaultRadioButton = new QRadioButton(normCalcModeGroupBox);
        normDefaultRadioButton->setObjectName(QStringLiteral("normDefaultRadioButton"));
        normDefaultRadioButton->setChecked(true);

        horizontalLayout_2->addWidget(normDefaultRadioButton);

        normMultiScaleRadioButton = new QRadioButton(normCalcModeGroupBox);
        normMultiScaleRadioButton->setObjectName(QStringLiteral("normMultiScaleRadioButton"));

        horizontalLayout_2->addWidget(normMultiScaleRadioButton);

        normVertRadioButton = new QRadioButton(normCalcModeGroupBox);
        normVertRadioButton->setObjectName(QStringLiteral("normVertRadioButton"));

        horizontalLayout_2->addWidget(normVertRadioButton);

        normHorizRadioButton = new QRadioButton(normCalcModeGroupBox);
        normHorizRadioButton->setObjectName(QStringLiteral("normHorizRadioButton"));

        horizontalLayout_2->addWidget(normHorizRadioButton);


        verticalLayout_2->addLayout(horizontalLayout_2);

        normMultiScaleFrame = new QFrame(normCalcModeGroupBox);
        normMultiScaleFrame->setObjectName(QStringLiteral("normMultiScaleFrame"));
        normMultiScaleFrame->setEnabled(false);
        horizontalLayout = new QHBoxLayout(normMultiScaleFrame);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        minScaleDoubleSpinBox = new QDoubleSpinBox(normMultiScaleFrame);
        minScaleDoubleSpinBox->setObjectName(QStringLiteral("minScaleDoubleSpinBox"));
        minScaleDoubleSpinBox->setDecimals(6);
        minScaleDoubleSpinBox->setMinimum(1e-6);
        minScaleDoubleSpinBox->setMaximum(1e+9);
        minScaleDoubleSpinBox->setValue(1);

        horizontalLayout->addWidget(minScaleDoubleSpinBox);

        stepScaleDoubleSpinBox = new QDoubleSpinBox(normMultiScaleFrame);
        stepScaleDoubleSpinBox->setObjectName(QStringLiteral("stepScaleDoubleSpinBox"));
        stepScaleDoubleSpinBox->setDecimals(6);
        stepScaleDoubleSpinBox->setMinimum(1e-6);
        stepScaleDoubleSpinBox->setMaximum(1e+9);
        stepScaleDoubleSpinBox->setValue(1);

        horizontalLayout->addWidget(stepScaleDoubleSpinBox);

        maxScaleDoubleSpinBox = new QDoubleSpinBox(normMultiScaleFrame);
        maxScaleDoubleSpinBox->setObjectName(QStringLiteral("maxScaleDoubleSpinBox"));
        maxScaleDoubleSpinBox->setDecimals(6);
        maxScaleDoubleSpinBox->setMinimum(1e-6);
        maxScaleDoubleSpinBox->setMaximum(1e+9);
        maxScaleDoubleSpinBox->setValue(1);

        horizontalLayout->addWidget(maxScaleDoubleSpinBox);


        verticalLayout_2->addWidget(normMultiScaleFrame);

        normUseCorePointsCheckBox = new QCheckBox(normCalcModeGroupBox);
        normUseCorePointsCheckBox->setObjectName(QStringLiteral("normUseCorePointsCheckBox"));

        verticalLayout_2->addWidget(normUseCorePointsCheckBox);


        verticalLayout_3->addWidget(normCalcModeGroupBox);

        normOriGroupBox = new QGroupBox(normParamsFrame);
        normOriGroupBox->setObjectName(QStringLiteral("normOriGroupBox"));
        formLayout_2 = new QFormLayout(normOriGroupBox);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        normOriPreferredRadioButton = new QRadioButton(normOriGroupBox);
        normOriPreferredRadioButton->setObjectName(QStringLiteral("normOriPreferredRadioButton"));
        normOriPreferredRadioButton->setChecked(true);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, normOriPreferredRadioButton);

        normOriPreferredComboBox = new QComboBox(normOriGroupBox);
        normOriPreferredComboBox->addItem(QString());
        normOriPreferredComboBox->addItem(QString());
        normOriPreferredComboBox->addItem(QString());
        normOriPreferredComboBox->addItem(QString());
        normOriPreferredComboBox->addItem(QString());
        normOriPreferredComboBox->addItem(QString());
        normOriPreferredComboBox->addItem(QString());
        normOriPreferredComboBox->addItem(QString());
        normOriPreferredComboBox->addItem(QString());
        normOriPreferredComboBox->addItem(QString());
        normOriPreferredComboBox->setObjectName(QStringLiteral("normOriPreferredComboBox"));
        normOriPreferredComboBox->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, normOriPreferredComboBox);

        normOriUseCloudRadioButton = new QRadioButton(normOriGroupBox);
        normOriUseCloudRadioButton->setObjectName(QStringLiteral("normOriUseCloudRadioButton"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, normOriUseCloudRadioButton);

        normOriCloudComboBox = new QComboBox(normOriGroupBox);
        normOriCloudComboBox->setObjectName(QStringLiteral("normOriCloudComboBox"));
        normOriCloudComboBox->setEnabled(false);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, normOriCloudComboBox);


        verticalLayout_3->addWidget(normOriGroupBox);


        verticalLayout_4->addWidget(normParamsFrame);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        m3c2PMTabWidget->addTab(normals, QString());
        advanced = new QWidget();
        advanced->setObjectName(QStringLiteral("advanced"));
        verticalLayout_5 = new QVBoxLayout(advanced);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        useSinglePass4DepthCheckBox = new QCheckBox(advanced);
        useSinglePass4DepthCheckBox->setObjectName(QStringLiteral("useSinglePass4DepthCheckBox"));

        verticalLayout_5->addWidget(useSinglePass4DepthCheckBox);

        positiveSearchOnlyCheckBox = new QCheckBox(advanced);
        positiveSearchOnlyCheckBox->setObjectName(QStringLiteral("positiveSearchOnlyCheckBox"));

        verticalLayout_5->addWidget(positiveSearchOnlyCheckBox);

        useMedianCheckBox = new QCheckBox(advanced);
        useMedianCheckBox->setObjectName(QStringLiteral("useMedianCheckBox"));

        verticalLayout_5->addWidget(useMedianCheckBox);

        minPoints4StatsFrame = new QFrame(advanced);
        minPoints4StatsFrame->setObjectName(QStringLiteral("minPoints4StatsFrame"));
        horizontalLayout_5 = new QHBoxLayout(minPoints4StatsFrame);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        useMinPoints4StatCheckBox = new QCheckBox(minPoints4StatsFrame);
        useMinPoints4StatCheckBox->setObjectName(QStringLiteral("useMinPoints4StatCheckBox"));

        horizontalLayout_5->addWidget(useMinPoints4StatCheckBox);

        minPoints4StatSpinBox = new QSpinBox(minPoints4StatsFrame);
        minPoints4StatSpinBox->setObjectName(QStringLiteral("minPoints4StatSpinBox"));
        minPoints4StatSpinBox->setEnabled(false);
        minPoints4StatSpinBox->setMinimum(1);
        minPoints4StatSpinBox->setMaximum(1000000000);
        minPoints4StatSpinBox->setValue(5);

        horizontalLayout_5->addWidget(minPoints4StatSpinBox);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        verticalLayout_5->addWidget(minPoints4StatsFrame);

        frame = new QFrame(advanced);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_8 = new QHBoxLayout(frame);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_8->addWidget(label_3);

        maxThreadCountSpinBox = new QSpinBox(frame);
        maxThreadCountSpinBox->setObjectName(QStringLiteral("maxThreadCountSpinBox"));

        horizontalLayout_8->addWidget(maxThreadCountSpinBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);


        verticalLayout_5->addWidget(frame);

        verticalSpacer_2 = new QSpacerItem(20, 177, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);

        m3c2PMTabWidget->addTab(advanced, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_8 = new QVBoxLayout(tab);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        m3c2PMTextBrowser = new QTextBrowser(tab);
        m3c2PMTextBrowser->setObjectName(QStringLiteral("m3c2PMTextBrowser"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m3c2PMTextBrowser->sizePolicy().hasHeightForWidth());
        m3c2PMTextBrowser->setSizePolicy(sizePolicy1);
        m3c2PMTextBrowser->setOpenExternalLinks(true);

        verticalLayout_8->addWidget(m3c2PMTextBrowser);

        precisionMapsGroupBox = new QGroupBox(tab);
        precisionMapsGroupBox->setObjectName(QStringLiteral("precisionMapsGroupBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(precisionMapsGroupBox->sizePolicy().hasHeightForWidth());
        precisionMapsGroupBox->setSizePolicy(sizePolicy2);
        precisionMapsGroupBox->setCheckable(true);
        precisionMapsGroupBox->setChecked(false);
        gridLayout_2 = new QGridLayout(precisionMapsGroupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_6 = new QLabel(precisionMapsGroupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_6, 0, 2, 1, 1);

        label_4 = new QLabel(precisionMapsGroupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_4, 0, 1, 1, 1);

        label_8 = new QLabel(precisionMapsGroupBox);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 2, 0, 1, 1);

        c2SxComboBox = new QComboBox(precisionMapsGroupBox);
        c2SxComboBox->setObjectName(QStringLiteral("c2SxComboBox"));

        gridLayout_2->addWidget(c2SxComboBox, 1, 2, 1, 1);

        c1SyComboBox = new QComboBox(precisionMapsGroupBox);
        c1SyComboBox->setObjectName(QStringLiteral("c1SyComboBox"));

        gridLayout_2->addWidget(c1SyComboBox, 2, 1, 1, 1);

        c1SxComboBox = new QComboBox(precisionMapsGroupBox);
        c1SxComboBox->setObjectName(QStringLiteral("c1SxComboBox"));

        gridLayout_2->addWidget(c1SxComboBox, 1, 1, 1, 1);

        label_7 = new QLabel(precisionMapsGroupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 1, 0, 1, 1);

        c2SyComboBox = new QComboBox(precisionMapsGroupBox);
        c2SyComboBox->setObjectName(QStringLiteral("c2SyComboBox"));

        gridLayout_2->addWidget(c2SyComboBox, 2, 2, 1, 1);

        c1SzComboBox = new QComboBox(precisionMapsGroupBox);
        c1SzComboBox->setObjectName(QStringLiteral("c1SzComboBox"));

        gridLayout_2->addWidget(c1SzComboBox, 3, 1, 1, 1);

        label_9 = new QLabel(precisionMapsGroupBox);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_2->addWidget(label_9, 3, 0, 1, 1);

        c2SzComboBox = new QComboBox(precisionMapsGroupBox);
        c2SzComboBox->setObjectName(QStringLiteral("c2SzComboBox"));

        gridLayout_2->addWidget(c2SzComboBox, 3, 2, 1, 1);

        label_10 = new QLabel(precisionMapsGroupBox);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_2->addWidget(label_10, 4, 0, 1, 1);

        pm1ScaleDoubleSpinBox = new QDoubleSpinBox(precisionMapsGroupBox);
        pm1ScaleDoubleSpinBox->setObjectName(QStringLiteral("pm1ScaleDoubleSpinBox"));
        pm1ScaleDoubleSpinBox->setDecimals(6);
        pm1ScaleDoubleSpinBox->setMinimum(1e-6);
        pm1ScaleDoubleSpinBox->setMaximum(1e+6);
        pm1ScaleDoubleSpinBox->setValue(1);

        gridLayout_2->addWidget(pm1ScaleDoubleSpinBox, 4, 1, 1, 1);

        pm2ScaleDoubleSpinBox = new QDoubleSpinBox(precisionMapsGroupBox);
        pm2ScaleDoubleSpinBox->setObjectName(QStringLiteral("pm2ScaleDoubleSpinBox"));
        pm2ScaleDoubleSpinBox->setDecimals(6);
        pm2ScaleDoubleSpinBox->setMinimum(1e-6);
        pm2ScaleDoubleSpinBox->setMaximum(1e+6);
        pm2ScaleDoubleSpinBox->setValue(1);

        gridLayout_2->addWidget(pm2ScaleDoubleSpinBox, 4, 2, 1, 1);

        gridLayout_2->setColumnStretch(0, 1);
        gridLayout_2->setColumnStretch(1, 2);
        gridLayout_2->setColumnStretch(2, 2);

        verticalLayout_8->addWidget(precisionMapsGroupBox);

        m3c2PMTabWidget->addTab(tab, QString());
        output = new QWidget();
        output->setObjectName(QStringLiteral("output"));
        verticalLayout_6 = new QVBoxLayout(output);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_5 = new QLabel(output);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_6->addWidget(label_5);

        projDestComboBox = new QComboBox(output);
        projDestComboBox->addItem(QString());
        projDestComboBox->addItem(QString());
        projDestComboBox->addItem(QString());
        projDestComboBox->setObjectName(QStringLiteral("projDestComboBox"));
        projDestComboBox->setMaxVisibleItems(3);
        projDestComboBox->setMaxCount(3);

        horizontalLayout_6->addWidget(projDestComboBox);

        useOriginalCloudCheckBox = new QCheckBox(output);
        useOriginalCloudCheckBox->setObjectName(QStringLiteral("useOriginalCloudCheckBox"));

        horizontalLayout_6->addWidget(useOriginalCloudCheckBox);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);


        verticalLayout_6->addLayout(horizontalLayout_6);

        exportStdDevInfoCheckBox = new QCheckBox(output);
        exportStdDevInfoCheckBox->setObjectName(QStringLiteral("exportStdDevInfoCheckBox"));

        verticalLayout_6->addWidget(exportStdDevInfoCheckBox);

        exportDensityAtProjScaleCheckBox = new QCheckBox(output);
        exportDensityAtProjScaleCheckBox->setObjectName(QStringLiteral("exportDensityAtProjScaleCheckBox"));

        verticalLayout_6->addWidget(exportDensityAtProjScaleCheckBox);

        verticalSpacer_3 = new QSpacerItem(20, 177, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_3);

        m3c2PMTabWidget->addTab(output, QString());

        verticalLayout_7->addWidget(m3c2PMTabWidget);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        loadParamsToolButton = new QToolButton(M3C2Dialog);
        loadParamsToolButton->setObjectName(QStringLiteral("loadParamsToolButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/CC/plugin/qM3C2Plugin/images/iconLoad.png"), QSize(), QIcon::Normal, QIcon::Off);
        loadParamsToolButton->setIcon(icon2);

        horizontalLayout_7->addWidget(loadParamsToolButton);

        saveParamsToolButton = new QToolButton(M3C2Dialog);
        saveParamsToolButton->setObjectName(QStringLiteral("saveParamsToolButton"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/CC/plugin/qM3C2Plugin/images/iconSave.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveParamsToolButton->setIcon(icon3);

        horizontalLayout_7->addWidget(saveParamsToolButton);

        buttonBox = new QDialogButtonBox(M3C2Dialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_7->addWidget(buttonBox);


        verticalLayout_7->addLayout(horizontalLayout_7);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(mainGroupBox);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(showCloud1CheckBox, cloud1LineEdit);
        QWidget::setTabOrder(cloud1LineEdit, showCloud2CheckBox);
        QWidget::setTabOrder(showCloud2CheckBox, cloud2LineEdit);
        QWidget::setTabOrder(cloud2LineEdit, swapCloudsToolButton);
        QWidget::setTabOrder(swapCloudsToolButton, m3c2PMTabWidget);
        QWidget::setTabOrder(m3c2PMTabWidget, normalScaleDoubleSpinBox);
        QWidget::setTabOrder(normalScaleDoubleSpinBox, useCloud1NormalsCheckBox);
        QWidget::setTabOrder(useCloud1NormalsCheckBox, cylDiameterDoubleSpinBox);
        QWidget::setTabOrder(cylDiameterDoubleSpinBox, cylHalfHeightDoubleSpinBox);
        QWidget::setTabOrder(cylHalfHeightDoubleSpinBox, cpUseCloud1RadioButton);
        QWidget::setTabOrder(cpUseCloud1RadioButton, cpSubsampleRadioButton);
        QWidget::setTabOrder(cpSubsampleRadioButton, cpSubsamplingDoubleSpinBox);
        QWidget::setTabOrder(cpSubsamplingDoubleSpinBox, cpUseOtherCloudRadioButton);
        QWidget::setTabOrder(cpUseOtherCloudRadioButton, cpOtherCloudComboBox);
        QWidget::setTabOrder(cpOtherCloudComboBox, rmsCheckBox);
        QWidget::setTabOrder(rmsCheckBox, rmsDoubleSpinBox);
        QWidget::setTabOrder(rmsDoubleSpinBox, normDefaultRadioButton);
        QWidget::setTabOrder(normDefaultRadioButton, normMultiScaleRadioButton);
        QWidget::setTabOrder(normMultiScaleRadioButton, normVertRadioButton);
        QWidget::setTabOrder(normVertRadioButton, normHorizRadioButton);
        QWidget::setTabOrder(normHorizRadioButton, minScaleDoubleSpinBox);
        QWidget::setTabOrder(minScaleDoubleSpinBox, stepScaleDoubleSpinBox);
        QWidget::setTabOrder(stepScaleDoubleSpinBox, maxScaleDoubleSpinBox);
        QWidget::setTabOrder(maxScaleDoubleSpinBox, normUseCorePointsCheckBox);
        QWidget::setTabOrder(normUseCorePointsCheckBox, normOriPreferredRadioButton);
        QWidget::setTabOrder(normOriPreferredRadioButton, normOriPreferredComboBox);
        QWidget::setTabOrder(normOriPreferredComboBox, normOriUseCloudRadioButton);
        QWidget::setTabOrder(normOriUseCloudRadioButton, normOriCloudComboBox);
        QWidget::setTabOrder(normOriCloudComboBox, useSinglePass4DepthCheckBox);
        QWidget::setTabOrder(useSinglePass4DepthCheckBox, useMedianCheckBox);
        QWidget::setTabOrder(useMedianCheckBox, useMinPoints4StatCheckBox);
        QWidget::setTabOrder(useMinPoints4StatCheckBox, minPoints4StatSpinBox);
        QWidget::setTabOrder(minPoints4StatSpinBox, projDestComboBox);
        QWidget::setTabOrder(projDestComboBox, exportStdDevInfoCheckBox);
        QWidget::setTabOrder(exportStdDevInfoCheckBox, exportDensityAtProjScaleCheckBox);
        QWidget::setTabOrder(exportDensityAtProjScaleCheckBox, loadParamsToolButton);
        QWidget::setTabOrder(loadParamsToolButton, saveParamsToolButton);
        QWidget::setTabOrder(saveParamsToolButton, buttonBox);

        retranslateUi(M3C2Dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), M3C2Dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), M3C2Dialog, SLOT(reject()));
        QObject::connect(cpUseOtherCloudRadioButton, SIGNAL(toggled(bool)), cpOtherCloudComboBox, SLOT(setEnabled(bool)));
        QObject::connect(cpSubsampleRadioButton, SIGNAL(toggled(bool)), cpSubsamplingDoubleSpinBox, SLOT(setEnabled(bool)));
        QObject::connect(normMultiScaleRadioButton, SIGNAL(toggled(bool)), normMultiScaleFrame, SLOT(setEnabled(bool)));
        QObject::connect(normOriUseCloudRadioButton, SIGNAL(toggled(bool)), normOriCloudComboBox, SLOT(setEnabled(bool)));
        QObject::connect(normOriPreferredRadioButton, SIGNAL(toggled(bool)), normOriPreferredComboBox, SLOT(setEnabled(bool)));
        QObject::connect(useCloud1NormalsCheckBox, SIGNAL(toggled(bool)), normalScaleDoubleSpinBox, SLOT(setDisabled(bool)));
        QObject::connect(useCloud1NormalsCheckBox, SIGNAL(toggled(bool)), normParamsFrame, SLOT(setDisabled(bool)));
        QObject::connect(rmsCheckBox, SIGNAL(toggled(bool)), rmsDoubleSpinBox, SLOT(setEnabled(bool)));
        QObject::connect(precisionMapsGroupBox, SIGNAL(toggled(bool)), useMedianCheckBox, SLOT(setDisabled(bool)));
        QObject::connect(precisionMapsGroupBox, SIGNAL(toggled(bool)), minPoints4StatsFrame, SLOT(setDisabled(bool)));

        m3c2PMTabWidget->setCurrentIndex(0);
        normOriPreferredComboBox->setCurrentIndex(4);
        projDestComboBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(M3C2Dialog);
    } // setupUi

    void retranslateUi(QDialog *M3C2Dialog)
    {
        M3C2Dialog->setWindowTitle(QApplication::translate("M3C2Dialog", "M3C2 distance", nullptr));
        showCloud1CheckBox->setText(QApplication::translate("M3C2Dialog", "Cloud #1", nullptr));
        showCloud2CheckBox->setText(QApplication::translate("M3C2Dialog", "Cloud #2", nullptr));
        mainGroupBox->setTitle(QApplication::translate("M3C2Dialog", "Scales", nullptr));
        label->setText(QApplication::translate("M3C2Dialog", "Normals", nullptr));
        useCloud1NormalsCheckBox->setText(QApplication::translate("M3C2Dialog", "use cloud #1 normals", nullptr));
        label_2->setText(QApplication::translate("M3C2Dialog", "Projection", nullptr));
        cylDiameterDoubleSpinBox->setPrefix(QApplication::translate("M3C2Dialog", "diameter = ", nullptr));
        normalScaleDoubleSpinBox->setPrefix(QApplication::translate("M3C2Dialog", "diameter = ", nullptr));
        cylHalfHeightDoubleSpinBox->setPrefix(QApplication::translate("M3C2Dialog", "max depth = ", nullptr));
        corePointsGroupBox->setTitle(QApplication::translate("M3C2Dialog", "Core points", nullptr));
        cpUseCloud1RadioButton->setText(QApplication::translate("M3C2Dialog", "use cloud #1", nullptr));
        cpUseOtherCloudRadioButton->setText(QApplication::translate("M3C2Dialog", "use other cloud", nullptr));
#ifndef QT_NO_TOOLTIP
        cpOtherCloudComboBox->setToolTip(QApplication::translate("M3C2Dialog", "Alternative core points cloud", nullptr));
#endif // QT_NO_TOOLTIP
        cpSubsampleRadioButton->setText(QApplication::translate("M3C2Dialog", "subsample cloud #1", nullptr));
#ifndef QT_NO_TOOLTIP
        cpSubsamplingDoubleSpinBox->setToolTip(QApplication::translate("M3C2Dialog", "Min. distance between points", nullptr));
#endif // QT_NO_TOOLTIP
        rmsCheckBox->setText(QApplication::translate("M3C2Dialog", "Registration error", nullptr));
#ifndef QT_NO_TOOLTIP
        rmsDoubleSpinBox->setToolTip(QApplication::translate("M3C2Dialog", "Registration error (RMS - to be input by the user)", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        guessParamsPushButton->setToolTip(QApplication::translate("M3C2Dialog", "Tries to guess some parameters automatically", nullptr));
#endif // QT_NO_TOOLTIP
        guessParamsPushButton->setText(QApplication::translate("M3C2Dialog", "Guess params", nullptr));
        m3c2PMTabWidget->setTabText(m3c2PMTabWidget->indexOf(mainParams), QApplication::translate("M3C2Dialog", "Main parameters", nullptr));
        normCalcModeGroupBox->setTitle(QApplication::translate("M3C2Dialog", "Calculation mode", nullptr));
#ifndef QT_NO_TOOLTIP
        normDefaultRadioButton->setToolTip(QApplication::translate("M3C2Dialog", "Default fixed scale calculation", nullptr));
#endif // QT_NO_TOOLTIP
        normDefaultRadioButton->setText(QApplication::translate("M3C2Dialog", "Default", nullptr));
#ifndef QT_NO_TOOLTIP
        normMultiScaleRadioButton->setToolTip(QApplication::translate("M3C2Dialog", "Automatically use the scale at which the cloud is the more 'flat'", nullptr));
#endif // QT_NO_TOOLTIP
        normMultiScaleRadioButton->setText(QApplication::translate("M3C2Dialog", "Multi-scale", nullptr));
#ifndef QT_NO_TOOLTIP
        normVertRadioButton->setToolTip(QApplication::translate("M3C2Dialog", "Make the resulting normals purely Vertical", nullptr));
#endif // QT_NO_TOOLTIP
        normVertRadioButton->setText(QApplication::translate("M3C2Dialog", "Vertical", nullptr));
#ifndef QT_NO_TOOLTIP
        normHorizRadioButton->setToolTip(QApplication::translate("M3C2Dialog", "Make the resulting normals purely Horizontal", nullptr));
#endif // QT_NO_TOOLTIP
        normHorizRadioButton->setText(QApplication::translate("M3C2Dialog", "Horizontal", nullptr));
#ifndef QT_NO_TOOLTIP
        minScaleDoubleSpinBox->setToolTip(QApplication::translate("M3C2Dialog", "Mininum scale", nullptr));
#endif // QT_NO_TOOLTIP
        minScaleDoubleSpinBox->setPrefix(QApplication::translate("M3C2Dialog", "Min = ", nullptr));
#ifndef QT_NO_TOOLTIP
        stepScaleDoubleSpinBox->setToolTip(QApplication::translate("M3C2Dialog", "Step", nullptr));
#endif // QT_NO_TOOLTIP
        stepScaleDoubleSpinBox->setPrefix(QApplication::translate("M3C2Dialog", "Step = ", nullptr));
#ifndef QT_NO_TOOLTIP
        maxScaleDoubleSpinBox->setToolTip(QApplication::translate("M3C2Dialog", "Max scale", nullptr));
#endif // QT_NO_TOOLTIP
        maxScaleDoubleSpinBox->setPrefix(QApplication::translate("M3C2Dialog", "Max = ", nullptr));
#ifndef QT_NO_TOOLTIP
        normUseCorePointsCheckBox->setToolTip(QApplication::translate("M3C2Dialog", "Use core points for normal calculation (instead of cloud #1)", nullptr));
#endif // QT_NO_TOOLTIP
        normUseCorePointsCheckBox->setText(QApplication::translate("M3C2Dialog", "Use core points for normal calculation", nullptr));
        normOriGroupBox->setTitle(QApplication::translate("M3C2Dialog", "Orientation", nullptr));
        normOriPreferredRadioButton->setText(QApplication::translate("M3C2Dialog", "Preferred orientation", nullptr));
        normOriPreferredComboBox->setItemText(0, QApplication::translate("M3C2Dialog", "+X", nullptr));
        normOriPreferredComboBox->setItemText(1, QApplication::translate("M3C2Dialog", "-X", nullptr));
        normOriPreferredComboBox->setItemText(2, QApplication::translate("M3C2Dialog", "+Y", nullptr));
        normOriPreferredComboBox->setItemText(3, QApplication::translate("M3C2Dialog", "-Y", nullptr));
        normOriPreferredComboBox->setItemText(4, QApplication::translate("M3C2Dialog", "+Z", nullptr));
        normOriPreferredComboBox->setItemText(5, QApplication::translate("M3C2Dialog", "-Z", nullptr));
        normOriPreferredComboBox->setItemText(6, QApplication::translate("M3C2Dialog", "+Barycenter", nullptr));
        normOriPreferredComboBox->setItemText(7, QApplication::translate("M3C2Dialog", "- Barycenter", nullptr));
        normOriPreferredComboBox->setItemText(8, QApplication::translate("M3C2Dialog", "+ (0,0,0)", nullptr));
        normOriPreferredComboBox->setItemText(9, QApplication::translate("M3C2Dialog", "- (0,0,0)", nullptr));

#ifndef QT_NO_TOOLTIP
        normOriUseCloudRadioButton->setToolTip(QApplication::translate("M3C2Dialog", "Sensor(s) position(s) as a cloud (one point per position)", nullptr));
#endif // QT_NO_TOOLTIP
        normOriUseCloudRadioButton->setText(QApplication::translate("M3C2Dialog", "Use sensor position(s)", nullptr));
#ifndef QT_NO_TOOLTIP
        normOriCloudComboBox->setToolTip(QApplication::translate("M3C2Dialog", "Alternative core points cloud", nullptr));
#endif // QT_NO_TOOLTIP
        m3c2PMTabWidget->setTabText(m3c2PMTabWidget->indexOf(normals), QApplication::translate("M3C2Dialog", "Normals", nullptr));
#ifndef QT_NO_TOOLTIP
        useSinglePass4DepthCheckBox->setToolTip(QApplication::translate("M3C2Dialog", "Slower but it guarantees that all the cylinder will be explored", nullptr));
#endif // QT_NO_TOOLTIP
        useSinglePass4DepthCheckBox->setText(QApplication::translate("M3C2Dialog", "Do not use multiple pass for depth", nullptr));
#ifndef QT_NO_TOOLTIP
        positiveSearchOnlyCheckBox->setToolTip(QApplication::translate("M3C2Dialog", "Search the points only in the 'positive' side of the cylinder (relatively to the point normal)", nullptr));
#endif // QT_NO_TOOLTIP
        positiveSearchOnlyCheckBox->setText(QApplication::translate("M3C2Dialog", "Only search points in the positive half-space (relatively to the normal)", nullptr));
        useMedianCheckBox->setText(QApplication::translate("M3C2Dialog", "Use median and interquatile range (instead of mean and std. dev.)", nullptr));
        useMinPoints4StatCheckBox->setText(QApplication::translate("M3C2Dialog", "Specify minimum number of points for statistics computation", nullptr));
        label_3->setText(QApplication::translate("M3C2Dialog", "Max thread count", nullptr));
        maxThreadCountSpinBox->setSuffix(QApplication::translate("M3C2Dialog", " / 8", nullptr));
        m3c2PMTabWidget->setTabText(m3c2PMTabWidget->indexOf(advanced), QApplication::translate("M3C2Dialog", "Advanced", nullptr));
        m3c2PMTextBrowser->setHtml(QApplication::translate("M3C2Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-weight:600;\">3D uncertainty-based topographic change detection with SfM photogrammetry: precision maps for ground control and directly georeferenced surveys</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8pt;\">Mike R. James, Stuart Robson and Mark W. Smith (</span><a href=\"http://onlinelibrary.wiley.com/doi/10.1002/e"
                        "sp.4125/abstract\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; text-decoration: underline; color:#0000ff;\">DOI: 10.1002/esp.4125</span></a><span style=\" font-family:'MS Shell Dlg 2'; font-size:8pt;\">)</span></p></body></html>", nullptr));
        precisionMapsGroupBox->setTitle(QApplication::translate("M3C2Dialog", "Use precision information in scalar fields instead of roughness-based uncertainty estimates", nullptr));
        label_6->setText(QApplication::translate("M3C2Dialog", "Cloud #2", nullptr));
        label_4->setText(QApplication::translate("M3C2Dialog", "Cloud #1", nullptr));
        label_8->setText(QApplication::translate("M3C2Dialog", "Sigma(y)", nullptr));
        label_7->setText(QApplication::translate("M3C2Dialog", "Sigma(x)", nullptr));
        label_9->setText(QApplication::translate("M3C2Dialog", "Sigma(z)", nullptr));
        label_10->setText(QApplication::translate("M3C2Dialog", "Scale", nullptr));
#ifndef QT_NO_TOOLTIP
        pm1ScaleDoubleSpinBox->setToolTip(QApplication::translate("M3C2Dialog", "From SF units to cloud units", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        pm2ScaleDoubleSpinBox->setToolTip(QApplication::translate("M3C2Dialog", "From SF units to cloud units", nullptr));
#endif // QT_NO_TOOLTIP
        m3c2PMTabWidget->setTabText(m3c2PMTabWidget->indexOf(tab), QApplication::translate("M3C2Dialog", "Precision maps", nullptr));
        label_5->setText(QApplication::translate("M3C2Dialog", "Project core points on", nullptr));
        projDestComboBox->setItemText(0, QApplication::translate("M3C2Dialog", "Cloud #1", nullptr));
        projDestComboBox->setItemText(1, QApplication::translate("M3C2Dialog", "Cloud #2", nullptr));
        projDestComboBox->setItemText(2, QApplication::translate("M3C2Dialog", "Keep original positions", nullptr));

        useOriginalCloudCheckBox->setText(QApplication::translate("M3C2Dialog", "use original cloud", nullptr));
#ifndef QT_NO_TOOLTIP
        exportStdDevInfoCheckBox->setToolTip(QApplication::translate("M3C2Dialog", "Adds two scalar fields (std_cloud#1 and std_cloud#2)", nullptr));
#endif // QT_NO_TOOLTIP
        exportStdDevInfoCheckBox->setText(QApplication::translate("M3C2Dialog", "Export standard deviation information", nullptr));
#ifndef QT_NO_TOOLTIP
        exportDensityAtProjScaleCheckBox->setToolTip(QApplication::translate("M3C2Dialog", "Adds one scalar field (point count per core point)", nullptr));
#endif // QT_NO_TOOLTIP
        exportDensityAtProjScaleCheckBox->setText(QApplication::translate("M3C2Dialog", "Export point density at projection scale", nullptr));
        m3c2PMTabWidget->setTabText(m3c2PMTabWidget->indexOf(output), QApplication::translate("M3C2Dialog", "Output", nullptr));
#ifndef QT_NO_TOOLTIP
        loadParamsToolButton->setToolTip(QApplication::translate("M3C2Dialog", "Load parameters from file", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        saveParamsToolButton->setToolTip(QApplication::translate("M3C2Dialog", "Save parameters to file", nullptr));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class M3C2Dialog: public Ui_M3C2Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QM3C2DIALOG_H
