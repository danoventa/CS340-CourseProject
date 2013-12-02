#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "worldmap.h"

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
};

#endif // MAINWINDOW_H
>>>>>>> 87dd27675240c67b0ea9a10611c9d6c5bf4dfb0d
