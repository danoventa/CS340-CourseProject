#include "tostore.h"
#include <QtGui>

ToStore::ToStore(QGraphicsItem *parent) : QGraphicsItem(parent)
{
    // setFlag(QGraphicsItem::ItemIsFocusable);
}

ToStore::~ToStore()
{
    this->hide();
}

QRectF ToStore::boundingRect() const{
    return QRectF(630, 447, 1, 128);
}

void ToStore::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    //widget;
    //option;
    painter->setBrush(Qt::transparent);
    painter->drawRoundedRect(630, 447, 1, 128, 0, 0);
}

