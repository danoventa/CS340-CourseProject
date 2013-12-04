#ifndef INSTORE_H
#define INSTORE_H

#include <QGraphicsItem>

class InStore : public QGraphicsItem
{
public:
    InStore(QGraphicsItem *parent = NULL);
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    ~InStore();
protected:
        QRectF boundingRect() const;

};

#endif // INSTORE_H
