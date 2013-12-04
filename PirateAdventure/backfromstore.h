#ifndef BACKFROMSTORE_H
#define BACKFROMSTORE_H

#include <QGraphicsItem>

class BackFromStore : public QGraphicsItem
{
public:
    BackFromStore(QGraphicsItem *parent = NULL);
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    ~BackFromStore();
protected:
    QRectF boundingRect() const;
};

#endif // BACKFROMSTORE_H
