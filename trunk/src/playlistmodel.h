#ifndef PLAYLISTMODEL_H
#define PLAYLISTMODEL_H

#include <QAbstractTableModel>
#include <QStringList>

class SongFile;
template <typename T>
class QList;

class PlaylistModel : public QAbstractTableModel
{
	Q_OBJECT
public:
	//no default constructor because it would break the model
	PlaylistModel(QList<SongFile> * playlist, QObject * parent = 0);

	//overloaded functions for the Abstract table model
	virtual int rowCount(const QModelIndex & parent = QModelIndex()) const;
	virtual int columnCount(const QModelIndex &parent = QModelIndex()) const;
	virtual QVariant data(const QModelIndex &index, int role) const;
	virtual QVariant headerData(int section, Qt::Orientation orientation,
								int role = Qt::DisplayRole) const;
	void AddSong(const SongFile & aCopy);


	//sort functions
	virtual void sort(int column, Qt::SortOrder order = Qt::AscendingOrder );
	//playlist sorts for ascending and descending
	static bool compare_title_as(const SongFile &s1, const SongFile &s2);
	static bool compare_title_de(const SongFile &s1, const SongFile &s2);
	static bool compare_artist_as(const SongFile &s1, const SongFile &s2);
	static bool compare_artist_de(const SongFile &s1, const SongFile &s2);
	static bool compare_album_as(const SongFile &s1, const SongFile &s2);
	static bool compare_album_de(const SongFile &s1, const SongFile &s2);

private:
	QStringList m_headers;
	QList<SongFile> * m_playlist;
	int m_columnSorted;
	int m_as_de;
};

#endif // PLAYLISTMODEL_H
