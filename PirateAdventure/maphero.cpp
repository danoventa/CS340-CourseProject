#include "maphero.h"
#include "worldmap.h"
#include <QtGui>
#include <iostream>

/**
 * @brief Constructor for the Map Hero, the most awesomest
 *  and fanciful part of the map section of the program.
 *  Basically does everything for itself.
 * @param parent
 */
MapHero::MapHero(QGraphicsItem *parent) : QGraphicsItem(parent)
{
    setFlag(QGraphicsItem::ItemIsFocusable);
    pause = new Pause();
    heroImage = 3;
    foMin = 0;
    foEnem = 0;
    foMen = 0;
    iAmIn = 1;
    battle= new attackframe();
   // pause->hero=battle->getHero ();
   // pause->on_progressBar_valueChanged (pause->hero->getHP());
}

/**
 * @brief Gives me enemy pointers, so hero can set appropriate actions onto the screen.
 * @param enemy, a pointer to the first level boss.
 * @param miniEnemy, a mini boss within the game.
 * @param megaEnemy, a pointer to the final boss.
 */
void MapHero::pointToEnemy(MapEnemy *enemy, MiniEnemy *miniEnemy, MegaEnemy *megaEnemy)
{
    menemy = megaEnemy;
    minemy = miniEnemy;
    enemon = enemy;
}

/**
 * @brief gets a pointer to the store
 * @param storay
 */
void MapHero::pointToStore(ToStore *storay)
{
    stora = storay;
}

/**
 * @brief pointer to self.
 * @param hera
 */
void MapHero::pointToMe(MapHero *hera)
{
    hero = hera;
}

/**
 * @brief pointer to go in store.
 * @param inStoray
 */
void MapHero::pointToInStore(InStore *inStoray)
{
    inStora = inStoray;
}

/**
 * @brief points to the pointer that sends you to the last level.
 * @param toEnd
 */
void MapHero::pointToEnd(ToEnd *toEnd)
{
    mEnd = toEnd;
}

/**
 * @brief this is a functino that returns a pointer to the hero set to the store map scene.
 * @param fromStore
 */
void MapHero::pointFromStore(BackFromStore *fromStore)
{
    oStore = fromStore;
}

/**
 * @brief stores a pointer to the map from in store.
 * @param fromInStore
 */
void MapHero::pointFromInStore(BackFromInStore *fromInStore)
{
    oInStore = fromInStore;
}

/**
 * @brief stores a pointer to the end from the
 * @param fromEnd
 */
void MapHero::pointFromEnd(BackFromEnd *fromEnd)
{
    oEnd = fromEnd;
}

/**
 * @brief sets the bouding rect to the hero item.
 * @return a QRectF
 */
QRectF MapHero::boundingRect() const{
    return QRectF(0, 520, 15, 24);
}

/**
 * @brief Paints the hero based on what hero image number is placed.
 * @param painter
 * @param option
 * @param widget
 */
void MapHero::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    //option;
    //widget;
    switch(  heroImage )
    {
        case 0:
            painter->drawPixmap(0, 520, 15, 24, QPixmap(":/images/Image4_8.gif"));
            break;
        case 1:
            painter->drawPixmap(0, 520, 15, 24, QPixmap(":/images/Image7_3"));
            break;
        case 2:
            painter->drawPixmap(0, 520, 15, 24, QPixmap(":/images/Image6_2.gif"));
            break;
        default:
            painter->drawPixmap(0, 520, 15, 24, QPixmap(":/images/Image5_4.gif"));
            break;
    }
}

/**
 * @brief MapHero::movesToMapStore
 */
void MapHero::movesToMapStore(){
    graph->setStyleSheet("background-image: url(:/images/store);");
    mid->addItem(hero);
    hero->setPos(20, -200);
    hero->setFocus();
    graph->setScene(mid);
    iAmIn = 2;
}

/**
 * @brief MapHero::movesToStore
 */
void MapHero::movesToStore(){
    graph->setStyleSheet("background-image: url(:/images/inStore);");
    store->addItem(hero);
    hero->setPos(328, 20);
    hero->setFocus();
    graph->setScene(store);
    iAmIn = 4;
}

/**
 * @brief MapHero::movesToEnd
 */
void MapHero::movesToEnd(){
    graph->setStyleSheet("background-image: url(:/images/end);");
    end->addItem(hero);
    hero->setPos(10, -200);
    hero->setFocus();
    graph->setScene(end);
    iAmIn = 3;
}

/**
 * @brief MapHero::returnsFromInStore
 */
void MapHero::returnsFromInStore(){
    graph->setStyleSheet("background-image: url(:/images/store);");
    mid->addItem(hero);
    hero->setPos(140, -310);
    hero->setFocus();
    graph->setScene(mid);
    iAmIn = 2;
}
/**
 * @brief MapHero::returnsFromMapStore
 */
void MapHero::returnsFromMapStore(){
    graph->setStyleSheet("background-image: url(:/images/untitled2.png);");
    begin->addItem(hero);
    hero->setPos(604, -32);
    hero->setFocus();
    graph->setScene(begin);
    iAmIn = 1;
}
/**
 * @brief MapHero::returnsFromEnd
 */
void MapHero::returnsFromEnd(){
    graph->setStyleSheet("background-image: url(:/images/store);");
    mid->addItem(hero);
    hero->setPos(620, -200);
    hero->setFocus();
    graph->setScene(mid);
    iAmIn = 2;
}
/**
 * @brief MapHero::doBattle
 */
void MapHero::doBattle(){
    battle->setModal(true);
    battle->startBattle('e',2,0,0,'h',2,1,1,'c',1,2,2);
    battle->exec();
    hero->setFocus();

}
/**
 * @brief This is where the majority of the collision is taking place.
 * aram @pevent, is the key that is pressed.
 */
void MapHero::keyPressEvent(QKeyEvent *event){
    double cSize;
    switch(  event->key() ) {
    case Qt::Key_Right:
        moveBy(9, 0);
        heroImage = 3;
        if (hero->collidesWithItem(stora) && iAmIn == 1)
        {
            movesToMapStore();
        }
        else if (hero->collidesWithItem(mEnd) && iAmIn == 2)
        {
            movesToEnd();
        }
        else if (hero->collidesWithItem(enemon) && iAmIn == 1 && foEnem == 0)
        {
            enemon->hide();
            foEnem = 1;
            doBattle();
        }
        else if (hero->collidesWithItem(minemy) && iAmIn == 1 && foMin == 0)
        {
            minemy->hide();
            foMin = 1;
            doBattle();
        }
        else if (hero->collidesWithItem(menemy) && iAmIn == 3 && foMen == 0)
        {
            menemy->hide();
            foMen = 1;
            doBattle();
        }
        else if ( (cSize = collidingItems().size()) > 0){
            moveBy(-9, 0);
            heroImage = 1;
        }
        break;
    case Qt::Key_Left:
        moveBy(-9, 0);
        heroImage = 1;
        if (hero->collidesWithItem(oStore) && iAmIn == 2)
        {
            returnsFromMapStore();
        }
        else if(hero->collidesWithItem(oEnd) && iAmIn == 3)
        {
            returnsFromEnd();
        }
        else if (hero->collidesWithItem(enemon) && iAmIn == 1 && foEnem == 0)
        {
            enemon->hide();
            foEnem = 1;
            doBattle();
        }
        else if (hero->collidesWithItem(minemy) && iAmIn == 1 && foMin == 0)
        {
            minemy->hide();
            foMin = 1;
            doBattle();
        }
        else if (hero->collidesWithItem(menemy) && iAmIn == 3 && foMen == 0)
        {
            menemy->hide();
            foMen = 1;
            doBattle();
        }
        else if ( (collidingItems().size() > 0)){
            moveBy(9, 0);
            heroImage = 3;
        }
        break;
    case Qt::Key_Up:
        moveBy(0, -9);
        heroImage = 2;
        if (hero->collidesWithItem(inStora) && iAmIn == 2){
            movesToStore();
        }
        else if (hero->collidesWithItem(enemon) && iAmIn == 1 && foEnem == 0)
        {
            enemon->hide();
            foEnem = 1;
            doBattle();
        }
        else if (hero->collidesWithItem(minemy) && iAmIn == 1 && foMin == 0)
        {
            minemy->hide();
            foMin = 1;
            doBattle();
        }
        else if (hero->collidesWithItem(menemy) && iAmIn == 3 && foMen == 0)
        {
            menemy->hide();
            foMen = 1;
            doBattle();
        }
        else if ( (collidingItems().size() > 0)){
            moveBy(0, 9);
            heroImage = 0;
        }
        break;
    case Qt::Key_Down:
        moveBy(0, 9);
        heroImage = 0;
        if (hero->collidesWithItem(oInStore) && iAmIn == 4)
        {
            returnsFromInStore();
        }
        else if (hero->collidesWithItem(enemon) && iAmIn == 1 && foEnem == 0)
        {
            enemon->hide();
            foEnem = 1;
            doBattle();
        }
        else if (hero->collidesWithItem(minemy) && iAmIn == 1 && foMin == 0)
        {
            minemy->hide();
            foMin = 1;
            doBattle();
        }
        else if (hero->collidesWithItem(menemy) && iAmIn == 3 && foMen == 0)
        {
            menemy->hide();
            foMen = 1;
            doBattle();
        }
        else if ( (collidingItems().size() > 0)){
            moveBy(0, -9);
            heroImage = 2;
        }
        break;
    case Qt::Key_P:
        pause->setModal(true);
        pause->exec();
        break;
    case Qt::Key_L:
        enemon->hide();
        break;
    case Qt::Key_Q:
        if (battle->Hero->gold > 50 && iAmIn == 4)
        {
        battle->Hero->gold-=50;
        battle->numPotions++;
        }
        break;
    default:
        break;
    }
        update();
}

/**
 * @brief MapHero::getGraphicsView
 * @param graphs
 */
void MapHero::getGraphicsView(QGraphicsView *graphs)
{
    graph = graphs;
}

/**
 * @brief MapHero::getGraphicsScene
 * @param begs
 * @param mids
 * @param ends
 * @param stores
 */
void MapHero::getGraphicsScene(QGraphicsScene *begs, QGraphicsScene *mids,
                               QGraphicsScene *ends, QGraphicsScene *stores)
{
    begin = begs;
    mid = mids;
    end = ends;
    store = stores;
}

