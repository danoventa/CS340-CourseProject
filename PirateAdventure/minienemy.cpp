#include "minienemy.h"
#include <QtGui>
#include <iostream>

/**
 * @brief MiniEnemy::MiniEnemy
 * @param parent
 */
MiniEnemy::MiniEnemy(QGraphicsItem *parent) : QGraphicsItem(parent)
{
    // setFlag(QGraphicsItem::ItemIsFocusable);
}

/**
 * @brief MiniEnemy::~MiniEnemy
 */
MiniEnemy::~MiniEnemy()
{
    this->hide();
}

/**
 * @brief MiniEnemy::boundingRect
 * @return
 */
QRectF MiniEnemy::boundingRect() const{
    return QRectF(490, 230, 20, 40);
}

/**
 * @brief MiniEnemy::paints the enemy
 * @param painter
 * @param option
 * @param widget
 */
void MiniEnemy::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    //widget;
    //option;
    painter->drawPixmap(490, 230, 20, 40, QPixmap(":/images/bison"));
}
