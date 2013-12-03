#include "maphero.h"
#include "worldmap.h"
#include <QtGui>
#include <iostream>

MapHero::MapHero(QGraphicsItem *parent) : QGraphicsItem(parent)
{
    setFlag(QGraphicsItem::ItemIsFocusable);
    heroImage = 3;
}

QRectF MapHero::boundingRect() const{
    return QRectF(0, 520, 15, 24);
}

void MapHero::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
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

void MapHero::keyPressEvent(QKeyEvent *event){
    double cSize;
    switch(  event->key() ) {
    case Qt::Key_Right:
        moveBy(9, 0);
        heroImage = 3;
        if ( (cSize = collidingItems().size()) > 0){
            std::cout << cSize;
            moveBy((cSize*-1)-1, 0);
            heroImage = 1;
        }
        break;
    case Qt::Key_Left:
        moveBy(-9, 0);
        heroImage = 1;
        if ( (collidingItems().size() > 0)){
            moveBy(9, 0);
            heroImage = 3;
        }
        break;
    case Qt::Key_Up:
        moveBy(0, -9);
        heroImage = 2;
        if ( (collidingItems().size() > 0)){
            moveBy(0, 9);
            heroImage = 0;
        }
        break;
    case Qt::Key_Down:
        moveBy(0, 9);
        heroImage = 0;
        if ( (collidingItems().size() > 0)){
            moveBy(0, -9);
            heroImage = 2;
        }
        break;
    case Qt::Key_P:
        pause.setModal(true);
        pause.show();
    }
        update();
}
