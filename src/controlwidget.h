#ifndef CONTROLWIDGET_H
#define CONTROLWIDGET_H

#include <QWidget>

class QPushButton;
class QHBoxLayout;

class ControlWidget : public QWidget
{
Q_OBJECT

public:
    ControlWidget(QWidget *parent = 0);
	//~ControlWidget();

private:
	QHBoxLayout * layout;
	QPushButton * backButton;
	QPushButton * playPauseButton;
	QPushButton * forwardButton;

};

#endif // CONTROLWIDGET_H
