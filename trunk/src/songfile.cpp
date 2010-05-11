#include "songfile.h"
#include <QStringList>
#include <Phonon/MediaSource>
#include <Phonon/MediaObject>

SongFile::SongFile()
{}

SongFile::SongFile(QString title, QString artist, QString album, QString filePath)
	:m_title(title), m_artist(artist), m_album(album), m_filePath(filePath)
{}

SongFile::SongFile(const SongFile & aCopy)
	:m_title(aCopy.m_title), m_artist(aCopy.m_artist), m_album(aCopy.m_album),
	m_filePath(aCopy.m_filePath)
{}

SongFile & SongFile::operator=(const SongFile & aCopy)
{
	m_title = aCopy.m_title;
	m_artist = aCopy.m_artist;
	m_album = aCopy.m_album;
	m_filePath = aCopy.m_filePath;

	return *this;
}

//getters
QString SongFile::GetTitle() const
{
	return m_title;
}

QString SongFile::GetArtist() const
{
	return m_artist;
}

QString SongFile::GetAlbum() const
{
	return m_album;
}

QString SongFile::GetFilePath() const
{
	return m_filePath;
}

QStringList SongFile::GetStringList() const
{
	QStringList songInfo;
	songInfo << m_title << m_artist << m_album;

	return songInfo;
}

//setters
void SongFile::SetTitle(QString title)
{
	m_title = title;
}

void SongFile::SetArtist(QString artist)
{
	m_artist = artist;
}

void SongFile::SetAlbum(QString album)
{
	m_album = album;
}

void SongFile::SetFilePath(QString filePath)
{
	m_filePath = filePath;
}
