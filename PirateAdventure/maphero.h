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
>>>>>>> 87dd27675240c67b0ea9a10611c9d6c5bf4dfb0d
