#ifndef PAUSE_H
#define PAUSE_H
#include "Character.h"
#include "worldmap.h"
#include <QtGui>
#include <QMainWindow>
#include <QKeyEvent>
#include <QEvent>

#include "attacklist.h"

namespace Ui {
class Pause;
}

class Pause : public QMainWindow
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
    //Character character;
};

#endif // PAUSE_H
