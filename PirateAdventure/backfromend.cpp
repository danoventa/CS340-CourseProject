#include "backfromend.h"
#include <QtGui>
/**
 * @brief Constructor that does nothing.
 * @param parent
 */
BackFromEnd::BackFromEnd(QGraphicsItem *parent) : QGraphicsItem(parent)
{

}

/**
 * @brief hides the item when destructor is called.
 */
BackFromEnd::~BackFromEnd()
{
    this->hide();
}

/**
 * @brief sets the coordinates to the object.
 * @return
 */
QRectF BackFromEnd::boundingRect() const{
    return QRectF(0, 192, 1, 192);
}

/**
 * @brief Paints the object onto the screen.
 * @param painter, is a pointer to the painter
 * @param option, a non used paramaters
 * @param widget, another non used paramter for our code.
 */
void BackFromEnd::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    //widget;
    //option;
    painter->setBrush(Qt::transparent);
}
