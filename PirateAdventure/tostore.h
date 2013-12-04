#ifndef TOSTORE_H
#define TOSTORE_H

#include <QGraphicsItem>

class ToStore : public QGraphicsItem
{
public:
    ToStore(QGraphicsItem *parent = NULL);
     void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    ~ToStore();
protected:
    QRectF boundingRect() const;
};

#endif // TOSTORE_H
