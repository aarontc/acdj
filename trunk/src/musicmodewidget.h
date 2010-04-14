#ifndef MUSICMODEWIDGET_H
#define MUSICMODEWIDGET_H

#include <QWidget>

class ControlWidget;
class QTableWidget;

class MusicModeWidget : public QWidget
{
Q_OBJECT
public:
	MusicModeWidget(QWidget *parent = 0);

private:
	QTableWidget * mediaTable;
	ControlWidget * controls;
};

#endif // MUSICMODEWIDGET_H
