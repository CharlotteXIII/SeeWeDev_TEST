/********************************************************************************
** Form generated from reading UI file 'TemplateEmbeddedWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEMPLATEEMBEDDEDWIDGET_H
#define UI_TEMPLATEEMBEDDEDWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TemplateEmbeddedWidget
{
public:
    QGridLayout *gridLayout;
    QComboBox *mpComboBox;
    QLabel *mpDisplayText;
    QLabel *label_2;
    QSpinBox *mpSpinBox;
    QPushButton *mpStartButton;
    QPushButton *mpStopButton;

    void setupUi(QWidget *TemplateEmbeddedWidget)
    {
        if (TemplateEmbeddedWidget->objectName().isEmpty())
            TemplateEmbeddedWidget->setObjectName(QString::fromUtf8("TemplateEmbeddedWidget"));
        TemplateEmbeddedWidget->resize(210, 106);
        gridLayout = new QGridLayout(TemplateEmbeddedWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mpComboBox = new QComboBox(TemplateEmbeddedWidget);
        mpComboBox->addItem(QString());
        mpComboBox->addItem(QString());
        mpComboBox->addItem(QString());
        mpComboBox->addItem(QString());
        mpComboBox->addItem(QString());
        mpComboBox->setObjectName(QString::fromUtf8("mpComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mpComboBox->sizePolicy().hasHeightForWidth());
        mpComboBox->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mpComboBox, 0, 3, 1, 1);

        mpDisplayText = new QLabel(TemplateEmbeddedWidget);
        mpDisplayText->setObjectName(QString::fromUtf8("mpDisplayText"));
        mpDisplayText->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(mpDisplayText, 0, 0, 1, 1);

        label_2 = new QLabel(TemplateEmbeddedWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        mpSpinBox = new QSpinBox(TemplateEmbeddedWidget);
        mpSpinBox->setObjectName(QString::fromUtf8("mpSpinBox"));
        mpSpinBox->setMaximum(7);

        gridLayout->addWidget(mpSpinBox, 1, 3, 1, 1);

        mpStartButton = new QPushButton(TemplateEmbeddedWidget);
        mpStartButton->setObjectName(QString::fromUtf8("mpStartButton"));

        gridLayout->addWidget(mpStartButton, 2, 0, 1, 1);

        mpStopButton = new QPushButton(TemplateEmbeddedWidget);
        mpStopButton->setObjectName(QString::fromUtf8("mpStopButton"));
        mpStopButton->setEnabled(false);

        gridLayout->addWidget(mpStopButton, 2, 3, 1, 1);


        retranslateUi(TemplateEmbeddedWidget);

        QMetaObject::connectSlotsByName(TemplateEmbeddedWidget);
    } // setupUi

    void retranslateUi(QWidget *TemplateEmbeddedWidget)
    {
        TemplateEmbeddedWidget->setWindowTitle(QCoreApplication::translate("TemplateEmbeddedWidget", "Form", nullptr));
        mpComboBox->setItemText(0, QCoreApplication::translate("TemplateEmbeddedWidget", "0", nullptr));
        mpComboBox->setItemText(1, QCoreApplication::translate("TemplateEmbeddedWidget", "1", nullptr));
        mpComboBox->setItemText(2, QCoreApplication::translate("TemplateEmbeddedWidget", "2", nullptr));
        mpComboBox->setItemText(3, QCoreApplication::translate("TemplateEmbeddedWidget", "3", nullptr));
        mpComboBox->setItemText(4, QCoreApplication::translate("TemplateEmbeddedWidget", "4", nullptr));

        mpDisplayText->setText(QCoreApplication::translate("TemplateEmbeddedWidget", "ComboBox", nullptr));
        label_2->setText(QCoreApplication::translate("TemplateEmbeddedWidget", "SpinBox", nullptr));
        mpStartButton->setText(QCoreApplication::translate("TemplateEmbeddedWidget", "Start", nullptr));
        mpStopButton->setText(QCoreApplication::translate("TemplateEmbeddedWidget", "Stop", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TemplateEmbeddedWidget: public Ui_TemplateEmbeddedWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEMPLATEEMBEDDEDWIDGET_H
