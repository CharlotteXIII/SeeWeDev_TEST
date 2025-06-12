/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <PBTreeWidget.hpp>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *mpActionSave;
    QAction *mpActionLoad;
    QAction *mpActionQuit;
    QAction *mpActionSaveAs;
    QAction *mpActionSceneOnly;
    QAction *mpActionAllPanels;
    QAction *mpActionZoomReset;
    QAction *mpActionSaveAll;
    QAction *mpActionNew;
    QAction *mpActionCopy;
    QAction *mpActionCut;
    QAction *mpActionPaste;
    QAction *mpActionDelete;
    QAction *mpActionUndo;
    QAction *mpActionRedo;
    QAction *mpActionDisableAll;
    QAction *mpActionEnableAll;
    QAction *mpActionSnapToGrid;
    QAction *mpActionLoadPlugin;
    QAction *mpActionFocusView;
    QAction *mpActionAbout;
    QAction *mpActionFullScreen;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QTabWidget *mpTabWidget;
    QMenuBar *mpMenuBar;
    QMenu *mpMenuFile;
    QMenu *mpMenuView;
    QMenu *menuEdit;
    QMenu *menuControl;
    QMenu *menuHelp;
    QStatusBar *mpStatusBar;
    QDockWidget *mpAvailableNodeCategoryDockWidget;
    QWidget *mpAvailableNodeCategoryContentDockWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *mpAvailableNodeCategoryFilterLineEdit;
    PBTreeWidget *mpAvailableNodeCategoryTreeView;
    QDockWidget *mpNodeListDockWidget;
    QWidget *mpNodeListContentDockWidget;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *mpNodeListFilterLineEdit;
    QTreeWidget *mpNodeListTreeView;
    QDockWidget *mpPropertyBrowserDockWidget;
    QWidget *mpRightContentDockWidget;
    QVBoxLayout *verticalLayout_3;
    QToolBar *mpToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1200, 800);
        mpActionSave = new QAction(MainWindow);
        mpActionSave->setObjectName(QString::fromUtf8("mpActionSave"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/tango/32x32/document-save.png"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionSave->setIcon(icon);
        mpActionLoad = new QAction(MainWindow);
        mpActionLoad->setObjectName(QString::fromUtf8("mpActionLoad"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/tango/32x32/document-open.png"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionLoad->setIcon(icon1);
        mpActionQuit = new QAction(MainWindow);
        mpActionQuit->setObjectName(QString::fromUtf8("mpActionQuit"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/tango/32x32/system-log-out.png"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionQuit->setIcon(icon2);
        mpActionSaveAs = new QAction(MainWindow);
        mpActionSaveAs->setObjectName(QString::fromUtf8("mpActionSaveAs"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/tango/32x32/document-save-as.png"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionSaveAs->setIcon(icon3);
        mpActionSceneOnly = new QAction(MainWindow);
        mpActionSceneOnly->setObjectName(QString::fromUtf8("mpActionSceneOnly"));
        mpActionAllPanels = new QAction(MainWindow);
        mpActionAllPanels->setObjectName(QString::fromUtf8("mpActionAllPanels"));
        mpActionZoomReset = new QAction(MainWindow);
        mpActionZoomReset->setObjectName(QString::fromUtf8("mpActionZoomReset"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/tango/32x32/system-search.png"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionZoomReset->setIcon(icon4);
        mpActionSaveAll = new QAction(MainWindow);
        mpActionSaveAll->setObjectName(QString::fromUtf8("mpActionSaveAll"));
        mpActionNew = new QAction(MainWindow);
        mpActionNew->setObjectName(QString::fromUtf8("mpActionNew"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/tango/32x32/document-new.png"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionNew->setIcon(icon5);
        mpActionCopy = new QAction(MainWindow);
        mpActionCopy->setObjectName(QString::fromUtf8("mpActionCopy"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/tango/32x32/edit-copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionCopy->setIcon(icon6);
        mpActionCut = new QAction(MainWindow);
        mpActionCut->setObjectName(QString::fromUtf8("mpActionCut"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/tango/32x32/edit-cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionCut->setIcon(icon7);
        mpActionPaste = new QAction(MainWindow);
        mpActionPaste->setObjectName(QString::fromUtf8("mpActionPaste"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/tango/32x32/edit-paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionPaste->setIcon(icon8);
        mpActionDelete = new QAction(MainWindow);
        mpActionDelete->setObjectName(QString::fromUtf8("mpActionDelete"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons/tango/32x32/edit-delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionDelete->setIcon(icon9);
        mpActionUndo = new QAction(MainWindow);
        mpActionUndo->setObjectName(QString::fromUtf8("mpActionUndo"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icons/tango/32x32/edit-undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionUndo->setIcon(icon10);
        mpActionRedo = new QAction(MainWindow);
        mpActionRedo->setObjectName(QString::fromUtf8("mpActionRedo"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icons/tango/32x32/edit-redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionRedo->setIcon(icon11);
        mpActionDisableAll = new QAction(MainWindow);
        mpActionDisableAll->setObjectName(QString::fromUtf8("mpActionDisableAll"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/icons/tango/32x32/process-stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionDisableAll->setIcon(icon12);
        mpActionEnableAll = new QAction(MainWindow);
        mpActionEnableAll->setObjectName(QString::fromUtf8("mpActionEnableAll"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/icons/tango/32x32/start-here.png"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionEnableAll->setIcon(icon13);
        mpActionSnapToGrid = new QAction(MainWindow);
        mpActionSnapToGrid->setObjectName(QString::fromUtf8("mpActionSnapToGrid"));
        mpActionSnapToGrid->setCheckable(true);
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/icons/tango/32x32/mail-attachment.png"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionSnapToGrid->setIcon(icon14);
        mpActionLoadPlugin = new QAction(MainWindow);
        mpActionLoadPlugin->setObjectName(QString::fromUtf8("mpActionLoadPlugin"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/icons/tango/32x32/preferences-system.png"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionLoadPlugin->setIcon(icon15);
        mpActionFocusView = new QAction(MainWindow);
        mpActionFocusView->setObjectName(QString::fromUtf8("mpActionFocusView"));
        mpActionFocusView->setCheckable(true);
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/icons/tango/32x32/view-fullscreen.png"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionFocusView->setIcon(icon16);
        mpActionAbout = new QAction(MainWindow);
        mpActionAbout->setObjectName(QString::fromUtf8("mpActionAbout"));
        mpActionFullScreen = new QAction(MainWindow);
        mpActionFullScreen->setObjectName(QString::fromUtf8("mpActionFullScreen"));
        mpActionFullScreen->setCheckable(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        mpTabWidget = new QTabWidget(centralwidget);
        mpTabWidget->setObjectName(QString::fromUtf8("mpTabWidget"));
        mpTabWidget->setDocumentMode(true);
        mpTabWidget->setTabsClosable(true);
        mpTabWidget->setMovable(true);

        horizontalLayout->addWidget(mpTabWidget);

        MainWindow->setCentralWidget(centralwidget);
        mpMenuBar = new QMenuBar(MainWindow);
        mpMenuBar->setObjectName(QString::fromUtf8("mpMenuBar"));
        mpMenuBar->setGeometry(QRect(0, 0, 1200, 26));
        mpMenuFile = new QMenu(mpMenuBar);
        mpMenuFile->setObjectName(QString::fromUtf8("mpMenuFile"));
        mpMenuView = new QMenu(mpMenuBar);
        mpMenuView->setObjectName(QString::fromUtf8("mpMenuView"));
        menuEdit = new QMenu(mpMenuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuControl = new QMenu(mpMenuBar);
        menuControl->setObjectName(QString::fromUtf8("menuControl"));
        menuHelp = new QMenu(mpMenuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(mpMenuBar);
        mpStatusBar = new QStatusBar(MainWindow);
        mpStatusBar->setObjectName(QString::fromUtf8("mpStatusBar"));
        MainWindow->setStatusBar(mpStatusBar);
        mpAvailableNodeCategoryDockWidget = new QDockWidget(MainWindow);
        mpAvailableNodeCategoryDockWidget->setObjectName(QString::fromUtf8("mpAvailableNodeCategoryDockWidget"));
        mpAvailableNodeCategoryContentDockWidget = new QWidget();
        mpAvailableNodeCategoryContentDockWidget->setObjectName(QString::fromUtf8("mpAvailableNodeCategoryContentDockWidget"));
        verticalLayout = new QVBoxLayout(mpAvailableNodeCategoryContentDockWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mpAvailableNodeCategoryFilterLineEdit = new QLineEdit(mpAvailableNodeCategoryContentDockWidget);
        mpAvailableNodeCategoryFilterLineEdit->setObjectName(QString::fromUtf8("mpAvailableNodeCategoryFilterLineEdit"));

        verticalLayout->addWidget(mpAvailableNodeCategoryFilterLineEdit);

        mpAvailableNodeCategoryTreeView = new PBTreeWidget(mpAvailableNodeCategoryContentDockWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        mpAvailableNodeCategoryTreeView->setHeaderItem(__qtreewidgetitem);
        mpAvailableNodeCategoryTreeView->setObjectName(QString::fromUtf8("mpAvailableNodeCategoryTreeView"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mpAvailableNodeCategoryTreeView->sizePolicy().hasHeightForWidth());
        mpAvailableNodeCategoryTreeView->setSizePolicy(sizePolicy);
        mpAvailableNodeCategoryTreeView->setDragEnabled(true);
        mpAvailableNodeCategoryTreeView->setDragDropMode(QAbstractItemView::DragOnly);
        mpAvailableNodeCategoryTreeView->setHeaderHidden(true);
        mpAvailableNodeCategoryTreeView->header()->setVisible(false);

        verticalLayout->addWidget(mpAvailableNodeCategoryTreeView);

        mpAvailableNodeCategoryDockWidget->setWidget(mpAvailableNodeCategoryContentDockWidget);
        MainWindow->addDockWidget(Qt::LeftDockWidgetArea, mpAvailableNodeCategoryDockWidget);
        mpNodeListDockWidget = new QDockWidget(MainWindow);
        mpNodeListDockWidget->setObjectName(QString::fromUtf8("mpNodeListDockWidget"));
        mpNodeListContentDockWidget = new QWidget();
        mpNodeListContentDockWidget->setObjectName(QString::fromUtf8("mpNodeListContentDockWidget"));
        verticalLayout_2 = new QVBoxLayout(mpNodeListContentDockWidget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        mpNodeListFilterLineEdit = new QLineEdit(mpNodeListContentDockWidget);
        mpNodeListFilterLineEdit->setObjectName(QString::fromUtf8("mpNodeListFilterLineEdit"));

        verticalLayout_2->addWidget(mpNodeListFilterLineEdit);

        mpNodeListTreeView = new QTreeWidget(mpNodeListContentDockWidget);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem();
        __qtreewidgetitem1->setText(1, QString::fromUtf8("2"));
        __qtreewidgetitem1->setText(0, QString::fromUtf8("1"));
        mpNodeListTreeView->setHeaderItem(__qtreewidgetitem1);
        mpNodeListTreeView->setObjectName(QString::fromUtf8("mpNodeListTreeView"));
        sizePolicy.setHeightForWidth(mpNodeListTreeView->sizePolicy().hasHeightForWidth());
        mpNodeListTreeView->setSizePolicy(sizePolicy);
        mpNodeListTreeView->setColumnCount(2);
        mpNodeListTreeView->header()->setVisible(true);

        verticalLayout_2->addWidget(mpNodeListTreeView);

        mpNodeListDockWidget->setWidget(mpNodeListContentDockWidget);
        MainWindow->addDockWidget(Qt::RightDockWidgetArea, mpNodeListDockWidget);
        mpPropertyBrowserDockWidget = new QDockWidget(MainWindow);
        mpPropertyBrowserDockWidget->setObjectName(QString::fromUtf8("mpPropertyBrowserDockWidget"));
        mpRightContentDockWidget = new QWidget();
        mpRightContentDockWidget->setObjectName(QString::fromUtf8("mpRightContentDockWidget"));
        verticalLayout_3 = new QVBoxLayout(mpRightContentDockWidget);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        mpPropertyBrowserDockWidget->setWidget(mpRightContentDockWidget);
        MainWindow->addDockWidget(Qt::RightDockWidgetArea, mpPropertyBrowserDockWidget);
        mpToolBar = new QToolBar(MainWindow);
        mpToolBar->setObjectName(QString::fromUtf8("mpToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mpToolBar);

        mpMenuBar->addAction(mpMenuFile->menuAction());
        mpMenuBar->addAction(menuEdit->menuAction());
        mpMenuBar->addAction(mpMenuView->menuAction());
        mpMenuBar->addAction(menuControl->menuAction());
        mpMenuBar->addAction(menuHelp->menuAction());
        mpMenuFile->addAction(mpActionNew);
        mpMenuFile->addAction(mpActionLoad);
        mpMenuFile->addAction(mpActionSave);
        mpMenuFile->addAction(mpActionSaveAll);
        mpMenuFile->addAction(mpActionSaveAs);
        mpMenuFile->addSeparator();
        mpMenuFile->addAction(mpActionQuit);
        mpMenuView->addAction(mpActionZoomReset);
        mpMenuView->addSeparator();
        mpMenuView->addAction(mpActionSceneOnly);
        mpMenuView->addAction(mpActionAllPanels);
        mpMenuView->addSeparator();
        mpMenuView->addAction(mpActionFocusView);
        mpMenuView->addAction(mpActionFullScreen);
        menuEdit->addAction(mpActionUndo);
        menuEdit->addAction(mpActionRedo);
        menuEdit->addAction(mpActionSnapToGrid);
        menuEdit->addSeparator();
        menuEdit->addAction(mpActionCopy);
        menuEdit->addAction(mpActionCut);
        menuEdit->addAction(mpActionPaste);
        menuEdit->addAction(mpActionDelete);
        menuEdit->addSeparator();
        menuEdit->addAction(mpActionLoadPlugin);
        menuControl->addAction(mpActionDisableAll);
        menuControl->addAction(mpActionEnableAll);
        menuControl->addSeparator();
        menuHelp->addAction(mpActionAbout);
        mpToolBar->addAction(mpActionNew);
        mpToolBar->addAction(mpActionLoad);
        mpToolBar->addAction(mpActionSave);
        mpToolBar->addSeparator();
        mpToolBar->addAction(mpActionUndo);
        mpToolBar->addAction(mpActionRedo);
        mpToolBar->addAction(mpActionSnapToGrid);
        mpToolBar->addSeparator();
        mpToolBar->addAction(mpActionDisableAll);
        mpToolBar->addAction(mpActionEnableAll);
        mpToolBar->addSeparator();

        retranslateUi(MainWindow);

        mpTabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "CVDev", nullptr));
        mpActionSave->setText(QCoreApplication::translate("MainWindow", "Save ...", nullptr));
#if QT_CONFIG(shortcut)
        mpActionSave->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        mpActionLoad->setText(QCoreApplication::translate("MainWindow", "Load ...", nullptr));
#if QT_CONFIG(shortcut)
        mpActionLoad->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        mpActionQuit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
#if QT_CONFIG(shortcut)
        mpActionQuit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        mpActionSaveAs->setText(QCoreApplication::translate("MainWindow", "Save As ...", nullptr));
#if QT_CONFIG(shortcut)
        mpActionSaveAs->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        mpActionSceneOnly->setText(QCoreApplication::translate("MainWindow", "Scene Only", nullptr));
#if QT_CONFIG(tooltip)
        mpActionSceneOnly->setToolTip(QCoreApplication::translate("MainWindow", "Dispaly Scene Only", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        mpActionSceneOnly->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+H", nullptr));
#endif // QT_CONFIG(shortcut)
        mpActionAllPanels->setText(QCoreApplication::translate("MainWindow", "All Panels", nullptr));
#if QT_CONFIG(shortcut)
        mpActionAllPanels->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        mpActionZoomReset->setText(QCoreApplication::translate("MainWindow", "Zoom Reset", nullptr));
#if QT_CONFIG(shortcut)
        mpActionZoomReset->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
        mpActionSaveAll->setText(QCoreApplication::translate("MainWindow", "Save All", nullptr));
        mpActionNew->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
#if QT_CONFIG(shortcut)
        mpActionNew->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        mpActionCopy->setText(QCoreApplication::translate("MainWindow", "Copy", nullptr));
#if QT_CONFIG(shortcut)
        mpActionCopy->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        mpActionCut->setText(QCoreApplication::translate("MainWindow", "Cut", nullptr));
#if QT_CONFIG(shortcut)
        mpActionCut->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        mpActionPaste->setText(QCoreApplication::translate("MainWindow", "Paste", nullptr));
#if QT_CONFIG(shortcut)
        mpActionPaste->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        mpActionDelete->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
#if QT_CONFIG(shortcut)
        mpActionDelete->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+D", nullptr));
#endif // QT_CONFIG(shortcut)
        mpActionUndo->setText(QCoreApplication::translate("MainWindow", "Undo", nullptr));
#if QT_CONFIG(tooltip)
        mpActionUndo->setToolTip(QCoreApplication::translate("MainWindow", "Undo", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        mpActionUndo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        mpActionRedo->setText(QCoreApplication::translate("MainWindow", "Redo", nullptr));
#if QT_CONFIG(tooltip)
        mpActionRedo->setToolTip(QCoreApplication::translate("MainWindow", "Redo", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        mpActionRedo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Y", nullptr));
#endif // QT_CONFIG(shortcut)
        mpActionDisableAll->setText(QCoreApplication::translate("MainWindow", "Disable All", nullptr));
#if QT_CONFIG(tooltip)
        mpActionDisableAll->setToolTip(QCoreApplication::translate("MainWindow", "Disable All Nodes", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        mpActionDisableAll->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+D", nullptr));
#endif // QT_CONFIG(shortcut)
        mpActionEnableAll->setText(QCoreApplication::translate("MainWindow", "Enable All", nullptr));
#if QT_CONFIG(tooltip)
        mpActionEnableAll->setToolTip(QCoreApplication::translate("MainWindow", "Enable All Nodes", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        mpActionEnableAll->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+G", nullptr));
#endif // QT_CONFIG(shortcut)
        mpActionSnapToGrid->setText(QCoreApplication::translate("MainWindow", "Snap to Grid", nullptr));
        mpActionLoadPlugin->setText(QCoreApplication::translate("MainWindow", "Load Plugin", nullptr));
#if QT_CONFIG(tooltip)
        mpActionLoadPlugin->setToolTip(QCoreApplication::translate("MainWindow", "Load Plugin File", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        mpActionLoadPlugin->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+L", nullptr));
#endif // QT_CONFIG(shortcut)
        mpActionFocusView->setText(QCoreApplication::translate("MainWindow", "Focus View", nullptr));
#if QT_CONFIG(tooltip)
        mpActionFocusView->setToolTip(QCoreApplication::translate("MainWindow", "Focus View", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        mpActionFocusView->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+W", nullptr));
#endif // QT_CONFIG(shortcut)
        mpActionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        mpActionFullScreen->setText(QCoreApplication::translate("MainWindow", "Full Screen", nullptr));
#if QT_CONFIG(shortcut)
        mpActionFullScreen->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        mpMenuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        mpMenuView->setTitle(QCoreApplication::translate("MainWindow", "View", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuControl->setTitle(QCoreApplication::translate("MainWindow", "Control", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
        mpAvailableNodeCategoryDockWidget->setWindowTitle(QCoreApplication::translate("MainWindow", "Node Category", nullptr));
        mpNodeListDockWidget->setWindowTitle(QCoreApplication::translate("MainWindow", "Workspace", nullptr));
        mpPropertyBrowserDockWidget->setWindowTitle(QCoreApplication::translate("MainWindow", "Properties", nullptr));
        mpToolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
