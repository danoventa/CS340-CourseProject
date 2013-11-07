#ifndef PAUSE_H
#define PAUSE_H
#include "characters.h"
#include "battle.h"
#include "worldmap.h"


#include <QMainWindow>

namespace Ui {
class Pause;
}

class Pause : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Pause(QWidget *parent = 0);
    ~Pause();
    
private slots:
    void on_Resume_clicked();

    void on_Exit_clicked();

private:
    Ui::Pause *ui;
};

#endif // PAUSE_H
