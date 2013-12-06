#include "mainwindow.h"
#include "ui_mainwindow.h"

/**
 * @brief MainWindow::MainWindow
 * @param parent
 */
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

/**
 * @brief MainWindow destructor
 */
MainWindow::~MainWindow()
{
    delete ui;
}

/**
 * @brief A means of calling the map view on a
 *  modal screen. Hence, no tampering with the other
 *  window.
 */
void MainWindow::on_pushButton_clicked()
{
    wm.setModal(true);
    wm.show();
}

/**
 * @brief This was originally made to test with the mac, I left the buton there for testing.
 *  It no longer has any purpose when writing the rest of the code.
 */
void MainWindow::on_pushButton_4_clicked()
{
    wm.~worldmap();
    exit(0);
}
