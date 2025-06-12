/********************************************************************************
** Form generated from reading UI file 'InformationDisplayEmbeddedWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORMATIONDISPLAYEMBEDDEDWIDGET_H
#define UI_INFORMATIONDISPLAYEMBEDDEDWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InformationDisplayEmbeddedWidget
{
public:
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *mpPlainTextEdit;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *mpClearButton;
    QPushButton *mpExportButton;

    void setupUi(QWidget *InformationDisplayEmbeddedWidget)
    {
        if (InformationDisplayEmbeddedWidget->objectName().isEmpty())
            InformationDisplayEmbeddedWidget->setObjectName(QString::fromUtf8("InformationDisplayEmbeddedWidget"));
        InformationDisplayEmbeddedWidget->resize(480, 240);
        verticalLayout = new QVBoxLayout(InformationDisplayEmbeddedWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mpPlainTextEdit = new QPlainTextEdit(InformationDisplayEmbeddedWidget);
        mpPlainTextEdit->setObjectName(QString::fromUtf8("mpPlainTextEdit"));

        verticalLayout->addWidget(mpPlainTextEdit);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        mpClearButton = new QPushButton(InformationDisplayEmbeddedWidget);
        mpClearButton->setObjectName(QString::fromUtf8("mpClearButton"));

        horizontalLayout_2->addWidget(mpClearButton);

        mpExportButton = new QPushButton(InformationDisplayEmbeddedWidget);
        mpExportButton->setObjectName(QString::fromUtf8("mpExportButton"));

        horizontalLayout_2->addWidget(mpExportButton);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(InformationDisplayEmbeddedWidget);

        QMetaObject::connectSlotsByName(InformationDisplayEmbeddedWidget);
    } // setupUi

    void retranslateUi(QWidget *InformationDisplayEmbeddedWidget)
    {
        InformationDisplayEmbeddedWidget->setWindowTitle(QCoreApplication::translate("InformationDisplayEmbeddedWidget", "Form", nullptr));
        mpClearButton->setText(QCoreApplication::translate("InformationDisplayEmbeddedWidget", "Clear", nullptr));
        mpExportButton->setText(QCoreApplication::translate("InformationDisplayEmbeddedWidget", "Export", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InformationDisplayEmbeddedWidget: public Ui_InformationDisplayEmbeddedWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORMATIONDISPLAYEMBEDDEDWIDGET_H
