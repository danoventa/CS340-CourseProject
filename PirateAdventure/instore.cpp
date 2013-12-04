#include "instore.h"
#include <QtGui>



InStore::InStore(QGraphicsItem *parent) : QGraphicsItem(parent)
{
    // setFlag(QGraphicsItem::ItemIsFocusable);
}

InStore::~InStore()
{
    this->hide();
}

QRectF InStore::boundingRect() const{
    return QRectF(64, 192, 128, 1);
}

void InStore::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    //widget;
    //option;
    painter->setBrush(Qt::transparent);
    painter->drawRoundedRect(96, 192, 128, 1, 0, 0);
}

