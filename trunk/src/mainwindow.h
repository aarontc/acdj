#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGridLayout>

class QWidget;
class ControlWidget;

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = 0);
	~MainWindow();


	//new code

private:
	ControlWidget * controls;
	QGridLayout * layout;

//protected:
//	void closeEvent(QCloseEvent *event);


//private:
//	void createActions ();
//	void createTrayIcon ();
//
//	Ui::MainWindow *ui;
//	QSystemTrayIcon * stiTrayIcon;
//
//	QAction * acnMinimize;
//	QAction * acnMaximize;
//	QAction * acnRestore;
//	QAction * acnQuit;
//	QMenu * mnuTray;
//
//
//private slots:
//	void on_actionOpen_File_Disk_triggered();
// void on_actionExit_Program_triggered();
//	void on_actionAbout_triggered();
};

#endif // MAINWINDOW_H
