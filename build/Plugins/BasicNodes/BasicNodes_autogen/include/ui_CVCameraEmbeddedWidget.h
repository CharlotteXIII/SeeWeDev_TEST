/********************************************************************************
** Form generated from reading UI file 'CVCameraEmbeddedWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CVCAMERAEMBEDDEDWIDGET_H
#define UI_CVCAMERAEMBEDDEDWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CVCameraEmbeddedWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *mpCameraIDComboBox;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *mpStartButton;
    QPushButton *mpStopButton;

    void setupUi(QWidget *CVCameraEmbeddedWidget)
    {
        if (CVCameraEmbeddedWidget->objectName().isEmpty())
            CVCameraEmbeddedWidget->setObjectName(QString::fromUtf8("CVCameraEmbeddedWidget"));
        CVCameraEmbeddedWidget->resize(109, 54);
        verticalLayout = new QVBoxLayout(CVCameraEmbeddedWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(3, 0, 3, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(CVCameraEmbeddedWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        mpCameraIDComboBox = new QComboBox(CVCameraEmbeddedWidget);
        mpCameraIDComboBox->addItem(QString());
        mpCameraIDComboBox->addItem(QString());
        mpCameraIDComboBox->addItem(QString());
        mpCameraIDComboBox->addItem(QString());
        mpCameraIDComboBox->addItem(QString());
        mpCameraIDComboBox->setObjectName(QString::fromUtf8("mpCameraIDComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mpCameraIDComboBox->sizePolicy().hasHeightForWidth());
        mpCameraIDComboBox->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(mpCameraIDComboBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mpStartButton = new QPushButton(CVCameraEmbeddedWidget);
        mpStartButton->setObjectName(QString::fromUtf8("mpStartButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mpStartButton->sizePolicy().hasHeightForWidth());
        mpStartButton->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(mpStartButton);

        mpStopButton = new QPushButton(CVCameraEmbeddedWidget);
        mpStopButton->setObjectName(QString::fromUtf8("mpStopButton"));
        mpStopButton->setEnabled(false);
        sizePolicy1.setHeightForWidth(mpStopButton->sizePolicy().hasHeightForWidth());
        mpStopButton->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(mpStopButton);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(CVCameraEmbeddedWidget);

        QMetaObject::connectSlotsByName(CVCameraEmbeddedWidget);
    } // setupUi

    void retranslateUi(QWidget *CVCameraEmbeddedWidget)
    {
        CVCameraEmbeddedWidget->setWindowTitle(QCoreApplication::translate("CVCameraEmbeddedWidget", "Form", nullptr));
        label->setText(QCoreApplication::translate("CVCameraEmbeddedWidget", "ID :", nullptr));
        mpCameraIDComboBox->setItemText(0, QCoreApplication::translate("CVCameraEmbeddedWidget", "0", nullptr));
        mpCameraIDComboBox->setItemText(1, QCoreApplication::translate("CVCameraEmbeddedWidget", "1", nullptr));
        mpCameraIDComboBox->setItemText(2, QCoreApplication::translate("CVCameraEmbeddedWidget", "2", nullptr));
        mpCameraIDComboBox->setItemText(3, QCoreApplication::translate("CVCameraEmbeddedWidget", "3", nullptr));
        mpCameraIDComboBox->setItemText(4, QCoreApplication::translate("CVCameraEmbeddedWidget", "4", nullptr));

        mpStartButton->setText(QCoreApplication::translate("CVCameraEmbeddedWidget", "Start", nullptr));
        mpStopButton->setText(QCoreApplication::translate("CVCameraEmbeddedWidget", "Stop", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CVCameraEmbeddedWidget: public Ui_CVCameraEmbeddedWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CVCAMERAEMBEDDEDWIDGET_H
