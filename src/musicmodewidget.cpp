#include "musicmodewidget.h"
#include <QtGui>
#include "playlistmodel.h"
#include <Phonon/MediaSource>

MusicModeWidget::MusicModeWidget(QWidget *parent) :
    QWidget(parent)
{
	//Setup Player Object
	m_player = Phonon::createPlayer(Phonon::MusicCategory);
	m_player->setParent(this);

	//Setup Meta info generator
	m_metaDataGenerator = new Phonon::MediaObject(this);
	connect(m_metaDataGenerator, SIGNAL(stateChanged(Phonon::State,Phonon::State)),
			this, SLOT(NewMetaData(Phonon::State,Phonon::State)));

	//Setup Toolbar
	SetUpActions();

	QToolBar *toolbar = new QToolBar;
	toolbar->addAction(backAction);
	toolbar->addAction(commandAction);
	toolbar->addAction(nextAction);

	//Setup Table
	QTableView *mediaTable = new QTableView;
	SetUpTableView(mediaTable);

	QVBoxLayout *grid = new QVBoxLayout;
	grid->addWidget(toolbar);
	grid->addWidget(mediaTable);
	setLayout(grid);
}

void MusicModeWidget::AddSong(const QString &file)
{
	m_metaDataGenerator->setCurrentSource(Phonon::MediaSource(file));

//	if(m_player->state() == Phonon::PlayingState)
//	{
//		m_player->setCurrentSource(Phonon::MediaSource(file));
//		m_player->play();
//	}
//	else
//	{
//		m_player->stop();
//		m_player->setCurrentSource(Phonon::MediaSource(file));
//		m_player->play();
//	}
//
//	SongFile tmp(m_player->metaData("TITLE").first(),
//				 m_player->metaData("ARTIST").first(),
//				 m_player->metaData("ALBUM").first(),
//				 file);
//	m_playlist.append(tmp);
//	m_playlistModel->sort(0, Qt::AscendingOrder);
}

void MusicModeWidget::TableDClicked(const QModelIndex & index)
{
	QList<SongFile>::Iterator iter(m_playlist.begin() + index.row());
	QMessageBox msg;
	QString text(tr("The Title is %1, ").arg(iter->GetTitle()));

	msg.setText(text);
	msg.setStandardButtons(QMessageBox::Ok);
	msg.setDefaultButton(QMessageBox::Ok);
	msg.exec();
}

void MusicModeWidget::BackSlot()
{
	QMessageBox msg;

	msg.setText(tr("This will implement a back function"));
	msg.setStandardButtons(QMessageBox::Ok);
	msg.setDefaultButton(QMessageBox::Ok);
	msg.exec();
}

void MusicModeWidget::CommandSlot()
{
	static bool play = true;
	QMessageBox msg;

	if(play)
	{
		play = false;
		msg.setText(tr("This will implement play"));
		commandAction->setIcon(style()->standardIcon(QStyle::SP_MediaPause));
	}
	else
	{
		play = true;
		msg.setText(tr("This will implement pause"));
		commandAction->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
	}

	msg.setStandardButtons(QMessageBox::Ok);
	msg.setDefaultButton(QMessageBox::Ok);
	msg.exec();
}

void MusicModeWidget::NextSlot()
{
	QMessageBox msg;

	msg.setText(tr("This will implement a next function"));
	msg.setStandardButtons(QMessageBox::Ok);
	msg.setDefaultButton(QMessageBox::Ok);
	msg.exec();
}

void MusicModeWidget::NewMetaData(Phonon::State newState, Phonon::State)
{
	//Check if there was error reading the file
	if(newState == Phonon::ErrorState)
	{
		QMessageBox::warning(this, tr("Error Opening File"),
							 m_metaDataGenerator->errorString());
		return;
	}

	//valid states for the metaObject
	else if(newState != Phonon::StoppedState && newState != Phonon::PausedState)
		return;

	//check if the media source has a valid type
	else if(m_metaDataGenerator->currentSource().type() == Phonon::MediaSource::Invalid)
		return;

	//now we can deal with the meta data without worries
	QMap<QString, QString> metadata = m_metaDataGenerator->metaData();
	SongFile tmp(metadata.value(tr("TITLE")),
				 metadata.value(tr("ARTIST")),
				 metadata.value(tr("ALBUM")),
				 m_metaDataGenerator->currentSource().fileName());
	m_metaDataGenerator->clearQueue();
	m_playlistModel->AddSong(tmp);
}

void MusicModeWidget::SetUpTableView(QTableView * mediaTable)
{
	m_playlistModel = new PlaylistModel(&m_playlist);

	mediaTable->setModel(m_playlistModel);
	mediaTable->setSortingEnabled(true);

	//selects one row at a time
	mediaTable->setSelectionBehavior(QAbstractItemView::SelectRows);
	//sets how things are selected from the table
	mediaTable->setSelectionMode(QAbstractItemView::SingleSelection);
	//hide the verticle headers that aren't being used
	mediaTable->verticalHeader()->hide();

	//when table is double clicked a function should be called
	connect(mediaTable, SIGNAL(doubleClicked(QModelIndex)), this, SLOT(TableDClicked(QModelIndex)));
}

void MusicModeWidget::SetUpActions()
{
	//setup back action
	backAction = new QAction(style()->standardIcon(QStyle::SP_MediaSkipBackward),
				  QString("back"), this);
	backAction->setShortcut(QString("Crl+b"));

	//setup command action
	commandAction = new QAction(style()->standardIcon(QStyle::SP_MediaPlay),
								QString("play"), this);
	commandAction->setShortcut(QString("Crl+P"));

	//setup forward action
	nextAction = new QAction(style()->standardIcon(QStyle::SP_MediaSkipForward),
								QString("forward"), this);
	nextAction->setShortcut(QString("Crl+F"));

	//setup signals and slots
	connect(backAction, SIGNAL(triggered()), this, SLOT(BackSlot()));
	connect(commandAction, SIGNAL(triggered()), this, SLOT(CommandSlot()));
	connect(nextAction, SIGNAL(triggered()), this, SLOT(NextSlot()));
}
