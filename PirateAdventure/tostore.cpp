#include "tostore.h"
#include <QtGui>

/**
 * @brief ToStore::ToStore
 * @param parent
 */
ToStore::ToStore(QGraphicsItem *parent) : QGraphicsItem(parent)
{
    // setFlag(QGraphicsItem::ItemIsFocusable);
}

/**
 * @brief ToStore::~ToStore
 */
ToStore::~ToStore()
{
    this->hide();
}

/**
 * @brief ToStore::boundingRect
 * @return
 */
QRectF ToStore::boundingRect() const{
    return QRectF(630, 447, 1, 128);
}

/**
 * @brief ToStore::paints the image item.
 * @param painter
 * @param option
 * @param widget
 */
void ToStore::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    //widget;
    //option;
    painter->setBrush(Qt::transparent);
    painter->drawRoundedRect(630, 447, 1, 128, 0, 0);
}

