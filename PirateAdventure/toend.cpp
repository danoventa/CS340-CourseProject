#include "toend.h"
#include <QtGui>

/**
 * @brief ToEnd::ToEnd
 * @param parent
 */
ToEnd::ToEnd(QGraphicsItem *parent) : QGraphicsItem(parent)
{
}
/**
 * @brief ToEnd::~ToEnd
 */
ToEnd::~ToEnd()
{
    this->hide();
}
/**
 * @brief ToEnd::boundingRect
 * @return
 */
QRectF ToEnd::boundingRect() const{
    return QRectF(630, 192, 1, 192);
}
/**
 * @brief ToEnd::paint the image
 * @param painter
 * @param option
 * @param widget
 */
void ToEnd::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::transparent);
}

