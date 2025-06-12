/********************************************************************************
** Form generated from reading UI file 'BitwiseOperationEmbeddedWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BITWISEOPERATIONEMBEDDEDWIDGET_H
#define UI_BITWISEOPERATIONEMBEDDEDWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BitwiseOperationEmbeddedWidget
{
public:
    QLabel *mpMaskTitleLabel;
    QLabel *mpMaskStatusLabel;

    void setupUi(QWidget *BitwiseOperationEmbeddedWidget)
    {
        if (BitwiseOperationEmbeddedWidget->objectName().isEmpty())
            BitwiseOperationEmbeddedWidget->setObjectName(QString::fromUtf8("BitwiseOperationEmbeddedWidget"));
        BitwiseOperationEmbeddedWidget->resize(97, 34);
        mpMaskTitleLabel = new QLabel(BitwiseOperationEmbeddedWidget);
        mpMaskTitleLabel->setObjectName(QString::fromUtf8("mpMaskTitleLabel"));
        mpMaskTitleLabel->setGeometry(QRect(10, 10, 47, 13));
        mpMaskStatusLabel = new QLabel(BitwiseOperationEmbeddedWidget);
        mpMaskStatusLabel->setObjectName(QString::fromUtf8("mpMaskStatusLabel"));
        mpMaskStatusLabel->setGeometry(QRect(50, 10, 47, 13));

        retranslateUi(BitwiseOperationEmbeddedWidget);

        QMetaObject::connectSlotsByName(BitwiseOperationEmbeddedWidget);
    } // setupUi

    void retranslateUi(QWidget *BitwiseOperationEmbeddedWidget)
    {
        BitwiseOperationEmbeddedWidget->setWindowTitle(QCoreApplication::translate("BitwiseOperationEmbeddedWidget", "Form", nullptr));
        mpMaskTitleLabel->setText(QCoreApplication::translate("BitwiseOperationEmbeddedWidget", "Mask :", nullptr));
        mpMaskStatusLabel->setText(QCoreApplication::translate("BitwiseOperationEmbeddedWidget", "Inactive", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BitwiseOperationEmbeddedWidget: public Ui_BitwiseOperationEmbeddedWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BITWISEOPERATIONEMBEDDEDWIDGET_H
