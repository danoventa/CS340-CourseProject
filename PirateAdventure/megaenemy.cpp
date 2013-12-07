#include "megaenemy.h"
#include <QtGui>
#include <iostream>

MegaEnemy::MegaEnemy(QGraphicsItem *parent) : QGraphicsItem(parent)
{
    // setFlag(QGraphicsItem::ItemIsFocusable);
}
MegaEnemy::~MegaEnemy()
{
    this->hide();
}

QRectF MegaEnemy::boundingRect() const{
    return QRectF(540, 30, 45, 90);
}

void MegaEnemy::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{


    painter->drawPixmap(540, 30, 45, 90, QPixmap(":/images/bison"));
}
