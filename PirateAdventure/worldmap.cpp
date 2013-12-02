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
    QBrush unBrush(Qt::transparent);
    QPen unPen(Qt::transparent);
    unPen.setWidth(1);
    blackpen.setWidth(1);
    scene->addRect(0, 0, 32, 510, blackpen, redbrush);
    scene->addRect(0, 0, 638, 30, blackpen, redbrush);
    scene->addRect(0, 482, 126, 28, blackpen, redbrush);
    scene->addRect(0, 546, 638, 30, blackpen, redbrush);
    scene->addRect(0, 482, 126, 28, blackpen, redbrush);
    scene->addRect(0, 546, 638, 30, blackpen, redbrush);
    scene->addRect(0, 482, 126, 28, blackpen, redbrush);
    scene->addRect(130, 418, 26, 60, blackpen, redbrush);
    scene->addRect(610, 0, 28, 444, blackpen, redbrush);
    scene->addRect(514, 418, 28, 126, blackpen, redbrush);
    scene->addRect(66, 32, 218, 30, blackpen, redbrush);
    scene->addRect(386, 32, 156, 30, blackpen, redbrush);
    scene->addRect(578, 32, 30, 28, blackpen, redbrush);
    scene->addRect(130, 98, 316, 28, blackpen, redbrush);
    scene->addRect(32, 98, 30, 28, blackpen, redbrush);
    scene->addRect(322, 66, 28, 30, blackpen, redbrush);
    scene->addRect(482, 98, 60, 28, blackpen, redbrush);
    scene->addRect(98, 130, 28, 28, blackpen, redbrush);
    scene->addRect(450, 130, 28, 28, blackpen, redbrush);
    scene->addRect(546, 130, 28, 60, blackpen, redbrush);
    scene->addRect(130, 162, 28, 60, blackpen, redbrush);
    scene->addRect(194, 162, 28, 28, blackpen, redbrush);
    scene->addRect(322, 162, 92, 28, blackpen, redbrush);
    scene->addRect(226, 194, 28, 28, blackpen, redbrush);
    scene->addRect(386, 194, 60, 28, blackpen, redbrush);
    scene->addRect(482, 194, 60, 28, blackpen, redbrush);
    scene->addRect(98, 226, 28, 28, blackpen, redbrush);
    scene->addRect(258, 226, 28, 92, blackpen, redbrush);
    scene->addRect(290, 194, 28, 28, blackpen, redbrush);
    scene->addRect(66, 258, 28, 124, blackpen, redbrush);
    scene->addRect(98, 226, 28, 28, blackpen, redbrush);
    scene->addRect(258, 226, 28, 92, blackpen, redbrush);

    scene->addRect(130, 418, 26, 60, blackpen, redbrush);
    scene->addRect(610, 0, 28, 444, blackpen, redbrush);
    scene->addRect(514, 418, 28, 126, blackpen, redbrush);
    scene->addRect(66, 32, 218, 30, blackpen, redbrush);
    scene->addRect(386, 32, 156, 30, blackpen, redbrush);
    scene->addRect(578, 32, 30, 28, blackpen, redbrush);
    scene->addRect(130, 98, 316, 28, blackpen, redbrush);
    scene->addRect(32, 98, 30, 28, blackpen, redbrush);
    scene->addRect(322, 66, 28, 30, blackpen, redbrush);
    scene->addRect(482, 98, 60, 28, blackpen, redbrush);
    scene->addRect(98, 130, 28, 28, blackpen, redbrush);
    scene->addRect(450, 130, 28, 28, blackpen, redbrush);
    scene->addRect(546, 130, 28, 60, blackpen, redbrush);
    scene->addRect(130, 162, 28, 60, blackpen, redbrush);
    scene->addRect(194, 162, 28, 28, blackpen, redbrush);
    scene->addRect(322, 162, 92, 28, blackpen, redbrush);
    scene->addRect(226, 194, 28, 28, blackpen, redbrush);
    scene->addRect(386, 194, 60, 28, blackpen, redbrush);
    scene->addRect(482, 194, 60, 28, blackpen, redbrush);
    scene->addRect(98, 226, 28, 28, blackpen, redbrush);
    scene->addRect(258, 226, 28, 92, blackpen, redbrush);

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
