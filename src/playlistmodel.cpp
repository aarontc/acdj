#include "playlistmodel.h"
#include "songfile.h"
#include <QList>
#include <QStringList>
#include <QtAlgorithms>

PlaylistModel::PlaylistModel(QList<SongFile> * playlist, QObject * parent)
	:QAbstractTableModel(parent), m_playlist(playlist), m_columnSorted(0),
	 m_as_de(Qt::AscendingOrder)
{
	m_headers << tr("Title") << tr("Artist") << tr("Album");

	SongFile file(tr("Waling with a ghost"), tr("The White Stripes"),
				  tr("Waling with a ghost"), tr("Hi"));

	m_playlist->append(file);

	file.SetTitle(tr("Automatic Stop"));
	file.SetArtist(tr("The Strokes"));
	file.SetAlbum(tr("Room on Fire"));
	m_playlist->append(file);
}

int PlaylistModel::rowCount(const QModelIndex & parent) const
{
	return m_playlist->count();
}

int PlaylistModel::columnCount(const QModelIndex &parent) const
{
	return 3;
}

QVariant PlaylistModel::data(const QModelIndex &index, int role) const
{
	if(!index.isValid())
		return QVariant();

	if(index.row() >= m_playlist->count() || index.column() >= 3)
		return QVariant();

	if(role == Qt::DisplayRole)
	{
		QStringList stringList = m_playlist->at(index.row()).GetStringList();
		return stringList.at(index.column());
	}
	else
		return QVariant();
}

QVariant PlaylistModel::headerData(int section, Qt::Orientation orientation,
							int role) const
{
	if(role != Qt::DisplayRole)
		return QVariant();

	if(orientation == Qt::Horizontal)
		return m_headers[section];
	else
		return QVariant();
}

void PlaylistModel::AddSong(const SongFile & aCopy)
{
	beginInsertRows(QModelIndex(), 0, 0);
	m_playlist->prepend(aCopy);
	endInsertRows();
	sort(m_columnSorted, static_cast<Qt::SortOrder>(m_as_de));
}

void PlaylistModel::sort(int column, Qt::SortOrder order)
{
	m_columnSorted = column;
	m_as_de = order;

	if(order == Qt::AscendingOrder)
	{
		switch(column)
		{
		case 0:
			qSort(m_playlist->begin(), m_playlist->end(), compare_title_as);
			break;
		case 1:
			qSort(m_playlist->begin(), m_playlist->end(), compare_artist_as);
			break;
		case 2:
			qSort(m_playlist->begin(), m_playlist->end(), compare_album_as);
			break;
		}
	}
	else
	{
		switch(column)
		{
		case 0:
			qSort(m_playlist->begin(), m_playlist->end(), compare_title_de);
			break;
		case 1:
			qSort(m_playlist->begin(), m_playlist->end(), compare_artist_de);
			break;
		case 2:
			qSort(m_playlist->begin(), m_playlist->end(), compare_album_de);
			break;
		}
	}

	emit dataChanged(createIndex(0, 0, this), createIndex(m_playlist->count() - 1, 0, this));
}

bool PlaylistModel::compare_title_as(const SongFile &s1, const SongFile &s2)
{
	return s1.GetTitle() < s2.GetTitle();
}

bool PlaylistModel::compare_title_de(const SongFile &s1, const SongFile &s2)
{
	return s1.GetTitle() > s2.GetTitle();
}

bool PlaylistModel::compare_artist_as(const SongFile &s1, const SongFile &s2)
{
	return s1.GetArtist() < s2.GetArtist();
}

bool PlaylistModel::compare_artist_de(const SongFile &s1, const SongFile &s2)
{
	return s1.GetArtist() > s2.GetArtist();
}

bool PlaylistModel::compare_album_as(const SongFile &s1, const SongFile &s2)
{
	return s1.GetAlbum() < s2.GetAlbum();
}

bool PlaylistModel::compare_album_de(const SongFile &s1, const SongFile &s2)
{
	return s1.GetAlbum() > s2.GetAlbum();
}
