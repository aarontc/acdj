#include <QtGui/QApplication>
#include "mainwindow.h"
#include "musicmodewidget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
	MusicModeWidget hi;
	hi.show();

//	MainWindow w;
//    w.show();
    return a.exec();
}
