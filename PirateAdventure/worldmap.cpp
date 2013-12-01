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
