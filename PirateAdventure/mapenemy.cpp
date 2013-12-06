#include "mapenemy.h"
#include <QtGui>
#include <iostream>

/**
 * @brief An enemy item constructor
 * @param parent
 */
MapEnemy::MapEnemy(QGraphicsItem *parent) : QGraphicsItem(parent)
{
    // setFlag(QGraphicsItem::ItemIsFocusable);
}

/**
 * @brief calls to the destruction of the enemy item.
 */
MapEnemy::~MapEnemy()
{
    this->hide();
}

/**
 * @brief MapEnemy::boundingRect is used to set a bounding rect.
 * @return QRectF, the bounding rect of the item
 */
QRectF MapEnemy::boundingRect() const{
    return QRectF(600, 480, 30, 60);
}

/**
 * @brief Paints the enemy
 * @param painter
 * @param option
 * @param widget
 */
void MapEnemy::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    //widget;
    //option;
    painter->drawPixmap(600, 480, 30, 60, QPixmap(":/images/bison"));
}

/**
 * @brief not used, since all events happened on the hero's side. He collides and all
 *  respond.
 */
void MapEnemy::collisionEvent(){
    if ( (collidingItems().size() > 0))
    {
        this->hide();
    }
    update();
}
