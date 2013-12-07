#ifndef MAPHERO_H
#define MAPHERO_H

#include <QGraphicsItem>
#include <QGraphicsView>
#include "pause.h"
#include "mapenemy.h"
#include "minienemy.h"
#include "megaenemy.h"
#include "tostore.h"
#include "instore.h"
#include "toend.h"
#include "backfromend.h"
#include "backfrominstore.h"
#include "backfromstore.h"
#include "attackframe.h"

class MapHero : public QGraphicsItem
{
public:
    MapHero(QGraphicsItem *parent = 0); // NULL
    Pause *pause;
    MapEnemy *enemon;
    MiniEnemy *minemy;
    MegaEnemy *menemy;
    ToStore *stora;
    InStore *inStora;
    MapHero *hero;
    ToEnd *mEnd;
    BackFromStore *oStore;
    BackFromInStore *oInStore;
    BackFromEnd *oEnd;
    int heroImage;
    int iAmIn;
    int foMin;
    int foEnem;
    int foMen;
    QGraphicsView *graph;
    QGraphicsScene *begin;
    QGraphicsScene *mid;
    QGraphicsScene *end;
    QGraphicsScene *store;

    attackframe* battle;
    void pointToEnemy(MapEnemy *enemy, MiniEnemy *miniEnemy, MegaEnemy *megaEnemy);
    void pointToStore(ToStore *storay);
    void pointToMe(MapHero *hera);
    void pointToInStore(InStore *inStoray);
    void pointToEnd(ToEnd *toEnd);
    void pointFromInStore(BackFromInStore *fromInStore);
    void pointFromStore(BackFromStore *fromStore);
    void pointFromEnd(BackFromEnd *fromEnd);
    void getGraphicsView(QGraphicsView *graphs);
    void getGraphicsScene(QGraphicsScene *begs, QGraphicsScene *mids,
                          QGraphicsScene *ends, QGraphicsScene *stores);

protected:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    QRectF boundingRect() const;
    virtual void keyPressEvent(QKeyEvent *event);

private:
    void movesToMapStore();
    void movesToStore();
    void movesToEnd();
    void returnsFromInStore();
    void returnsFromMapStore();
    void returnsFromEnd();
    void doBattle();
};

#endif //MAPHERO_H
