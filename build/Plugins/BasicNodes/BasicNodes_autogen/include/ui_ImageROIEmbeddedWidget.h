/********************************************************************************
** Form generated from reading UI file 'ImageROIEmbeddedWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGEROIEMBEDDEDWIDGET_H
#define UI_IMAGEROIEMBEDDEDWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImageROIEmbeddedWidget
{
public:
    QPushButton *mpApplyButton;
    QPushButton *mpResetButton;

    void setupUi(QWidget *ImageROIEmbeddedWidget)
    {
        if (ImageROIEmbeddedWidget->objectName().isEmpty())
            ImageROIEmbeddedWidget->setObjectName(QString::fromUtf8("ImageROIEmbeddedWidget"));
        ImageROIEmbeddedWidget->resize(206, 43);
        mpApplyButton = new QPushButton(ImageROIEmbeddedWidget);
        mpApplyButton->setObjectName(QString::fromUtf8("mpApplyButton"));
        mpApplyButton->setGeometry(QRect(20, 10, 80, 21));
        mpResetButton = new QPushButton(ImageROIEmbeddedWidget);
        mpResetButton->setObjectName(QString::fromUtf8("mpResetButton"));
        mpResetButton->setGeometry(QRect(110, 10, 80, 21));

        retranslateUi(ImageROIEmbeddedWidget);

        QMetaObject::connectSlotsByName(ImageROIEmbeddedWidget);
    } // setupUi

    void retranslateUi(QWidget *ImageROIEmbeddedWidget)
    {
        ImageROIEmbeddedWidget->setWindowTitle(QCoreApplication::translate("ImageROIEmbeddedWidget", "Form", nullptr));
        mpApplyButton->setText(QCoreApplication::translate("ImageROIEmbeddedWidget", "Apply", nullptr));
        mpResetButton->setText(QCoreApplication::translate("ImageROIEmbeddedWidget", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ImageROIEmbeddedWidget: public Ui_ImageROIEmbeddedWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEROIEMBEDDEDWIDGET_H
