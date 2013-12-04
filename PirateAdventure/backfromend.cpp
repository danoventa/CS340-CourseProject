#include "backfromend.h"
#include <QtGui>

BackFromEnd::BackFromEnd(QGraphicsItem *parent) : QGraphicsItem(parent)
{

}

BackFromEnd::~BackFromEnd()
{
    this->hide();
}

QRectF BackFromEnd::boundingRect() const{
    return QRectF(0, 192, 1, 192);
}

void BackFromEnd::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    //widget;
    //option;
    painter->setBrush(Qt::transparent);
}
