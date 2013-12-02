#include "mapenemy.h"
#include <QtGui>
#include <iostream>

MapEnemy::MapEnemy(QGraphicsItem *parent) : QGraphicsItem(parent)
{
    setFlag(QGraphicsItem::ItemIsFocusable);
    enemyImage = 3;
}

QRectF MapEnemy::boundingRect() const{
    return QRectF(600, 520, 30, 40);
}

void MapEnemy::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
            painter->drawPixmap(600, 500, 30, 40, QPixmap(":/images/bison"));
}

void MapEnemy::collisionEvent(){    //QKeyEvent *event
    if ( (collidingItems().size() > 0)){
        this->hide();
    }
    update();
}
