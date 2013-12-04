#ifndef BACKFROMEND_H
#define BACKFROMEND_H

#include <QGraphicsItem>

class BackFromEnd : public QGraphicsItem
{
public:
    BackFromEnd(QGraphicsItem *parent = NULL);
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    ~BackFromEnd();
protected:
    QRectF boundingRect() const;
};

#endif // BACKFROMEND_H
