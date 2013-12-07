#include "backfrominstore.h"
#include <QtGui>

BackFromInStore::BackFromInStore(QGraphicsItem *parent) : QGraphicsItem(parent)
{
}

BackFromInStore::~BackFromInStore()
{
    this->hide();
}

QRectF BackFromInStore::boundingRect() const{
    return QRectF(192, 574, 256, 1);
}

void BackFromInStore::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::transparent);
}
