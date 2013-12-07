#include "megaenemy.h"
#include <QtGui>
#include <iostream>

/**
 * @brief MegaEnemy::MegaEnemy
 * @param parent
 */
MegaEnemy::MegaEnemy(QGraphicsItem *parent) : QGraphicsItem(parent)
{
    // setFlag(QGraphicsItem::ItemIsFocusable);
}
/**
 * @brief MegaEnemy::~MegaEnemy
 */
MegaEnemy::~MegaEnemy()
{
    this->hide();
}

/**
 * @brief the mega enemy's bounding rect.
 * @return
 */
QRectF MegaEnemy::boundingRect() const{
    return QRectF(540, 30, 45, 90);
}

/**
 * @brief Paints the enemy.. BIG!
 * @param painter
 * @param option
 * @param widget
 */
void MegaEnemy::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    //widget;
    //option;
    painter->drawPixmap(540, 30, 45, 90, QPixmap(":/images/bison"));
}
