#include "mainwindow.h"
#include <QApplication>
#include "graphicsview.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    w.show();
    GraphicsView gw;
    //gw.resize(500,500);
    //gw.setGeometry(8,30,500,500);
    gw.show();
    //gw.setMaximumHeight(1000);
    gw.setMaximumSize(610,610);

    gw.resize(600,400);
    gw.setSceneRect(0,200,600,400);
    //gw.sets
    //gw.setGeometry(8,30,500,500);

    return a.exec();
}
