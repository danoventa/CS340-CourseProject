#ifndef MEGAENEMY_H
#define MEGAENEMY_H

#include <QGraphicsItem>

class MegaEnemy : public QGraphicsItem
{
public:
    MegaEnemy(QGraphicsItem *parent = NULL);
    ~MegaEnemy();
protected:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    QRectF boundingRect() const;

private:
    int enemyImage;
};

#endif // MEGAENEMY_H
