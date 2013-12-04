#ifndef TOEND_H
#define TOEND_H

#include <QGraphicsItem>

class ToEnd : public QGraphicsItem
{
public:
    ToEnd(QGraphicsItem *parent = NULL);
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    ~ToEnd();
protected:
    QRectF boundingRect() const;
};

#endif // TOEND_H
