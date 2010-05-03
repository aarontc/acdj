#ifndef SONGFILE_H
#define SONGFILE_H

#include <QString>

class QStringList;

class SongFile
{
public:
	SongFile();
	SongFile(QString title, QString artist, QString album, QString filePath);
	SongFile(const SongFile & aCopy);
	SongFile & operator=(const SongFile & aCopy);

	//getters
	QString GetTitle() const;
	QString GetArtist() const;
	QString GetAlbum() const;
	QString GetFilePath() const;
	QStringList GetStringList() const;

	//setters
	void SetTitle(QString title);
	void SetArtist(QString artist);
	void SetAlbum(QString album);
	void SetFilePath(QString filePath);

protected:
	QString m_title;
	QString m_artist;
	QString m_album;
	QString m_filePath;
};

#endif // SONGFILE_H
