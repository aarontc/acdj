#ifndef CONTROLWIDGET_H
#define CONTROLWIDGET_H

#include <QToolBar>
#include <phonon/mediaobject.h>

class QAction;

class ControlWidget : public QToolBar
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

	QAction * backAction;
	QAction * commandAction;
	QAction * nextAction;
};

#endif // CONTROLWIDGET_H
