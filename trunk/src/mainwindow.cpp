#include "mainwindow.h"
#include "musicmodewidget.h"

#include <QtGui>

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
{
	musicMode = new MusicModeWidget;
	setCentralWidget(musicMode);

	CreateActions();
	CreateMenu();
}

void MainWindow::AddFile()
{
	QStringList files = QFileDialog::getOpenFileNames(this, QString("Select Music Files"),
						QDesktopServices::storageLocation(QDesktopServices::MusicLocation));

	if(!files.isEmpty())
	{
//		Phonon::MediaObject *music =
//				Phonon::createPlayer(Phonon::MusicCategory,
//									 Phonon::MediaSource(files.at(0)));
//		music->play();

		musicMode->AddSong(files.first());

	}
}


void MainWindow::CreateActions()
{
	addFileAct = new QAction(QString("Add &File to Playlist"), this);

	exitAct = new QAction(QString("E&xit"), this);
}

void MainWindow::CreateMenu()
{
	QMenu * fileMenu = menuBar()->addMenu(QString("&File"));
	fileMenu->addAction(addFileAct);
	fileMenu->addAction(exitAct);

	connect(addFileAct, SIGNAL(triggered()), this, SLOT(AddFile()));
	connect(exitAct, SIGNAL(triggered()), this, SLOT(close()) );
}
