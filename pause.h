#ifndef PAUSE_H
#define PAUSE_H

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
    
private:
    Ui::Pause *ui;
};

#endif // PAUSE_H
