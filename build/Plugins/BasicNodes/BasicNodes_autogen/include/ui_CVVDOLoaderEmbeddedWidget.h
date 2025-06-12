/********************************************************************************
** Form generated from reading UI file 'CVVDOLoaderEmbeddedWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CVVDOLOADEREMBEDDEDWIDGET_H
#define UI_CVVDOLOADEREMBEDDEDWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CVVDOLoaderEmbeddedWidget
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *mpFilenameButton;
    QSlider *mpSlider;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *leftSpacer;
    QPushButton *mpBackwardButton;
    QPushButton *mpPlayPauseButton;
    QPushButton *mpForwardButton;
    QSpacerItem *rightSpacer;

    void setupUi(QWidget *CVVDOLoaderEmbeddedWidget)
    {
        if (CVVDOLoaderEmbeddedWidget->objectName().isEmpty())
            CVVDOLoaderEmbeddedWidget->setObjectName(QString::fromUtf8("CVVDOLoaderEmbeddedWidget"));
        CVVDOLoaderEmbeddedWidget->resize(215, 89);
        verticalLayout = new QVBoxLayout(CVVDOLoaderEmbeddedWidget);
        verticalLayout->setSpacing(7);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mpFilenameButton = new QPushButton(CVVDOLoaderEmbeddedWidget);
        mpFilenameButton->setObjectName(QString::fromUtf8("mpFilenameButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mpFilenameButton->sizePolicy().hasHeightForWidth());
        mpFilenameButton->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(12);
        mpFilenameButton->setFont(font);
        mpFilenameButton->setLayoutDirection(Qt::LeftToRight);

        verticalLayout->addWidget(mpFilenameButton);

        mpSlider = new QSlider(CVVDOLoaderEmbeddedWidget);
        mpSlider->setObjectName(QString::fromUtf8("mpSlider"));
        mpSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(mpSlider);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        leftSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(leftSpacer);

        mpBackwardButton = new QPushButton(CVVDOLoaderEmbeddedWidget);
        mpBackwardButton->setObjectName(QString::fromUtf8("mpBackwardButton"));
        mpBackwardButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    min-width: 40px;\n"
"    min-height: 20px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
"\n"
"QPushButton:default {\n"
"    border-color: navy; /* make the default button prominent */\n"
"}\n"
"\n"
"QPushButton:checked {\n"
"    background-color: green\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/tango/32x32/media-skip-backward.png"), QSize(), QIcon::Normal, QIcon::Off);
        mpBackwardButton->setIcon(icon);

        horizontalLayout->addWidget(mpBackwardButton);

        mpPlayPauseButton = new QPushButton(CVVDOLoaderEmbeddedWidget);
        mpPlayPauseButton->setObjectName(QString::fromUtf8("mpPlayPauseButton"));
        mpPlayPauseButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: yellow;\n"
"    min-width: 40px;\n"
"    min-height: 20px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
"\n"
"QPushButton:default {\n"
"    border-color: navy; /* make the default button prominent */\n"
"}\n"
"\n"
"QPushButton:checked {\n"
"    background-color: green\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/tango/32x32/media-playback-start.png"), QSize(), QIcon::Normal, QIcon::Off);
        mpPlayPauseButton->setIcon(icon1);
        mpPlayPauseButton->setCheckable(true);

        horizontalLayout->addWidget(mpPlayPauseButton);

        mpForwardButton = new QPushButton(CVVDOLoaderEmbeddedWidget);
        mpForwardButton->setObjectName(QString::fromUtf8("mpForwardButton"));
        mpForwardButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    min-width: 40px;\n"
"    min-height: 20px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
"\n"
"QPushButton:default {\n"
"    border-color: navy; /* make the default button prominent */\n"
"}\n"
"\n"
"QPushButton:checked {\n"
"    background-color: green\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/tango/32x32/media-skip-forward.png"), QSize(), QIcon::Normal, QIcon::Off);
        mpForwardButton->setIcon(icon2);

        horizontalLayout->addWidget(mpForwardButton);

        rightSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(rightSpacer);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(CVVDOLoaderEmbeddedWidget);

        QMetaObject::connectSlotsByName(CVVDOLoaderEmbeddedWidget);
    } // setupUi

    void retranslateUi(QWidget *CVVDOLoaderEmbeddedWidget)
    {
        CVVDOLoaderEmbeddedWidget->setWindowTitle(QCoreApplication::translate("CVVDOLoaderEmbeddedWidget", "Form", nullptr));
        mpFilenameButton->setText(QString());
        mpBackwardButton->setText(QString());
        mpPlayPauseButton->setText(QString());
        mpForwardButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CVVDOLoaderEmbeddedWidget: public Ui_CVVDOLoaderEmbeddedWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CVVDOLOADEREMBEDDEDWIDGET_H
