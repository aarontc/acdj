#ifndef CONTROLWIDGET_H
#define CONTROLWIDGET_H

#include <QWidget>
#include <phonon/mediaobject.h>

class QAction;

class ControlWidget : public QWidget
{
Q_OBJECT

public:
    ControlWidget(QWidget *parent = 0);
	//~ControlWidget();

private slots:
	void BackSlot();
	void CommandSlot();
	void NextSlot();

private:
	//set up functions
	void SetUpActions();
	void SetUpControlBar();

	QAction * backAction;
	QAction * commandAction;
	QAction * nextAction;

	Phonon::MediaObject *currentMedia;
	Phonon::MediaSource *prevMedia;
	Phonon::MediaSource *nextMedia;
};

#endif // CONTROLWIDGET_H
