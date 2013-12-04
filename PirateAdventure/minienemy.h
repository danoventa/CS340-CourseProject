#ifndef MINIENEMY_H
#define MINIENEMY_H

#include <QGraphicsItem>

class MiniEnemy : public QGraphicsItem
{
public:
    MiniEnemy(QGraphicsItem *parent = NULL);
    ~MiniEnemy();
protected:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    QRectF boundingRect() const;

private:
    int enemyImage;
};

#endif // MINIENEMY_H
