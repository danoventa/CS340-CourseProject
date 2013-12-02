#include "worldmap.h"
#include "ui_worldmap.h"

worldmap::worldmap(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::worldmap)
{
    ui->setupUi(this);

    scene = new QGraphicsScene(this);
    scene->setBackgroundBrush(Qt::transparent);

    ui->graphicsView->setScene(scene);
    hero = new MapHero;
    scene->addItem(hero);
    hero->setFocus();
    QBrush redbrush(Qt::red);
    QPen blackpen(Qt::black);
    blackpen.setWidth(6);
    rect = scene->addRect(10, 10, 81, 81, blackpen, redbrush);
}

worldmap::~worldmap()
{
    delete ui;
    delete hero;
}
void worldmap::on_pushButton_clicked()
{
    this->hide();
}
