#include "controlwidget.h"
#include <QPushButton>
#include <QtGui>
#include <QString>
#include <QIcon>

ControlWidget::ControlWidget(QWidget *parent) :
    QWidget(parent)
{
	playPauseButton = new QPushButton(  QIcon(QString("resources/button_play.png")),
										QString("Play"),
										this);

	backButton = new QPushButton(QIcon(QString("resources/button_back.png")),
								QString("back"),
								  this);
	forwardButton = new QPushButton(QIcon(QString("recources/button_forward.png")),
									QString("forward"),
									this);

	//Adding layout
	layout = new QHBoxLayout(this);
	layout->addWidget(backButton);
	layout->addWidget(playPauseButton);
	layout->addWidget(forwardButton);
}
