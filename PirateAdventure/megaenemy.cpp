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
    return QRectF(540, 30, 30, 70);
}

void MegaEnemy::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    //widget;
    //option;
    painter->drawPixmap(540, 30, 30, 600, QPixmap(":/images/bison"));
}
