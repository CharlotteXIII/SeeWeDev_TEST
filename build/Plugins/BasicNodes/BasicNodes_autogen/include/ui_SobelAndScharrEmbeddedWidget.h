/********************************************************************************
** Form generated from reading UI file 'SobelAndScharrEmbeddedWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOBELANDSCHARREMBEDDEDWIDGET_H
#define UI_SOBELANDSCHARREMBEDDEDWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SobelAndScharrEmbeddedWidget
{
public:
    QCheckBox *mpCheckBox;

    void setupUi(QWidget *SobelAndScharrEmbeddedWidget)
    {
        if (SobelAndScharrEmbeddedWidget->objectName().isEmpty())
            SobelAndScharrEmbeddedWidget->setObjectName(QString::fromUtf8("SobelAndScharrEmbeddedWidget"));
        SobelAndScharrEmbeddedWidget->resize(131, 37);
        mpCheckBox = new QCheckBox(SobelAndScharrEmbeddedWidget);
        mpCheckBox->setObjectName(QString::fromUtf8("mpCheckBox"));
        mpCheckBox->setGeometry(QRect(10, 10, 121, 19));

        retranslateUi(SobelAndScharrEmbeddedWidget);

        QMetaObject::connectSlotsByName(SobelAndScharrEmbeddedWidget);
    } // setupUi

    void retranslateUi(QWidget *SobelAndScharrEmbeddedWidget)
    {
        SobelAndScharrEmbeddedWidget->setWindowTitle(QCoreApplication::translate("SobelAndScharrEmbeddedWidget", "Form", nullptr));
        mpCheckBox->setText(QCoreApplication::translate("SobelAndScharrEmbeddedWidget", "Use Scharr function", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SobelAndScharrEmbeddedWidget: public Ui_SobelAndScharrEmbeddedWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOBELANDSCHARREMBEDDEDWIDGET_H
