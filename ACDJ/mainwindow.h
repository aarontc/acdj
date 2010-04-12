#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>
#include <QtGui/QIcon>
#include <QtGui/QSystemTrayIcon>
#include <QCloseEvent>
#include <QMessageBox>

namespace Ui
{
	class MainWindow;
}

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = 0);
	~MainWindow();

protected:
	void closeEvent(QCloseEvent *event);


private:
	void createActions ();
	void createTrayIcon ();

	Ui::MainWindow *ui;
	QSystemTrayIcon * stiTrayIcon;

	QAction * acnMinimize;
	QAction * acnMaximize;
	QAction * acnRestore;
	QAction * acnQuit;
	QMenu * mnuTray;


private slots:
	void on_actionOpen_File_Disk_triggered();
 void on_actionExit_Program_triggered();
	void on_actionAbout_triggered();
};

#endif // MAINWINDOW_H
