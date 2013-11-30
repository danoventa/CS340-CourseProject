#include "worldmap.h"
#include "ui_worldmap.h"

worldmap::worldmap(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::worldmap)
{
    ui->setupUi(this);

    scene = new QGraphicsScene(this);
    //QPixmap level1("./Works/level1.png");
    scene->setBackgroundBrush(Qt::transparent);

    ui->graphicsView->setScene(scene);

    QBrush redBrush(Qt::red);
    QBrush blueBrush(Qt::blue);
    QPen blackPen(Qt::black);

    blackPen.setWidth(1);


    ellipse = scene->addEllipse(100, 010, 35, 30, blackPen, redBrush);
    rectangle = scene->addRect(10, 10, 30, 30, blackPen, blueBrush);

    ellipse->setFlag(QGraphicsItem::ItemIsMovable);
    rectangle->setFlag(QGraphicsItem::ItemIsMovable);

    hero = new MapHero;
    scene->addItem(hero);
    hero->setFocus();
}

worldmap::~worldmap()
{
    delete ui;
}
void worldmap::on_pushButton_clicked()
{
    delete(hero);
    this->hide();
}
