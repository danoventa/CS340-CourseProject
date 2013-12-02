#include "maphero.h"
#include <QtGui>

MapHero::MapHero(QGraphicsItem *parent) : QGraphicsItem(parent)
{
    setFlag(QGraphicsItem::ItemIsFocusable);
}
QRectF MapHero::boundingRect() const{
    return QRectF(0, 0, 16, 24);
}

void MapHero::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    heroImage = painter;
    heroImage->drawPixmap(0, 0, 16, 24, QPixmap(":/images/Image5_4.gif"));
    heroImage->drawRoundRect(0, 0, 16, 24, 0, 0);
}

void MapHero::keyPressEvent(QKeyEvent *event){
    switch(  event->key() ) {
    case Qt::Key_Right:
        moveBy(9, 0);
        break;
    case Qt::Key_Left:
        moveBy(-9, 0);
        break;
    case Qt::Key_Up:
        moveBy(0, -9);
        //heroImage->drawPixmap(0, 0, 16, 22, QPixmap(":/images/Image4_8.gif"));
        break;
    case Qt::Key_Down:
        moveBy(0, 9);
        break;
    }
    update();
}
