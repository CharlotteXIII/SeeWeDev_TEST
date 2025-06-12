/********************************************************************************
** Form generated from reading UI file 'SyncGateEmbeddedWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYNCGATEEMBEDDEDWIDGET_H
#define UI_SYNCGATEEMBEDDEDWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SyncGateEmbeddedWidget
{
public:
    QCheckBox *mpIn0Checkbox;
    QCheckBox *mpOut0Checkbox;
    QCheckBox *mpIn1Checkbox;
    QCheckBox *mpOut1Checkbox;

    void setupUi(QWidget *SyncGateEmbeddedWidget)
    {
        if (SyncGateEmbeddedWidget->objectName().isEmpty())
            SyncGateEmbeddedWidget->setObjectName(QString::fromUtf8("SyncGateEmbeddedWidget"));
        SyncGateEmbeddedWidget->resize(158, 92);
        mpIn0Checkbox = new QCheckBox(SyncGateEmbeddedWidget);
        mpIn0Checkbox->setObjectName(QString::fromUtf8("mpIn0Checkbox"));
        mpIn0Checkbox->setGeometry(QRect(20, 20, 72, 19));
        mpOut0Checkbox = new QCheckBox(SyncGateEmbeddedWidget);
        mpOut0Checkbox->setObjectName(QString::fromUtf8("mpOut0Checkbox"));
        mpOut0Checkbox->setGeometry(QRect(100, 20, 72, 19));
        mpIn1Checkbox = new QCheckBox(SyncGateEmbeddedWidget);
        mpIn1Checkbox->setObjectName(QString::fromUtf8("mpIn1Checkbox"));
        mpIn1Checkbox->setGeometry(QRect(20, 50, 72, 19));
        mpOut1Checkbox = new QCheckBox(SyncGateEmbeddedWidget);
        mpOut1Checkbox->setObjectName(QString::fromUtf8("mpOut1Checkbox"));
        mpOut1Checkbox->setGeometry(QRect(100, 50, 72, 19));

        retranslateUi(SyncGateEmbeddedWidget);

        QMetaObject::connectSlotsByName(SyncGateEmbeddedWidget);
    } // setupUi

    void retranslateUi(QWidget *SyncGateEmbeddedWidget)
    {
        SyncGateEmbeddedWidget->setWindowTitle(QCoreApplication::translate("SyncGateEmbeddedWidget", "Form", nullptr));
        mpIn0Checkbox->setText(QCoreApplication::translate("SyncGateEmbeddedWidget", "Bool", nullptr));
        mpOut0Checkbox->setText(QCoreApplication::translate("SyncGateEmbeddedWidget", "Bool", nullptr));
        mpIn1Checkbox->setText(QCoreApplication::translate("SyncGateEmbeddedWidget", "Bool", nullptr));
        mpOut1Checkbox->setText(QCoreApplication::translate("SyncGateEmbeddedWidget", "Bool", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SyncGateEmbeddedWidget: public Ui_SyncGateEmbeddedWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYNCGATEEMBEDDEDWIDGET_H
