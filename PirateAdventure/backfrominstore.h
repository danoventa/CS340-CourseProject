#ifndef BACKFROMINSTORE_H
#define BACKFROMINSTORE_H

#include <QGraphicsItem>

class BackFromInStore : public QGraphicsItem
{
public:
    BackFromInStore(QGraphicsItem *parent = NULL);
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    ~BackFromInStore();
protected:
    QRectF boundingRect() const;
};

#endif // BACKFROMINSTORE_H
