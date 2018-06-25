/********************************************************************************
** Form generated from reading UI file 'dlg.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLG_H
#define UI_DLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CMATDlg
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *pointCloudframe;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label1;
    QLineEdit *pointCloudPath1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label2;
    QLineEdit *pointCloudPath2;
    QPushButton *clearPushButton;
    QToolButton *swapToolButton;
    QFrame *frame;
    QVBoxLayout *verticalLayout_3;
    QPushButton *optionsPushButton;
    QPushButton *viewPushButton;
    QPushButton *volumePushButton;
    QDialogButtonBox *cancelButton;

    void setupUi(QDialog *CMATDlg)
    {
        if (CMATDlg->objectName().isEmpty())
            CMATDlg->setObjectName(QStringLiteral("CMATDlg"));
        CMATDlg->resize(567, 450);
        CMATDlg->setSizeGripEnabled(true);
        verticalLayout_2 = new QVBoxLayout(CMATDlg);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        pointCloudframe = new QFrame(CMATDlg);
        pointCloudframe->setObjectName(QStringLiteral("pointCloudframe"));
        pointCloudframe->setFrameShape(QFrame::StyledPanel);
        pointCloudframe->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(pointCloudframe);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label1 = new QLabel(pointCloudframe);
        label1->setObjectName(QStringLiteral("label1"));

        horizontalLayout->addWidget(label1);

        pointCloudPath1 = new QLineEdit(pointCloudframe);
        pointCloudPath1->setObjectName(QStringLiteral("pointCloudPath1"));
        pointCloudPath1->setReadOnly(true);

        horizontalLayout->addWidget(pointCloudPath1);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label2 = new QLabel(pointCloudframe);
        label2->setObjectName(QStringLiteral("label2"));

        horizontalLayout_2->addWidget(label2);

        pointCloudPath2 = new QLineEdit(pointCloudframe);
        pointCloudPath2->setObjectName(QStringLiteral("pointCloudPath2"));
        pointCloudPath2->setReadOnly(true);

        horizontalLayout_2->addWidget(pointCloudPath2);


        verticalLayout->addLayout(horizontalLayout_2);

        clearPushButton = new QPushButton(pointCloudframe);
        clearPushButton->setObjectName(QStringLiteral("clearPushButton"));

        verticalLayout->addWidget(clearPushButton);


        horizontalLayout_3->addLayout(verticalLayout);

        swapToolButton = new QToolButton(pointCloudframe);
        swapToolButton->setObjectName(QStringLiteral("swapToolButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/CC/plugin/qCMAT/images/iconSwap.png"), QSize(), QIcon::Normal, QIcon::Off);
        swapToolButton->setIcon(icon);

        horizontalLayout_3->addWidget(swapToolButton);


        verticalLayout_2->addWidget(pointCloudframe);

        frame = new QFrame(CMATDlg);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        optionsPushButton = new QPushButton(frame);
        optionsPushButton->setObjectName(QStringLiteral("optionsPushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(optionsPushButton->sizePolicy().hasHeightForWidth());
        optionsPushButton->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(optionsPushButton);

        viewPushButton = new QPushButton(frame);
        viewPushButton->setObjectName(QStringLiteral("viewPushButton"));
        sizePolicy.setHeightForWidth(viewPushButton->sizePolicy().hasHeightForWidth());
        viewPushButton->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(viewPushButton);

        volumePushButton = new QPushButton(frame);
        volumePushButton->setObjectName(QStringLiteral("volumePushButton"));
        sizePolicy.setHeightForWidth(volumePushButton->sizePolicy().hasHeightForWidth());
        volumePushButton->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(volumePushButton);


        verticalLayout_2->addWidget(frame);

        cancelButton = new QDialogButtonBox(CMATDlg);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setStandardButtons(QDialogButtonBox::Cancel);

        verticalLayout_2->addWidget(cancelButton);


        retranslateUi(CMATDlg);

        QMetaObject::connectSlotsByName(CMATDlg);
    } // setupUi

    void retranslateUi(QDialog *CMATDlg)
    {
        CMATDlg->setWindowTitle(QApplication::translate("CMATDlg", "qCMAT", nullptr));
        label1->setText(QApplication::translate("CMATDlg", "Point Cloud 1", nullptr));
        label2->setText(QApplication::translate("CMATDlg", "Point Cloud 2", nullptr));
        clearPushButton->setText(QApplication::translate("CMATDlg", "Make a thing appear", nullptr));
#ifndef QT_NO_TOOLTIP
        optionsPushButton->setToolTip(QApplication::translate("CMATDlg", "Set options/parameters or perform pre-processing.", nullptr));
#endif // QT_NO_TOOLTIP
        optionsPushButton->setText(QApplication::translate("CMATDlg", "Options", nullptr));
#ifndef QT_NO_TOOLTIP
        viewPushButton->setToolTip(QApplication::translate("CMATDlg", "Choose visualisation style for cloud points being processed.", nullptr));
#endif // QT_NO_TOOLTIP
        viewPushButton->setText(QApplication::translate("CMATDlg", "View ", nullptr));
#ifndef QT_NO_TOOLTIP
        volumePushButton->setToolTip(QApplication::translate("CMATDlg", "Calculate beach volume", nullptr));
#endif // QT_NO_TOOLTIP
        volumePushButton->setText(QApplication::translate("CMATDlg", "Volume", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CMATDlg: public Ui_CMATDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_H