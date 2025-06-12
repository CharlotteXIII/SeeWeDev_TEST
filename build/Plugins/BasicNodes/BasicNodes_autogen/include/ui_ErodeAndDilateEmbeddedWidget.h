/********************************************************************************
** Form generated from reading UI file 'ErodeAndDilateEmbeddedWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ERODEANDDILATEEMBEDDEDWIDGET_H
#define UI_ERODEANDDILATEEMBEDDEDWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ErodeAndDilateEmbeddedWidget
{
public:
    QRadioButton *mpErodeRadioButton;
    QRadioButton *mpDilateRadioButton;

    void setupUi(QWidget *ErodeAndDilateEmbeddedWidget)
    {
        if (ErodeAndDilateEmbeddedWidget->objectName().isEmpty())
            ErodeAndDilateEmbeddedWidget->setObjectName(QString::fromUtf8("ErodeAndDilateEmbeddedWidget"));
        ErodeAndDilateEmbeddedWidget->resize(79, 69);
        mpErodeRadioButton = new QRadioButton(ErodeAndDilateEmbeddedWidget);
        mpErodeRadioButton->setObjectName(QString::fromUtf8("mpErodeRadioButton"));
        mpErodeRadioButton->setGeometry(QRect(10, 10, 84, 19));
        mpDilateRadioButton = new QRadioButton(ErodeAndDilateEmbeddedWidget);
        mpDilateRadioButton->setObjectName(QString::fromUtf8("mpDilateRadioButton"));
        mpDilateRadioButton->setGeometry(QRect(10, 40, 84, 19));

        retranslateUi(ErodeAndDilateEmbeddedWidget);

        QMetaObject::connectSlotsByName(ErodeAndDilateEmbeddedWidget);
    } // setupUi

    void retranslateUi(QWidget *ErodeAndDilateEmbeddedWidget)
    {
        ErodeAndDilateEmbeddedWidget->setWindowTitle(QCoreApplication::translate("ErodeAndDilateEmbeddedWidget", "Form", nullptr));
        mpErodeRadioButton->setText(QCoreApplication::translate("ErodeAndDilateEmbeddedWidget", "Erosion", nullptr));
        mpDilateRadioButton->setText(QCoreApplication::translate("ErodeAndDilateEmbeddedWidget", "Dilation", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ErodeAndDilateEmbeddedWidget: public Ui_ErodeAndDilateEmbeddedWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERODEANDDILATEEMBEDDEDWIDGET_H
