#ifndef PAUSE_H
#define PAUSE_H
#include "character.h"
#include "worldmap.h"
#include <QtGui>
#include <QDialog>
#include <QtCore>
#include <QKeyEvent>
#include <QEvent>

// #include "attacklist.h"

namespace Ui {
class Pause;
}

class Pause : public QDialog
{
    Q_OBJECT

    
public:
    explicit Pause(QWidget *parent = 0);//I think this is not suppose to be zero
    ~Pause();
    
private slots:
    void on_Resume_clicked();

    void on_Exit_clicked();

    void on_ShotGun_clicked();


private:
    Ui::Pause *ui;
    //character pirate;
};

#endif // PAUSE_H
