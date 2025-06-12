/********************************************************************************
** Form generated from reading UI file 'FloodFillEmbeddedWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLOODFILLEMBEDDEDWIDGET_H
#define UI_FLOODFILLEMBEDDEDWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FloodFillEmbeddedWidget
{
public:
    QSpinBox *mpLowerBSpinbox;
    QLabel *mpLowerTitleLabel;
    QLabel *mpLowerBLabel;
    QLabel *mpLowerGLabel;
    QLabel *mpLowerRLabel;
    QLabel *mpLowerGrayLabel;
    QSpinBox *mpLowerGSpinbox;
    QSpinBox *mpLowerRSpinbox;
    QSpinBox *mpLowerGraySpinbox;
    QSpinBox *mpUpperGSpinbox;
    QLabel *mpUpperTitleLabel;
    QLabel *mpUpperBLabel;
    QSpinBox *mpUpperBSpinbox;
    QSpinBox *mpUpperRSpinbox;
    QLabel *mpUpperGLabel;
    QLabel *mpUpperGrayLabel;
    QLabel *mpUpperRLabel;
    QSpinBox *mpUpperGraySpinbox;
    QLabel *mpMaskTitleLabel;
    QLabel *mpMaskStatusLabel;

    void setupUi(QWidget *FloodFillEmbeddedWidget)
    {
        if (FloodFillEmbeddedWidget->objectName().isEmpty())
            FloodFillEmbeddedWidget->setObjectName(QString::fromUtf8("FloodFillEmbeddedWidget"));
        FloodFillEmbeddedWidget->resize(248, 200);
        mpLowerBSpinbox = new QSpinBox(FloodFillEmbeddedWidget);
        mpLowerBSpinbox->setObjectName(QString::fromUtf8("mpLowerBSpinbox"));
        mpLowerBSpinbox->setGeometry(QRect(70, 50, 51, 21));
        mpLowerTitleLabel = new QLabel(FloodFillEmbeddedWidget);
        mpLowerTitleLabel->setObjectName(QString::fromUtf8("mpLowerTitleLabel"));
        mpLowerTitleLabel->setGeometry(QRect(20, 10, 91, 31));
        mpLowerBLabel = new QLabel(FloodFillEmbeddedWidget);
        mpLowerBLabel->setObjectName(QString::fromUtf8("mpLowerBLabel"));
        mpLowerBLabel->setGeometry(QRect(20, 50, 47, 13));
        mpLowerGLabel = new QLabel(FloodFillEmbeddedWidget);
        mpLowerGLabel->setObjectName(QString::fromUtf8("mpLowerGLabel"));
        mpLowerGLabel->setGeometry(QRect(20, 80, 47, 13));
        mpLowerRLabel = new QLabel(FloodFillEmbeddedWidget);
        mpLowerRLabel->setObjectName(QString::fromUtf8("mpLowerRLabel"));
        mpLowerRLabel->setGeometry(QRect(20, 110, 47, 13));
        mpLowerGrayLabel = new QLabel(FloodFillEmbeddedWidget);
        mpLowerGrayLabel->setObjectName(QString::fromUtf8("mpLowerGrayLabel"));
        mpLowerGrayLabel->setGeometry(QRect(20, 140, 51, 16));
        mpLowerGSpinbox = new QSpinBox(FloodFillEmbeddedWidget);
        mpLowerGSpinbox->setObjectName(QString::fromUtf8("mpLowerGSpinbox"));
        mpLowerGSpinbox->setGeometry(QRect(70, 80, 51, 21));
        mpLowerRSpinbox = new QSpinBox(FloodFillEmbeddedWidget);
        mpLowerRSpinbox->setObjectName(QString::fromUtf8("mpLowerRSpinbox"));
        mpLowerRSpinbox->setGeometry(QRect(70, 110, 51, 21));
        mpLowerGraySpinbox = new QSpinBox(FloodFillEmbeddedWidget);
        mpLowerGraySpinbox->setObjectName(QString::fromUtf8("mpLowerGraySpinbox"));
        mpLowerGraySpinbox->setGeometry(QRect(70, 140, 51, 21));
        mpUpperGSpinbox = new QSpinBox(FloodFillEmbeddedWidget);
        mpUpperGSpinbox->setObjectName(QString::fromUtf8("mpUpperGSpinbox"));
        mpUpperGSpinbox->setGeometry(QRect(180, 80, 51, 21));
        mpUpperTitleLabel = new QLabel(FloodFillEmbeddedWidget);
        mpUpperTitleLabel->setObjectName(QString::fromUtf8("mpUpperTitleLabel"));
        mpUpperTitleLabel->setGeometry(QRect(130, 10, 91, 31));
        mpUpperBLabel = new QLabel(FloodFillEmbeddedWidget);
        mpUpperBLabel->setObjectName(QString::fromUtf8("mpUpperBLabel"));
        mpUpperBLabel->setGeometry(QRect(130, 50, 47, 13));
        mpUpperBSpinbox = new QSpinBox(FloodFillEmbeddedWidget);
        mpUpperBSpinbox->setObjectName(QString::fromUtf8("mpUpperBSpinbox"));
        mpUpperBSpinbox->setGeometry(QRect(180, 50, 51, 21));
        mpUpperRSpinbox = new QSpinBox(FloodFillEmbeddedWidget);
        mpUpperRSpinbox->setObjectName(QString::fromUtf8("mpUpperRSpinbox"));
        mpUpperRSpinbox->setGeometry(QRect(180, 110, 51, 21));
        mpUpperGLabel = new QLabel(FloodFillEmbeddedWidget);
        mpUpperGLabel->setObjectName(QString::fromUtf8("mpUpperGLabel"));
        mpUpperGLabel->setGeometry(QRect(130, 80, 47, 13));
        mpUpperGrayLabel = new QLabel(FloodFillEmbeddedWidget);
        mpUpperGrayLabel->setObjectName(QString::fromUtf8("mpUpperGrayLabel"));
        mpUpperGrayLabel->setGeometry(QRect(130, 140, 51, 16));
        mpUpperRLabel = new QLabel(FloodFillEmbeddedWidget);
        mpUpperRLabel->setObjectName(QString::fromUtf8("mpUpperRLabel"));
        mpUpperRLabel->setGeometry(QRect(130, 110, 47, 13));
        mpUpperGraySpinbox = new QSpinBox(FloodFillEmbeddedWidget);
        mpUpperGraySpinbox->setObjectName(QString::fromUtf8("mpUpperGraySpinbox"));
        mpUpperGraySpinbox->setGeometry(QRect(180, 140, 51, 21));
        mpMaskTitleLabel = new QLabel(FloodFillEmbeddedWidget);
        mpMaskTitleLabel->setObjectName(QString::fromUtf8("mpMaskTitleLabel"));
        mpMaskTitleLabel->setGeometry(QRect(80, 170, 41, 21));
        mpMaskStatusLabel = new QLabel(FloodFillEmbeddedWidget);
        mpMaskStatusLabel->setObjectName(QString::fromUtf8("mpMaskStatusLabel"));
        mpMaskStatusLabel->setGeometry(QRect(120, 170, 61, 21));

        retranslateUi(FloodFillEmbeddedWidget);

        QMetaObject::connectSlotsByName(FloodFillEmbeddedWidget);
    } // setupUi

    void retranslateUi(QWidget *FloodFillEmbeddedWidget)
    {
        FloodFillEmbeddedWidget->setWindowTitle(QCoreApplication::translate("FloodFillEmbeddedWidget", "Form", nullptr));
        mpLowerTitleLabel->setText(QCoreApplication::translate("FloodFillEmbeddedWidget", "Lower Differences", nullptr));
        mpLowerBLabel->setText(QCoreApplication::translate("FloodFillEmbeddedWidget", "B value", nullptr));
        mpLowerGLabel->setText(QCoreApplication::translate("FloodFillEmbeddedWidget", "G value", nullptr));
        mpLowerRLabel->setText(QCoreApplication::translate("FloodFillEmbeddedWidget", "R value", nullptr));
        mpLowerGrayLabel->setText(QCoreApplication::translate("FloodFillEmbeddedWidget", "Grayscale", nullptr));
        mpUpperTitleLabel->setText(QCoreApplication::translate("FloodFillEmbeddedWidget", "Upper Differences", nullptr));
        mpUpperBLabel->setText(QCoreApplication::translate("FloodFillEmbeddedWidget", "B value", nullptr));
        mpUpperGLabel->setText(QCoreApplication::translate("FloodFillEmbeddedWidget", "G value", nullptr));
        mpUpperGrayLabel->setText(QCoreApplication::translate("FloodFillEmbeddedWidget", "Grayscale", nullptr));
        mpUpperRLabel->setText(QCoreApplication::translate("FloodFillEmbeddedWidget", "R value", nullptr));
        mpMaskTitleLabel->setText(QCoreApplication::translate("FloodFillEmbeddedWidget", "Mask  :", nullptr));
        mpMaskStatusLabel->setText(QCoreApplication::translate("FloodFillEmbeddedWidget", "Inactive", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FloodFillEmbeddedWidget: public Ui_FloodFillEmbeddedWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLOODFILLEMBEDDEDWIDGET_H
