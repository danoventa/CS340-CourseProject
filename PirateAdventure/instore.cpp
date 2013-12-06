#include "instore.h"
#include <QtGui>
/**
  * This is used to move from the store map, to in store.
  */

/**
 * @brief Item constructor
 * @param parent
 */
InStore::InStore(QGraphicsItem *parent) : QGraphicsItem(parent)
{
    // setFlag(QGraphicsItem::ItemIsFocusable);
}

/**
 * @brief destructor to the item.
 */
InStore::~InStore()
{
    this->hide();
}

/**
 * @brief a bounding rect that is used to set the size of the item.
 * @return
 */
QRectF InStore::boundingRect() const{
    return QRectF(64, 192, 128, 1);
}

/**
 * @brief paints the item.
 * @param painter, a pointer to the paint of object.
 * @param option
 * @param widget
 */
void InStore::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    //widget;
    //option;
    painter->setBrush(Qt::transparent);
    painter->drawRoundedRect(96, 192, 128, 1, 0, 0);
}

