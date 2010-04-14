#include "musicmodewidget.h"
#include <QtGui>
#include "controlwidget.h"

MusicModeWidget::MusicModeWidget(QWidget *parent) :
    QWidget(parent)
{
	QStringList headers;

	headers << QString("Title") << QString("Artist") << QString("Album");
	mediaTable = new QTableWidget(0, 3);
	mediaTable->setHorizontalHeaderLabels(headers);
	mediaTable->setSelectionMode(QAbstractItemView::SingleSelection);
	mediaTable->setSelectionBehavior(QAbstractItemView::SelectRows);

	QVBoxLayout *grid = new QVBoxLayout;
	grid->addWidget(new ControlWidget);
	grid->addWidget(mediaTable);
	setLayout(grid);
}
