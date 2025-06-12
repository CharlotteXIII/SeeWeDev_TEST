/********************************************************************************
** Form generated from reading UI file 'BlendImagesEmbeddedWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BLENDIMAGESEMBEDDEDWIDGET_H
#define UI_BLENDIMAGESEMBEDDEDWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BlendImagesEmbeddedWidget
{
public:
    QRadioButton *mpAddRadioButton;
    QRadioButton *mpAddWeightedRadioButton;

    void setupUi(QWidget *BlendImagesEmbeddedWidget)
    {
        if (BlendImagesEmbeddedWidget->objectName().isEmpty())
            BlendImagesEmbeddedWidget->setObjectName(QString::fromUtf8("BlendImagesEmbeddedWidget"));
        BlendImagesEmbeddedWidget->resize(148, 75);
        mpAddRadioButton = new QRadioButton(BlendImagesEmbeddedWidget);
        mpAddRadioButton->setObjectName(QString::fromUtf8("mpAddRadioButton"));
        mpAddRadioButton->setGeometry(QRect(20, 10, 84, 19));
        mpAddWeightedRadioButton = new QRadioButton(BlendImagesEmbeddedWidget);
        mpAddWeightedRadioButton->setObjectName(QString::fromUtf8("mpAddWeightedRadioButton"));
        mpAddWeightedRadioButton->setGeometry(QRect(20, 40, 101, 19));

        retranslateUi(BlendImagesEmbeddedWidget);

        QMetaObject::connectSlotsByName(BlendImagesEmbeddedWidget);
    } // setupUi

    void retranslateUi(QWidget *BlendImagesEmbeddedWidget)
    {
        BlendImagesEmbeddedWidget->setWindowTitle(QCoreApplication::translate("BlendImagesEmbeddedWidget", "Form", nullptr));
        mpAddRadioButton->setText(QCoreApplication::translate("BlendImagesEmbeddedWidget", "add()", nullptr));
        mpAddWeightedRadioButton->setText(QCoreApplication::translate("BlendImagesEmbeddedWidget", "addWeighted()", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BlendImagesEmbeddedWidget: public Ui_BlendImagesEmbeddedWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLENDIMAGESEMBEDDEDWIDGET_H
