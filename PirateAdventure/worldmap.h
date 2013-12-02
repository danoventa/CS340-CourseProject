#ifndef WORLDMAP_H
#define WORLDMAP_H

#include <QDialog>
#include <QtCore>
#include <QtGui>
#include <QGraphicsView>
#include <QGraphicsItem>

#include "maphero.h"

namespace Ui {
class worldmap;
}

class worldmap : public QDialog
{
    Q_OBJECT

public:
    explicit worldmap(QWidget *parent = 0);
    ~worldmap();

private slots:
    void on_pushButton_clicked();

private:
    Ui::worldmap *ui;
    QGraphicsScene *scene;
    QGraphicsEllipseItem *ellipse;
    QGraphicsRectItem *rectangle;
    MapHero *hero;
};

#endif // WORLDMAP_H