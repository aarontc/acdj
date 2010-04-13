/********************************************************************************
** Form generated from reading ui file 'mainwindow.ui'
**
** Created: Sun Nov 15 21:19:32 2009
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout;
    QAction *actionSleep_Timer;
    QAction *actionAlarm_Clock;
    QAction *actionProgram_Settings;
    QAction *actionLibrary_Folders;
    QAction *actionArtist;
    QAction *actionAlbum;
    QAction *actionSong;
    QAction *actionNot_Recently_Played;
    QAction *actionHighest_Rated;
    QAction *actionAlbum_2;
    QAction *actionArtist_2;
    QAction *actionSong_2;
    QAction *actionClear_Playlist;
    QAction *actionSave_Playlist;
    QAction *actionSave_Playlist_As;
    QAction *actionRandomize_Playlist;
    QAction *actionGet_Data;
    QAction *actionManually_Sync_Databases;
    QAction *actionConfigure_ACDJ;
    QAction *actionConfigure;
    QAction *actionEnable;
    QAction *actionDisable;
    QAction *actionUpdate_Libraries;
    QAction *actionHelp_Files;
    QAction *actionTutorials;
    QAction *actionSkip_Forward;
    QAction *actionSkip_Backwards;
    QAction *actionPlay_Pause;
    QAction *actionStop;
    QAction *actionOpen_File_Disk;
    QAction *actionExit_Program;
    QAction *actionMinimize_to_System_Tray;
    QAction *actionFind_Album_Art_Data;
    QAction *actionRip_A_Disk;
    QAction *actionBitch_About_Problems;
    QAction *actionConstructive_Feedback;
    QAction *actionFeature_Ideas;
    QAction *actionEdit_Track_Settings;
    QAction *actionContact_Us;
    QWidget *centralWidget;
    QTreeWidget *trePlayList;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuHelp;
    QMenu *menuPlaylist;
    QMenu *menuRandom;
    QMenu *menuBiasing;
    QMenu *menuRepeat;
    QMenu *menuSettings;
    QMenu *menuAuto_Gain;
    QMenu *menuOptions;
    QMenu *menuActions;
    QMenu *menuManagement;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(615, 587);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionSleep_Timer = new QAction(MainWindow);
        actionSleep_Timer->setObjectName(QString::fromUtf8("actionSleep_Timer"));
        actionSleep_Timer->setCheckable(true);
        actionAlarm_Clock = new QAction(MainWindow);
        actionAlarm_Clock->setObjectName(QString::fromUtf8("actionAlarm_Clock"));
        actionAlarm_Clock->setCheckable(true);
        actionProgram_Settings = new QAction(MainWindow);
        actionProgram_Settings->setObjectName(QString::fromUtf8("actionProgram_Settings"));
        actionLibrary_Folders = new QAction(MainWindow);
        actionLibrary_Folders->setObjectName(QString::fromUtf8("actionLibrary_Folders"));
        actionArtist = new QAction(MainWindow);
        actionArtist->setObjectName(QString::fromUtf8("actionArtist"));
        actionArtist->setCheckable(true);
        actionAlbum = new QAction(MainWindow);
        actionAlbum->setObjectName(QString::fromUtf8("actionAlbum"));
        actionAlbum->setCheckable(true);
        actionSong = new QAction(MainWindow);
        actionSong->setObjectName(QString::fromUtf8("actionSong"));
        actionSong->setCheckable(true);
        actionNot_Recently_Played = new QAction(MainWindow);
        actionNot_Recently_Played->setObjectName(QString::fromUtf8("actionNot_Recently_Played"));
        actionNot_Recently_Played->setCheckable(true);
        actionHighest_Rated = new QAction(MainWindow);
        actionHighest_Rated->setObjectName(QString::fromUtf8("actionHighest_Rated"));
        actionHighest_Rated->setCheckable(true);
        actionAlbum_2 = new QAction(MainWindow);
        actionAlbum_2->setObjectName(QString::fromUtf8("actionAlbum_2"));
        actionAlbum_2->setCheckable(true);
        actionArtist_2 = new QAction(MainWindow);
        actionArtist_2->setObjectName(QString::fromUtf8("actionArtist_2"));
        actionArtist_2->setCheckable(true);
        actionSong_2 = new QAction(MainWindow);
        actionSong_2->setObjectName(QString::fromUtf8("actionSong_2"));
        actionSong_2->setCheckable(true);
        actionClear_Playlist = new QAction(MainWindow);
        actionClear_Playlist->setObjectName(QString::fromUtf8("actionClear_Playlist"));
        actionSave_Playlist = new QAction(MainWindow);
        actionSave_Playlist->setObjectName(QString::fromUtf8("actionSave_Playlist"));
        actionSave_Playlist_As = new QAction(MainWindow);
        actionSave_Playlist_As->setObjectName(QString::fromUtf8("actionSave_Playlist_As"));
        actionRandomize_Playlist = new QAction(MainWindow);
        actionRandomize_Playlist->setObjectName(QString::fromUtf8("actionRandomize_Playlist"));
        actionGet_Data = new QAction(MainWindow);
        actionGet_Data->setObjectName(QString::fromUtf8("actionGet_Data"));
        actionManually_Sync_Databases = new QAction(MainWindow);
        actionManually_Sync_Databases->setObjectName(QString::fromUtf8("actionManually_Sync_Databases"));
        actionConfigure_ACDJ = new QAction(MainWindow);
        actionConfigure_ACDJ->setObjectName(QString::fromUtf8("actionConfigure_ACDJ"));
        actionConfigure = new QAction(MainWindow);
        actionConfigure->setObjectName(QString::fromUtf8("actionConfigure"));
        actionEnable = new QAction(MainWindow);
        actionEnable->setObjectName(QString::fromUtf8("actionEnable"));
        actionEnable->setCheckable(true);
        actionDisable = new QAction(MainWindow);
        actionDisable->setObjectName(QString::fromUtf8("actionDisable"));
        actionDisable->setCheckable(true);
        actionUpdate_Libraries = new QAction(MainWindow);
        actionUpdate_Libraries->setObjectName(QString::fromUtf8("actionUpdate_Libraries"));
        actionHelp_Files = new QAction(MainWindow);
        actionHelp_Files->setObjectName(QString::fromUtf8("actionHelp_Files"));
        actionTutorials = new QAction(MainWindow);
        actionTutorials->setObjectName(QString::fromUtf8("actionTutorials"));
        actionSkip_Forward = new QAction(MainWindow);
        actionSkip_Forward->setObjectName(QString::fromUtf8("actionSkip_Forward"));
        actionSkip_Forward->setCheckable(false);
        actionSkip_Backwards = new QAction(MainWindow);
        actionSkip_Backwards->setObjectName(QString::fromUtf8("actionSkip_Backwards"));
        actionPlay_Pause = new QAction(MainWindow);
        actionPlay_Pause->setObjectName(QString::fromUtf8("actionPlay_Pause"));
        actionStop = new QAction(MainWindow);
        actionStop->setObjectName(QString::fromUtf8("actionStop"));
        actionOpen_File_Disk = new QAction(MainWindow);
        actionOpen_File_Disk->setObjectName(QString::fromUtf8("actionOpen_File_Disk"));
        actionExit_Program = new QAction(MainWindow);
        actionExit_Program->setObjectName(QString::fromUtf8("actionExit_Program"));
        actionMinimize_to_System_Tray = new QAction(MainWindow);
        actionMinimize_to_System_Tray->setObjectName(QString::fromUtf8("actionMinimize_to_System_Tray"));
        actionFind_Album_Art_Data = new QAction(MainWindow);
        actionFind_Album_Art_Data->setObjectName(QString::fromUtf8("actionFind_Album_Art_Data"));
        actionRip_A_Disk = new QAction(MainWindow);
        actionRip_A_Disk->setObjectName(QString::fromUtf8("actionRip_A_Disk"));
        actionBitch_About_Problems = new QAction(MainWindow);
        actionBitch_About_Problems->setObjectName(QString::fromUtf8("actionBitch_About_Problems"));
        actionConstructive_Feedback = new QAction(MainWindow);
        actionConstructive_Feedback->setObjectName(QString::fromUtf8("actionConstructive_Feedback"));
        actionFeature_Ideas = new QAction(MainWindow);
        actionFeature_Ideas->setObjectName(QString::fromUtf8("actionFeature_Ideas"));
        actionEdit_Track_Settings = new QAction(MainWindow);
        actionEdit_Track_Settings->setObjectName(QString::fromUtf8("actionEdit_Track_Settings"));
        actionContact_Us = new QAction(MainWindow);
        actionContact_Us->setObjectName(QString::fromUtf8("actionContact_Us"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        trePlayList = new QTreeWidget(centralWidget);
        new QTreeWidgetItem(trePlayList);
        trePlayList->setObjectName(QString::fromUtf8("trePlayList"));
        trePlayList->setGeometry(QRect(150, 0, 431, 511));
        trePlayList->setAlternatingRowColors(true);
        trePlayList->setSortingEnabled(true);
        trePlayList->setAnimated(true);
        trePlayList->setColumnCount(2);
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 615, 27));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuPlaylist = new QMenu(menuBar);
        menuPlaylist->setObjectName(QString::fromUtf8("menuPlaylist"));
        menuRandom = new QMenu(menuPlaylist);
        menuRandom->setObjectName(QString::fromUtf8("menuRandom"));
        menuBiasing = new QMenu(menuRandom);
        menuBiasing->setObjectName(QString::fromUtf8("menuBiasing"));
        menuRepeat = new QMenu(menuPlaylist);
        menuRepeat->setObjectName(QString::fromUtf8("menuRepeat"));
        menuSettings = new QMenu(menuBar);
        menuSettings->setObjectName(QString::fromUtf8("menuSettings"));
        menuAuto_Gain = new QMenu(menuSettings);
        menuAuto_Gain->setObjectName(QString::fromUtf8("menuAuto_Gain"));
        menuOptions = new QMenu(menuBar);
        menuOptions->setObjectName(QString::fromUtf8("menuOptions"));
        menuActions = new QMenu(menuBar);
        menuActions->setObjectName(QString::fromUtf8("menuActions"));
        menuManagement = new QMenu(menuBar);
        menuManagement->setObjectName(QString::fromUtf8("menuManagement"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuActions->menuAction());
        menuBar->addAction(menuPlaylist->menuAction());
        menuBar->addAction(menuManagement->menuAction());
        menuBar->addAction(menuSettings->menuAction());
        menuBar->addAction(menuOptions->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionHelp_Files);
        menuHelp->addAction(actionTutorials);
        menuHelp->addSeparator();
        menuHelp->addAction(actionContact_Us);
        menuPlaylist->addAction(actionRandomize_Playlist);
        menuPlaylist->addAction(actionClear_Playlist);
        menuPlaylist->addAction(actionSave_Playlist);
        menuPlaylist->addAction(actionSave_Playlist_As);
        menuPlaylist->addSeparator();
        menuPlaylist->addAction(menuRepeat->menuAction());
        menuPlaylist->addAction(menuRandom->menuAction());
        menuRandom->addAction(actionArtist);
        menuRandom->addAction(actionAlbum);
        menuRandom->addAction(actionSong);
        menuRandom->addAction(menuBiasing->menuAction());
        menuBiasing->addAction(actionNot_Recently_Played);
        menuBiasing->addAction(actionHighest_Rated);
        menuRepeat->addAction(actionAlbum_2);
        menuRepeat->addAction(actionArtist_2);
        menuRepeat->addAction(actionSong_2);
        menuSettings->addAction(menuAuto_Gain->menuAction());
        menuSettings->addAction(actionConfigure_ACDJ);
        menuAuto_Gain->addAction(actionEnable);
        menuAuto_Gain->addAction(actionDisable);
        menuAuto_Gain->addSeparator();
        menuAuto_Gain->addAction(actionConfigure);
        menuOptions->addAction(actionSleep_Timer);
        menuOptions->addAction(actionAlarm_Clock);
        menuActions->addAction(actionSkip_Forward);
        menuActions->addAction(actionSkip_Backwards);
        menuActions->addAction(actionPlay_Pause);
        menuActions->addAction(actionStop);
        menuActions->addSeparator();
        menuActions->addAction(actionOpen_File_Disk);
        menuActions->addAction(actionMinimize_to_System_Tray);
        menuActions->addAction(actionExit_Program);
        menuManagement->addAction(actionGet_Data);
        menuManagement->addAction(actionEdit_Track_Settings);
        menuManagement->addSeparator();
        menuManagement->addAction(actionUpdate_Libraries);
        menuManagement->addAction(actionLibrary_Folders);
        menuManagement->addSeparator();
        menuManagement->addAction(actionRip_A_Disk);
        menuManagement->addAction(actionFind_Album_Art_Data);
        menuManagement->addSeparator();
        menuManagement->addAction(actionManually_Sync_Databases);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "AC DJ", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0, QApplication::UnicodeUTF8));
        actionSleep_Timer->setText(QApplication::translate("MainWindow", "Sleep Timer", 0, QApplication::UnicodeUTF8));
        actionAlarm_Clock->setText(QApplication::translate("MainWindow", "Alarm Clock", 0, QApplication::UnicodeUTF8));
        actionProgram_Settings->setText(QApplication::translate("MainWindow", "Program Settings", 0, QApplication::UnicodeUTF8));
        actionLibrary_Folders->setText(QApplication::translate("MainWindow", "Library Folders", 0, QApplication::UnicodeUTF8));
        actionArtist->setText(QApplication::translate("MainWindow", "Artist", 0, QApplication::UnicodeUTF8));
        actionAlbum->setText(QApplication::translate("MainWindow", "Album", 0, QApplication::UnicodeUTF8));
        actionSong->setText(QApplication::translate("MainWindow", "Song", 0, QApplication::UnicodeUTF8));
        actionNot_Recently_Played->setText(QApplication::translate("MainWindow", "Not Recently Played", 0, QApplication::UnicodeUTF8));
        actionHighest_Rated->setText(QApplication::translate("MainWindow", "Highest Rated", 0, QApplication::UnicodeUTF8));
        actionAlbum_2->setText(QApplication::translate("MainWindow", "Album", 0, QApplication::UnicodeUTF8));
        actionArtist_2->setText(QApplication::translate("MainWindow", "Artist", 0, QApplication::UnicodeUTF8));
        actionSong_2->setText(QApplication::translate("MainWindow", "Song", 0, QApplication::UnicodeUTF8));
        actionClear_Playlist->setText(QApplication::translate("MainWindow", "Clear Playlist", 0, QApplication::UnicodeUTF8));
        actionSave_Playlist->setText(QApplication::translate("MainWindow", "Save Playlist", 0, QApplication::UnicodeUTF8));
        actionSave_Playlist_As->setText(QApplication::translate("MainWindow", "Save Playlist As...", 0, QApplication::UnicodeUTF8));
        actionRandomize_Playlist->setText(QApplication::translate("MainWindow", "Randomize Playlist", 0, QApplication::UnicodeUTF8));
        actionGet_Data->setText(QApplication::translate("MainWindow", "Get Data For Selected Track", 0, QApplication::UnicodeUTF8));
        actionManually_Sync_Databases->setText(QApplication::translate("MainWindow", "Manually Sync Database", 0, QApplication::UnicodeUTF8));
        actionConfigure_ACDJ->setText(QApplication::translate("MainWindow", "Configure ACDJ", 0, QApplication::UnicodeUTF8));
        actionConfigure->setText(QApplication::translate("MainWindow", "Configure", 0, QApplication::UnicodeUTF8));
        actionEnable->setText(QApplication::translate("MainWindow", "Enable", 0, QApplication::UnicodeUTF8));
        actionDisable->setText(QApplication::translate("MainWindow", "Disable", 0, QApplication::UnicodeUTF8));
        actionUpdate_Libraries->setText(QApplication::translate("MainWindow", "Update Libraries", 0, QApplication::UnicodeUTF8));
        actionHelp_Files->setText(QApplication::translate("MainWindow", "Help Files", 0, QApplication::UnicodeUTF8));
        actionTutorials->setText(QApplication::translate("MainWindow", "Tutorials", 0, QApplication::UnicodeUTF8));
        actionSkip_Forward->setText(QApplication::translate("MainWindow", "Skip Forward", 0, QApplication::UnicodeUTF8));
        actionSkip_Backwards->setText(QApplication::translate("MainWindow", "Skip Backwards", 0, QApplication::UnicodeUTF8));
        actionPlay_Pause->setText(QApplication::translate("MainWindow", "Play/Pause", 0, QApplication::UnicodeUTF8));
        actionStop->setText(QApplication::translate("MainWindow", "Stop", 0, QApplication::UnicodeUTF8));
        actionOpen_File_Disk->setText(QApplication::translate("MainWindow", "Open File/Disk", 0, QApplication::UnicodeUTF8));
        actionExit_Program->setText(QApplication::translate("MainWindow", "Exit ACDJ", 0, QApplication::UnicodeUTF8));
        actionMinimize_to_System_Tray->setText(QApplication::translate("MainWindow", "Minimize to System Tray", 0, QApplication::UnicodeUTF8));
        actionFind_Album_Art_Data->setText(QApplication::translate("MainWindow", "Find Album Art and Data", 0, QApplication::UnicodeUTF8));
        actionRip_A_Disk->setText(QApplication::translate("MainWindow", "Rip A Disk", 0, QApplication::UnicodeUTF8));
        actionBitch_About_Problems->setText(QApplication::translate("MainWindow", "Bitch About Problems", 0, QApplication::UnicodeUTF8));
        actionConstructive_Feedback->setText(QApplication::translate("MainWindow", "Constructive Feedback", 0, QApplication::UnicodeUTF8));
        actionFeature_Ideas->setText(QApplication::translate("MainWindow", "Ideas For Additional Features", 0, QApplication::UnicodeUTF8));
        actionEdit_Track_Settings->setText(QApplication::translate("MainWindow", "Edit Track Settings", 0, QApplication::UnicodeUTF8));
        actionContact_Us->setText(QApplication::translate("MainWindow", "Contact Us", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = trePlayList->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("MainWindow", "Title", "The name of the given track", QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "Artist", "The artist for the given track", QApplication::UnicodeUTF8));

        const bool __sortingEnabled = trePlayList->isSortingEnabled();
        trePlayList->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = trePlayList->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("MainWindow", "New Item", 0, QApplication::UnicodeUTF8));
        trePlayList->setSortingEnabled(__sortingEnabled);

        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
        menuPlaylist->setTitle(QApplication::translate("MainWindow", "Playlist", 0, QApplication::UnicodeUTF8));
        menuRandom->setTitle(QApplication::translate("MainWindow", "Random", 0, QApplication::UnicodeUTF8));
        menuBiasing->setTitle(QApplication::translate("MainWindow", "Biasing", 0, QApplication::UnicodeUTF8));
        menuRepeat->setTitle(QApplication::translate("MainWindow", "Repeat", 0, QApplication::UnicodeUTF8));
        menuSettings->setTitle(QApplication::translate("MainWindow", "Settings", 0, QApplication::UnicodeUTF8));
        menuAuto_Gain->setTitle(QApplication::translate("MainWindow", "Auto Gain", 0, QApplication::UnicodeUTF8));
        menuOptions->setTitle(QApplication::translate("MainWindow", "Options", 0, QApplication::UnicodeUTF8));
        menuActions->setTitle(QApplication::translate("MainWindow", "Actions", 0, QApplication::UnicodeUTF8));
        menuManagement->setTitle(QApplication::translate("MainWindow", "Management", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
