#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "worldmap.h"

#include "wigglywidget.h"
#include "graphicsview.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_4_clicked();

private:
    Ui::MainWindow *ui;
    worldmap wm;
    QGraphicsScene scene;
};

#endif // MAINWINDOW_H
