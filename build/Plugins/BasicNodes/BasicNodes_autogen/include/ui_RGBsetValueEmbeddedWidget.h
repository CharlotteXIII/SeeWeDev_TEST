/********************************************************************************
** Form generated from reading UI file 'RGBsetValueEmbeddedWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RGBSETVALUEEMBEDDEDWIDGET_H
#define UI_RGBSETVALUEEMBEDDEDWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RGBsetValueEmbeddedWidget
{
public:
    QPushButton *mpResetButton;

    void setupUi(QWidget *RGBsetValueEmbeddedWidget)
    {
        if (RGBsetValueEmbeddedWidget->objectName().isEmpty())
            RGBsetValueEmbeddedWidget->setObjectName(QString::fromUtf8("RGBsetValueEmbeddedWidget"));
        RGBsetValueEmbeddedWidget->resize(100, 44);
        mpResetButton = new QPushButton(RGBsetValueEmbeddedWidget);
        mpResetButton->setObjectName(QString::fromUtf8("mpResetButton"));
        mpResetButton->setGeometry(QRect(10, 10, 80, 21));

        retranslateUi(RGBsetValueEmbeddedWidget);

        QMetaObject::connectSlotsByName(RGBsetValueEmbeddedWidget);
    } // setupUi

    void retranslateUi(QWidget *RGBsetValueEmbeddedWidget)
    {
        RGBsetValueEmbeddedWidget->setWindowTitle(QCoreApplication::translate("RGBsetValueEmbeddedWidget", "Form", nullptr));
        mpResetButton->setText(QCoreApplication::translate("RGBsetValueEmbeddedWidget", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RGBsetValueEmbeddedWidget: public Ui_RGBsetValueEmbeddedWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RGBSETVALUEEMBEDDEDWIDGET_H
