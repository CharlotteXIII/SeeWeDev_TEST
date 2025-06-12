/********************************************************************************
** Form generated from reading UI file 'NodeDataTimerEmbeddedWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NODEDATATIMEREMBEDDEDWIDGET_H
#define UI_NODEDATATIMEREMBEDDEDWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NodeDataTimerEmbeddedWidget
{
public:
    QSpinBox *mpSecondSpinbox;
    QSpinBox *mpMillisecondSpinbox;
    QLabel *mpSecondLabel;
    QLabel *mpMillisecondLabel;
    QLabel *mpRemainingTextLabel;
    QLabel *mpPFLabel;
    QComboBox *mpPFComboBox;
    QLabel *mpRemainingLabel;
    QPushButton *mpStartButton;
    QPushButton *mpStopButton;
    QLabel *mpPFUnitLabel;
    QLabel *mpRemainingUnitLabel;
    QPushButton *mpResetButton;

    void setupUi(QWidget *NodeDataTimerEmbeddedWidget)
    {
        if (NodeDataTimerEmbeddedWidget->objectName().isEmpty())
            NodeDataTimerEmbeddedWidget->setObjectName(QString::fromUtf8("NodeDataTimerEmbeddedWidget"));
        NodeDataTimerEmbeddedWidget->resize(242, 131);
        mpSecondSpinbox = new QSpinBox(NodeDataTimerEmbeddedWidget);
        mpSecondSpinbox->setObjectName(QString::fromUtf8("mpSecondSpinbox"));
        mpSecondSpinbox->setGeometry(QRect(10, 11, 71, 22));
        mpMillisecondSpinbox = new QSpinBox(NodeDataTimerEmbeddedWidget);
        mpMillisecondSpinbox->setObjectName(QString::fromUtf8("mpMillisecondSpinbox"));
        mpMillisecondSpinbox->setGeometry(QRect(120, 11, 81, 22));
        mpSecondLabel = new QLabel(NodeDataTimerEmbeddedWidget);
        mpSecondLabel->setObjectName(QString::fromUtf8("mpSecondLabel"));
        mpSecondLabel->setGeometry(QRect(90, 11, 16, 21));
        mpMillisecondLabel = new QLabel(NodeDataTimerEmbeddedWidget);
        mpMillisecondLabel->setObjectName(QString::fromUtf8("mpMillisecondLabel"));
        mpMillisecondLabel->setGeometry(QRect(210, 11, 21, 21));
        mpRemainingTextLabel = new QLabel(NodeDataTimerEmbeddedWidget);
        mpRemainingTextLabel->setObjectName(QString::fromUtf8("mpRemainingTextLabel"));
        mpRemainingTextLabel->setGeometry(QRect(10, 90, 91, 21));
        mpPFLabel = new QLabel(NodeDataTimerEmbeddedWidget);
        mpPFLabel->setObjectName(QString::fromUtf8("mpPFLabel"));
        mpPFLabel->setGeometry(QRect(100, 51, 41, 21));
        mpPFComboBox = new QComboBox(NodeDataTimerEmbeddedWidget);
        mpPFComboBox->addItem(QString());
        mpPFComboBox->addItem(QString());
        mpPFComboBox->setObjectName(QString::fromUtf8("mpPFComboBox"));
        mpPFComboBox->setGeometry(QRect(10, 51, 81, 22));
        mpRemainingLabel = new QLabel(NodeDataTimerEmbeddedWidget);
        mpRemainingLabel->setObjectName(QString::fromUtf8("mpRemainingLabel"));
        mpRemainingLabel->setGeometry(QRect(100, 91, 41, 21));
        mpStartButton = new QPushButton(NodeDataTimerEmbeddedWidget);
        mpStartButton->setObjectName(QString::fromUtf8("mpStartButton"));
        mpStartButton->setGeometry(QRect(169, 40, 61, 21));
        mpStopButton = new QPushButton(NodeDataTimerEmbeddedWidget);
        mpStopButton->setObjectName(QString::fromUtf8("mpStopButton"));
        mpStopButton->setGeometry(QRect(169, 70, 61, 21));
        mpPFUnitLabel = new QLabel(NodeDataTimerEmbeddedWidget);
        mpPFUnitLabel->setObjectName(QString::fromUtf8("mpPFUnitLabel"));
        mpPFUnitLabel->setGeometry(QRect(150, 50, 16, 21));
        mpRemainingUnitLabel = new QLabel(NodeDataTimerEmbeddedWidget);
        mpRemainingUnitLabel->setObjectName(QString::fromUtf8("mpRemainingUnitLabel"));
        mpRemainingUnitLabel->setGeometry(QRect(150, 90, 16, 21));
        mpResetButton = new QPushButton(NodeDataTimerEmbeddedWidget);
        mpResetButton->setObjectName(QString::fromUtf8("mpResetButton"));
        mpResetButton->setGeometry(QRect(170, 100, 61, 21));

        retranslateUi(NodeDataTimerEmbeddedWidget);

        QMetaObject::connectSlotsByName(NodeDataTimerEmbeddedWidget);
    } // setupUi

    void retranslateUi(QWidget *NodeDataTimerEmbeddedWidget)
    {
        NodeDataTimerEmbeddedWidget->setWindowTitle(QCoreApplication::translate("NodeDataTimerEmbeddedWidget", "Form", nullptr));
        mpSecondLabel->setText(QCoreApplication::translate("NodeDataTimerEmbeddedWidget", "s", nullptr));
        mpMillisecondLabel->setText(QCoreApplication::translate("NodeDataTimerEmbeddedWidget", "ms", nullptr));
        mpRemainingTextLabel->setText(QCoreApplication::translate("NodeDataTimerEmbeddedWidget", "Time Remaining :", nullptr));
        mpPFLabel->setText(QCoreApplication::translate("NodeDataTimerEmbeddedWidget", "0.00", nullptr));
        mpPFComboBox->setItemText(0, QCoreApplication::translate("NodeDataTimerEmbeddedWidget", "Period", nullptr));
        mpPFComboBox->setItemText(1, QCoreApplication::translate("NodeDataTimerEmbeddedWidget", "Frequency", nullptr));

        mpRemainingLabel->setText(QCoreApplication::translate("NodeDataTimerEmbeddedWidget", "0", nullptr));
        mpStartButton->setText(QCoreApplication::translate("NodeDataTimerEmbeddedWidget", "Start", nullptr));
        mpStopButton->setText(QCoreApplication::translate("NodeDataTimerEmbeddedWidget", "Stop", nullptr));
        mpPFUnitLabel->setText(QCoreApplication::translate("NodeDataTimerEmbeddedWidget", "s", nullptr));
        mpRemainingUnitLabel->setText(QCoreApplication::translate("NodeDataTimerEmbeddedWidget", "ms", nullptr));
        mpResetButton->setText(QCoreApplication::translate("NodeDataTimerEmbeddedWidget", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NodeDataTimerEmbeddedWidget: public Ui_NodeDataTimerEmbeddedWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NODEDATATIMEREMBEDDEDWIDGET_H
