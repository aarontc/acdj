#include "musicmodewidget.h"
#include <QtGui>
#include "controlwidget.h"
#include "playlistmodel.h"

MusicModeWidget::MusicModeWidget(QWidget *parent) :
    QWidget(parent)
{
	QTableView *mediaTable = new QTableView();
	QAbstractTableModel * model = new PlaylistModel;
	mediaTable->setModel(model);
	mediaTable->setSortingEnabled(true);

	QVBoxLayout *grid = new QVBoxLayout;
	grid->addWidget(new ControlWidget);
	grid->addWidget(mediaTable);
	setLayout(grid);
}
