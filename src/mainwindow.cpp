#include "controlwidget.h"
#include "mainwindow.h"

#include <QtGui>

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
{
	controls = new ControlWidget(this);
	layout = new QGridLayout(this);
	layout->addWidget(controls, 0, 0, Qt::AlignLeft);

//	createActions ();
//	createTrayIcon ();
//
//	setWindowIcon(QIcon(":/images/resources/eyeball.svg"));
//
//	connect ( this, SIGNAL(destroyed()), this, SLOT(showMaximized()));
}

MainWindow::~MainWindow() {
	//delete ui;
}

//void MainWindow::on_actionAbout_triggered() {
//	printf ( "testing\n" );
//}
//
//
//void MainWindow::createActions() {
//	acnMinimize = new QAction(tr("Mi&nimize"), this);
//	connect ( acnMinimize, SIGNAL(triggered()), this, SLOT(hide()));
//
//	acnMaximize = new QAction(tr("Ma&ximize"), this);
//	connect ( acnMaximize, SIGNAL(triggered()), this, SLOT(showMaximized()));
//
//	acnRestore = new QAction(tr("&Restore"), this);
//	connect ( acnRestore, SIGNAL(triggered()), this, SLOT(showNormal()));
//
//	acnQuit = new QAction(tr("&Quit"), this);
//	connect ( acnQuit, SIGNAL(triggered()), qApp, SLOT(quit()));
//}
//
//void MainWindow::createTrayIcon () {
//	mnuTray = new QMenu(this);
//	mnuTray -> addAction ( acnMinimize );
//	mnuTray -> addAction ( acnMaximize );
//	mnuTray -> addAction ( acnRestore );
//	mnuTray -> addSeparator ();
//	mnuTray -> addAction ( acnQuit );
//
//
//	stiTrayIcon = new QSystemTrayIcon();
//	stiTrayIcon -> setContextMenu ( mnuTray );
//	stiTrayIcon ->setIcon(QIcon(":/images/resources/eyeball.svg"));
//	stiTrayIcon -> setVisible(true);
//}
//
//void MainWindow::on_actionExit_Program_triggered()
//{
//	acnQuit->trigger();
//}
//
// void MainWindow::closeEvent(QCloseEvent *event)
// {
//
//	   QMessageBox::StandardButton ret;
//		 ret = QMessageBox::warning(this, tr("Application"),
//					  tr("Stay in tray? In the future this will be saved."),
//					  QMessageBox::Yes | QMessageBox::No);
//		 if (ret == QMessageBox::Yes) {
//			 hide();
//			 event->ignore();
//		 } else {
//			 event->accept();
//		 }
// }
//
//void MainWindow::on_actionOpen_File_Disk_triggered() {
//	QFileDialog::Options options;
//	QString selectedFilter;
//	QString fileName = QFileDialog::getOpenFileName(this,
//								tr("Open File"),
//								tr(""),
//								tr("FLAC [Free Lossless Audio Compression] (*.flac);;All Files (*)"),
//								&selectedFilter,
//								options);
//	if (!fileName.isEmpty())
//		printf("%s", fileName.toAscii());
//}
