#include "backfromstore.h"
#include <QtGui>

BackFromStore::BackFromStore(QGraphicsItem *parent) : QGraphicsItem(parent)
{
}

BackFromStore::~BackFromStore()
{
    this->hide();
}

QRectF BackFromStore::boundingRect() const{
    return QRectF (0, 192, 1, 192);
}

void BackFromStore::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::transparent);
}
