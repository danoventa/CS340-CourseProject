#include "toend.h"
#include <QtGui>

ToEnd::ToEnd(QGraphicsItem *parent) : QGraphicsItem(parent)
{
}

ToEnd::~ToEnd()
{
    this->hide();
}

QRectF ToEnd::boundingRect() const{
    return QRectF(630, 192, 1, 192);
}

void ToEnd::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::transparent);
}

