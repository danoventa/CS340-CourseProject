#ifndef WORLDMAP_H
#define WORLDMAP_H

#include <QDialog>
#include <QtCore>
#include <QtGui>
#include <QGraphicsView>
#include <QGraphicsItem>

#include "maphero.h"
#include "mapenemy.h"
#include "instore.h"
#include "tostore.h"
#include "toend.h"
#include "backfromstore.h"
#include "backfrominstore.h"
#include "backfromend.h"
#include "pause.h"
#include "minienemy.h"
#include "megaenemy.h"

namespace Ui {
class worldmap;
}

class worldmap : public QDialog
{
    Q_OBJECT

public:
    explicit worldmap(QWidget *parent = 0);
    ~worldmap();
    Ui::worldmap *ui;
    QGraphicsScene *scene1;
    QGraphicsScene *scene2;
    QGraphicsScene *scene3;
    QGraphicsScene *scene4;


    MapHero *hero;
    MapEnemy *enemy;
    MiniEnemy *miniEnemy;
    MegaEnemy *megaEnemy;
    Pause *pause;
    ToStore *mStore;
    InStore *nStore;
    ToEnd *toEnd;
    BackFromInStore *fromInStore;
    BackFromStore *fromStore;
    BackFromEnd *fromEnd;

private slots:
    void on_pushButton_clicked();
    void makeBeginning(QPen unPen, QBrush unBrush);
    void makeMiddle(QPen unPen, QBrush unBrush);
    void makeEnding(QPen unPen, QBrush unBrush);
    void makeStore(QPen unPen, QBrush unBrush);
    // virtual void keyPressEvent(QKeyEvent *event);

private:

};

#endif // WORLDMAP_H
