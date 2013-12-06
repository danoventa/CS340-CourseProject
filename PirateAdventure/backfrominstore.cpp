#include "backfrominstore.h"
#include <QtGui>


/**
 * @brief Constructor for the item
 * @param parent
 */
BackFromInStore::BackFromInStore(QGraphicsItem *parent) : QGraphicsItem(parent)
{
}

/**
 * @brief destructor hides the item if called.
 */
BackFromInStore::~BackFromInStore()
{
    this->hide();
}

/**
 * @brief The bounding rect for the item
 * @return returns a QRect bounding rect
 */
QRectF BackFromInStore::boundingRect() const{
    return QRectF(192, 574, 256, 1);
}

/**
 * @brief Paint item that paints the item.
 * @param painter, used to set the brush in this case.
 * @param option
 * @param widget
 */
void BackFromInStore::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::transparent);
}
