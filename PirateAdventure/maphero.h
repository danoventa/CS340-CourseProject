#ifndef MAPHERO_H
#define MAPHERO_H

#include <QGraphicsItem>

class MapHero : public QGraphicsItem
{
public:
    MapHero(QGraphicsItem *parent = NULL);

protected:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    QRectF boundingRect() const;

    virtual void keyPressEvent(QKeyEvent *event);

private:
    int heroImage;
};

#endif //MAPHERO_H
