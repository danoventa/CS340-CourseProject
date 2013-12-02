<<<<<<< HEAD
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
=======
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
>>>>>>> 87dd27675240c67b0ea9a10611c9d6c5bf4dfb0d
