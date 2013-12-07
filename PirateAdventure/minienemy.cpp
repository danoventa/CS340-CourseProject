#include "minienemy.h"
#include <QtGui>
#include <iostream>

MiniEnemy::MiniEnemy(QGraphicsItem *parent) : QGraphicsItem(parent)
{
    // setFlag(QGraphicsItem::ItemIsFocusable);
}
MiniEnemy::~MiniEnemy()
{
    this->hide();
}

QRectF MiniEnemy::boundingRect() const{
    return QRectF(490, 230, 20, 40);
}

void MiniEnemy::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    //widget;
    //option;
    painter->drawPixmap(490, 230, 20, 40, QPixmap(":/images/bison"));
}
