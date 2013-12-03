#ifndef PAUSE_H
#define PAUSE_H

#include <QDialog>
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
    explicit Pause(QWidget *parent = 0);
    ~Pause();
    
private:
    Ui::Pause *ui;
};

#endif // PAUSE_H
