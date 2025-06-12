/********************************************************************************
** Form generated from reading UI file 'FaceDetectionEmbeddedWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FACEDETECTIONEMBEDDEDWIDGET_H
#define UI_FACEDETECTIONEMBEDDEDWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FaceDetectionEmbeddedWidget
{
public:
    QLabel *label;
    QComboBox *mpComboBox;

    void setupUi(QWidget *FaceDetectionEmbeddedWidget)
    {
        if (FaceDetectionEmbeddedWidget->objectName().isEmpty())
            FaceDetectionEmbeddedWidget->setObjectName(QString::fromUtf8("FaceDetectionEmbeddedWidget"));
        FaceDetectionEmbeddedWidget->resize(121, 65);
        label = new QLabel(FaceDetectionEmbeddedWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 47, 13));
        mpComboBox = new QComboBox(FaceDetectionEmbeddedWidget);
        mpComboBox->addItem(QString());
        mpComboBox->addItem(QString());
        mpComboBox->addItem(QString());
        mpComboBox->addItem(QString());
        mpComboBox->setObjectName(QString::fromUtf8("mpComboBox"));
        mpComboBox->setGeometry(QRect(10, 30, 101, 22));

        retranslateUi(FaceDetectionEmbeddedWidget);

        QMetaObject::connectSlotsByName(FaceDetectionEmbeddedWidget);
    } // setupUi

    void retranslateUi(QWidget *FaceDetectionEmbeddedWidget)
    {
        FaceDetectionEmbeddedWidget->setWindowTitle(QCoreApplication::translate("FaceDetectionEmbeddedWidget", "Form", nullptr));
        label->setText(QCoreApplication::translate("FaceDetectionEmbeddedWidget", "Detector:", nullptr));
        mpComboBox->setItemText(0, QCoreApplication::translate("FaceDetectionEmbeddedWidget", "Face (Fast)", nullptr));
        mpComboBox->setItemText(1, QCoreApplication::translate("FaceDetectionEmbeddedWidget", "Face (Medium)", nullptr));
        mpComboBox->setItemText(2, QCoreApplication::translate("FaceDetectionEmbeddedWidget", "Face (Slow)", nullptr));
        mpComboBox->setItemText(3, QCoreApplication::translate("FaceDetectionEmbeddedWidget", "Eyes", nullptr));

    } // retranslateUi

};

namespace Ui {
    class FaceDetectionEmbeddedWidget: public Ui_FaceDetectionEmbeddedWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FACEDETECTIONEMBEDDEDWIDGET_H
