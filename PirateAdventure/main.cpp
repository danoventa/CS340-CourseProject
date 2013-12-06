#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    /**
      * shows the window, which executes the further code.
      **/
    w.show();

    return a.exec();
}
