#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class MusicModeWidget;
class QAction;
class QString;

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = 0);

private slots:
	void AddFile();

private:
	void CreateActions();
	void CreateMenu();

	//Central Widget
	MusicModeWidget * musicMode;

	//File Menu Actions
	QAction * addFileAct;
	QAction * exitAct;
};

#endif // MAINWINDOW_H
