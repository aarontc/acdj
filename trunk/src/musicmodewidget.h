#ifndef MUSICMODEWIDGET_H
#define MUSICMODEWIDGET_H

#include <QWidget>
#include <QList>
#include "songfile.h"
#include <Phonon/MediaObject>

class PlaylistModel;
class QModelIndex;
class QTableView;

class MusicModeWidget : public QWidget
{
Q_OBJECT
public:
	MusicModeWidget(QWidget *parent = 0);

	void AddSong(const QString & file);

private slots:
	void TableDClicked(const QModelIndex & index);
	void BackSlot();
	void CommandSlot();
	void NextSlot();
	void NewMetaData(Phonon::State newState, Phonon::State);

private:
	//ctor functions
	void SetUpTableView(QTableView * mediaTable);
	void SetUpActions();

	PlaylistModel * m_playlistModel;
	QList<SongFile> m_playlist;
	Phonon::MediaObject * m_player;
	Phonon::MediaObject * m_metaDataGenerator;

	//Toolbar Actions for
	QAction * backAction;
	QAction * commandAction;
	QAction * nextAction;
};

#endif // MUSICMODEWIDGET_H
