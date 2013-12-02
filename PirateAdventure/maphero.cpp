#include "maphero.h"
#include <QtGui>

#define SMALLEST 0.00000000000000000000000000000000000000000000000000000000000001

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
    switch(  event->key() ) {
    case Qt::Key_Right:
        if( (collidingItems().size() >= SMALLEST)) { //.size() >= 0
            moveBy(-9, 0);
        }
        else{
            moveBy(9, 0);
            heroImage = 3;
        }
        break;
    case Qt::Key_Left:
        if( (collidingItems().size() >= SMALLEST)) { //.size() > 0
        moveBy(9, 0);

        }
        else{
            moveBy(-9, 0);
            heroImage = 1;
        }
        break;
    case Qt::Key_Up:
        if( (collidingItems().size() >= SMALLEST)) {//.size() >= 0
            moveBy(0, 9);
        }
        else{
            moveBy(0, -9);
            heroImage = 2;

        }
        break;
    case Qt::Key_Down:
        if( (collidingItems().size() >= SMALLEST)) { //.size() >= 0
            moveBy(0, -9);

        }
        else{
            moveBy(0, 9);
            heroImage = 0;
        }
        break;
    }
        update();
}
