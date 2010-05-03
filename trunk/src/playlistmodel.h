#ifndef PLAYLISTMODEL_H
#define PLAYLISTMODEL_H

#include <QAbstractTableModel>
#include <QStringList>
#include <QList>
#include "songfile.h"

class PlaylistModel : public QAbstractTableModel
{
	Q_OBJECT
public:
	PlaylistModel(QObject * parent = 0);

	virtual int rowCount(const QModelIndex & parent = QModelIndex()) const;
	virtual int columnCount(const QModelIndex &parent = QModelIndex()) const;
	virtual QVariant data(const QModelIndex &index, int role) const;
	virtual QVariant headerData(int section, Qt::Orientation orientation,
								int role = Qt::DisplayRole) const;
	virtual void sort(int column, Qt::SortOrder order = Qt::AscendingOrder );
	//playlist sorts
	static bool compare_title_as(const SongFile &s1, const SongFile &s2);
	static bool compare_title_de(const SongFile &s1, const SongFile &s2);
	static bool compare_artist_as(const SongFile &s1, const SongFile &s2);
	static bool compare_artist_de(const SongFile &s1, const SongFile &s2);
	static bool compare_album_as(const SongFile &s1, const SongFile &s2);
	static bool compare_album_de(const SongFile &s1, const SongFile &s2);

private:
	QStringList m_headers;
	QList<SongFile> m_playlist;
};

#endif // PLAYLISTMODEL_H
