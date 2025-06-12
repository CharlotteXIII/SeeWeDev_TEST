/********************************************************************************
** Form generated from reading UI file 'DataGeneratorEmbeddedWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATAGENERATOREMBEDDEDWIDGET_H
#define UI_DATAGENERATOREMBEDDEDWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DataGeneratorEmbeddedWidget
{
public:
    QLabel *mpLabel;
    QComboBox *mpComboBox;
    QPlainTextEdit *mpPlainTextEdit;

    void setupUi(QWidget *DataGeneratorEmbeddedWidget)
    {
        if (DataGeneratorEmbeddedWidget->objectName().isEmpty())
            DataGeneratorEmbeddedWidget->setObjectName(QString::fromUtf8("DataGeneratorEmbeddedWidget"));
        DataGeneratorEmbeddedWidget->resize(221, 228);
        mpLabel = new QLabel(DataGeneratorEmbeddedWidget);
        mpLabel->setObjectName(QString::fromUtf8("mpLabel"));
        mpLabel->setGeometry(QRect(20, 10, 61, 21));
        mpComboBox = new QComboBox(DataGeneratorEmbeddedWidget);
        mpComboBox->addItem(QString());
        mpComboBox->addItem(QString());
        mpComboBox->addItem(QString());
        mpComboBox->addItem(QString());
        mpComboBox->addItem(QString());
        mpComboBox->addItem(QString());
        mpComboBox->addItem(QString());
        mpComboBox->addItem(QString());
        mpComboBox->setObjectName(QString::fromUtf8("mpComboBox"));
        mpComboBox->setGeometry(QRect(90, 10, 111, 22));
        mpPlainTextEdit = new QPlainTextEdit(DataGeneratorEmbeddedWidget);
        mpPlainTextEdit->setObjectName(QString::fromUtf8("mpPlainTextEdit"));
        mpPlainTextEdit->setGeometry(QRect(20, 50, 181, 161));

        retranslateUi(DataGeneratorEmbeddedWidget);

        QMetaObject::connectSlotsByName(DataGeneratorEmbeddedWidget);
    } // setupUi

    void retranslateUi(QWidget *DataGeneratorEmbeddedWidget)
    {
        DataGeneratorEmbeddedWidget->setWindowTitle(QCoreApplication::translate("DataGeneratorEmbeddedWidget", "Form", nullptr));
        mpLabel->setText(QCoreApplication::translate("DataGeneratorEmbeddedWidget", "Data Type :", nullptr));
        mpComboBox->setItemText(0, QCoreApplication::translate("DataGeneratorEmbeddedWidget", "int", nullptr));
        mpComboBox->setItemText(1, QCoreApplication::translate("DataGeneratorEmbeddedWidget", "float", nullptr));
        mpComboBox->setItemText(2, QCoreApplication::translate("DataGeneratorEmbeddedWidget", "double", nullptr));
        mpComboBox->setItemText(3, QCoreApplication::translate("DataGeneratorEmbeddedWidget", "bool", nullptr));
        mpComboBox->setItemText(4, QCoreApplication::translate("DataGeneratorEmbeddedWidget", "std::string", nullptr));
        mpComboBox->setItemText(5, QCoreApplication::translate("DataGeneratorEmbeddedWidget", "cv::Rect", nullptr));
        mpComboBox->setItemText(6, QCoreApplication::translate("DataGeneratorEmbeddedWidget", "cv::Point", nullptr));
        mpComboBox->setItemText(7, QCoreApplication::translate("DataGeneratorEmbeddedWidget", "cv::Scalar", nullptr));

    } // retranslateUi

};

namespace Ui {
    class DataGeneratorEmbeddedWidget: public Ui_DataGeneratorEmbeddedWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATAGENERATOREMBEDDEDWIDGET_H
