#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //setWindowTitle("Happy Birthday!");
    //setWindowIcon(QIcon(":/images/caomei.png"));

    //WigglyWidget * wigglyWidget=new WigglyWidget(12, parent);

    /*WigglyWidget * wigglyWidget=new WigglyWidget(12,(ui->graphicsView));
    wigglyWidget->setText("");
    scene.addWidget(wigglyWidget);

    ui->graphicsView->setAlignment( Qt::AlignCenter );
    ui->graphicsView->setScene(&scene);
    ui->graphicsView->setBackgroundBrush(QImage(":/images/hb2.jpg"));
    ui->graphicsView->setCacheMode(QGraphicsView::CacheBackground);



    QImage img(":/images/hb2.jpg");
    this->resize(img.size());

    scene.setSceneRect(-100,-100,100,100);
    */
    //GraphicsView* w;
    //ui->graphicsView->setScene( (w->scene));
    //ui->graphicsView=new GraphicsView(parent);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    wm.setModal(true);
    wm.show();
}

void MainWindow::on_pushButton_4_clicked()
{
    wm.~worldmap();
    exit(0);
}
