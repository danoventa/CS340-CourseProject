#include "backfromstore.h"
#include <QtGui>

/**
 * @brief Constructor for the item
 * @param parent
 */
BackFromStore::BackFromStore(QGraphicsItem *parent) : QGraphicsItem(parent)
{
}

/**
 * @brief destructor to hide the item
 */
BackFromStore::~BackFromStore()
{
    this->hide();
}

/**
 * @brief returns a bounding rect and sets the bouding rect for the item.
 * @return
 */
QRectF BackFromStore::boundingRect() const{
    return QRectF (0, 192, 1, 192);
}


/**
 * @brief Paints the item, which will be used in the scene.
 * @param painter, a pointer to the painter that paints the item.
 * @param option
 * @param widget
 */
void BackFromStore::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::transparent);
}
