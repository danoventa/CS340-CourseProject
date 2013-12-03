#ifndef PAUSE_H
#define PAUSE_H
<<<<<<< HEAD

#include <QDialog>
=======
#include "character.h"
#include "worldmap.h"
#include <QtGui>
#include <QDialog>
#include <QtCore>
#include <QKeyEvent>
#include <QEvent>

// #include "attacklist.h"
>>>>>>> 9f3e80f7f57c8da55947a08f95ce7de759b80837

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
