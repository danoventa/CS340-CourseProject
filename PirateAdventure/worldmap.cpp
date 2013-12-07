#include "worldmap.h"
#include "ui_worldmap.h"

/**
 * @brief worldmap::worldmap
 * @param parent
 */
worldmap::worldmap(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::worldmap)
{
    ui->setupUi(this);

    scene1 = new QGraphicsScene(this);
    scene1->setBackgroundBrush(Qt::transparent);
    scene2 = new QGraphicsScene(this);
    scene2->setBackgroundBrush(Qt::transparent);
    scene3 = new QGraphicsScene(this);
    scene3->setBackgroundBrush(Qt::transparent);
    scene4 = new QGraphicsScene(this);
    scene4->setBackgroundBrush(Qt::transparent);

    hero = new MapHero;
    enemy = new MapEnemy;
    miniEnemy = new MiniEnemy;
    megaEnemy = new MegaEnemy;
    mStore = new ToStore;
    nStore = new InStore;
    toEnd = new ToEnd;
    fromStore = new BackFromStore;
    fromInStore = new BackFromInStore;
    fromEnd = new BackFromEnd;

    ui->graphicsView->setScene(scene1);

    scene1->addItem(hero);
    scene1->addItem(enemy);
    scene1->addItem(miniEnemy);
    scene1->addItem(mStore);

    scene2->addItem(nStore);
    scene2->addItem(fromStore);
    scene2->addItem(toEnd);

    scene3->addItem(fromEnd);
    scene3->addItem(megaEnemy);

    scene4->addItem(fromInStore);

    hero->setFocus();
    QBrush unBrush(Qt::transparent);
    QPen unPen(Qt::transparent);
    unPen.setWidth(1);
    hero->pointToEnemy(enemy, miniEnemy, megaEnemy);
    hero->pointToStore(mStore);
    hero->pointToInStore(nStore);
    hero->pointToEnd(toEnd);
    hero->pointFromStore(fromStore);
    hero->pointFromInStore(fromInStore);
    hero->pointFromEnd(fromEnd);

    makeBeginning(unPen, unBrush);
    makeMiddle(unPen, unBrush);
    makeEnding(unPen, unBrush);
    makeStore(unPen, unBrush);

    hero->getGraphicsView(ui->graphicsView);
    hero->getGraphicsScene(scene1, scene2, scene3, scene4);
    hero->pointToMe(hero);
}
/**
 * @brief worldmap::~worldmap
 */
worldmap::~worldmap()
{
    delete ui;
    delete hero;
    delete enemy;
}
/**
 * @brief worldmap::on_pushButton_clicked
 */
void worldmap::on_pushButton_clicked()
{
    this->hide();
}
/**
 * @brief worldmap::makeBeginning
 * @param unPen
 * @param unBrush
 */
void worldmap::makeBeginning(QPen unPen, QBrush unBrush)
{
    scene1->addRect(0, 0, 32, 510, unPen, unBrush);
    scene1->addRect(0, 0, 638, 30, unPen, unBrush);
    scene1->addRect(0, 482, 126, 28, unPen, unBrush);
    scene1->addRect(0, 546, 638, 30, unPen, unBrush);
    scene1->addRect(0, 482, 126, 28, unPen, unBrush);
    scene1->addRect(0, 546, 638, 30, unPen, unBrush);
    scene1->addRect(0, 482, 126, 26, unPen, unBrush);
    scene1->addRect(130, 418, 26, 60, unPen, unBrush);
    scene1->addRect(610, 0, 26, 444, unPen, unBrush);
    scene1->addRect(514, 418, 28, 126, unPen, unBrush);
    scene1->addRect(66, 32, 218, 28, unPen, unBrush);
    scene1->addRect(386, 32, 156, 28, unPen, unBrush);
    scene1->addRect(578, 32, 28, 26, unPen, unBrush);
    scene1->addRect(130, 98, 316, 28, unPen, unBrush);
    scene1->addRect(32, 98, 30, 28, unPen, unBrush);
    scene1->addRect(322, 66, 28, 30, unPen, unBrush);
    scene1->addRect(482, 98, 60, 28, unPen, unBrush);
    scene1->addRect(98, 130, 28, 28, unPen, unBrush);
    scene1->addRect(450, 130, 28, 28, unPen, unBrush);
    scene1->addRect(546, 130, 28, 60, unPen, unBrush);
    scene1->addRect(130, 162, 28, 60, unPen, unBrush);
    scene1->addRect(194, 162, 28, 28, unPen, unBrush);
    scene1->addRect(322, 162, 92, 28, unPen, unBrush);
    scene1->addRect(226, 194, 28, 28, unPen, unBrush);
    scene1->addRect(386, 194, 60, 28, unPen, unBrush);
    scene1->addRect(482, 194, 60, 28, unPen, unBrush);
    scene1->addRect(98, 226, 28, 28, unPen, unBrush);
    scene1->addRect(258, 226, 28, 92, unPen, unBrush);
    scene1->addRect(290, 194, 28, 28, unPen, unBrush);
    scene1->addRect(66, 258, 28, 124, unPen, unBrush);
    scene1->addRect(98, 226, 28, 28, unPen, unBrush);
    scene1->addRect(258, 226, 28, 92, unPen, unBrush);
    scene1->addRect(98, 386, 28, 28, unPen, unBrush);
    scene1->addRect(194, 258, 28, 28, unPen, unBrush);
    scene1->addRect(194, 354, 28, 28, unPen, unBrush);
    scene1->addRect(226, 386, 28, 28, unPen, unBrush);
    scene1->addRect(258, 354, 28, 28, unPen, unBrush);
    scene1->addRect(258, 418, 28, 28, unPen, unBrush);
    scene1->addRect(162, 290, 28, 60, unPen, unBrush);
    scene1->addRect(354, 226, 28, 28, unPen, unBrush);
    scene1->addRect(386, 258, 60, 28, unPen, unBrush);
    scene1->addRect(514, 258, 28, 28, unPen, unBrush);
    scene1->addRect(322, 290, 60, 28, unPen, unBrush);
    scene1->addRect(450, 290, 60, 28, unPen, unBrush);
    scene1->addRect(546, 290, 28, 60, unPen, unBrush);
    scene1->addRect(322, 354, 28, 28, unPen, unBrush);
    scene1->addRect(386, 354, 28, 28, unPen, unBrush);
    scene1->addRect(514, 354, 28, 28, unPen, unBrush);
    scene1->addRect(354, 386, 28, 28, unPen, unBrush);
    scene1->addRect(418, 386, 28, 28, unPen, unBrush);
    scene1->addRect(578, 418, 30, 28, unPen, unBrush);
    scene1->addRect(482, 386, 28, 28, unPen, unBrush);
    scene1->addRect(290, 450, 188, 28, unPen, unBrush);
    scene1->addRect(290, 514, 188, 28, unPen, unBrush);
    scene1->addRect(194, 450, 28, 60, unPen, unBrush);
    scene1->addRect(226, 514, 28, 28, unPen, unBrush);
}

/**
 * @brief worldmap::makeMiddle
 * @param unPen
 * @param unBrush
 */
void worldmap::makeMiddle(QPen unPen, QBrush unBrush)
{

}

/**
 * @brief worldmap::makeEnding
 * @param unPen
 * @param unBrush
 */
void worldmap::makeEnding(QPen unPen, QBrush unBrush)
{

}

/**
 * @brief worldmap::makeStore
 * @param unPen
 * @param unBrush
 */
void worldmap::makeStore(QPen unPen, QBrush unBrush)
{

}
