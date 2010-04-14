#include "controlwidget.h"
#include <QtGui>
#include <QMessageBox>

ControlWidget::ControlWidget(QWidget *parent) :
	QToolBar(parent)
{
	SetUpActions();

	addAction(backAction);
	addAction(commandAction);
	addAction(nextAction);
}

void ControlWidget::BackSlot()
{
	QMessageBox::warning(this, QString("you hit back"), QString("Hi"));
	backAction->setDisabled(true);
}

void ControlWidget::CommandSlot()
{
	QMessageBox::warning(this, QString("you hit the command slot"), QString("Hi"));
	commandAction->setIcon(style()->standardIcon(QStyle::SP_MediaPause));
	commandAction->setIconText(QString("pause"));
}

void ControlWidget::NextSlot()
{
	QMessageBox::warning(this, QString("you hit forward"), QString("Hi"));
	nextAction->setDisabled(true);
}

void ControlWidget::SetUpActions()
{
	//setup back action
	backAction = new QAction(style()->standardIcon(QStyle::SP_MediaSkipBackward),
				  QString("back"), this);
	backAction->setShortcut(QString("Crl+b"));
	backAction->setDisabled(true);

	//setup command action
	commandAction = new QAction(style()->standardIcon(QStyle::SP_MediaPlay),
								QString("play"), this);
	commandAction->setShortcut(QString("Crl+P"));
	commandAction->setDisabled(true);

	//setup forward action
	nextAction = new QAction(style()->standardIcon(QStyle::SP_MediaSkipForward),
								QString("forward"), this);
	nextAction->setShortcut(QString("Crl+F"));
	nextAction->setDisabled(true);

	//setup signals and slots
	connect(backAction, SIGNAL(triggered()), this, SLOT(BackSlot()));
	connect(commandAction, SIGNAL(triggered()), this, SLOT(CommandSlot()));
	connect(nextAction, SIGNAL(triggered()), this, SLOT(NextSlot()));
}
