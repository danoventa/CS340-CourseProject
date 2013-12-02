#ifndef BATTLEPAUSE_H
#define BATTLEPAUSE_H

#include <QMainWindow>

namespace Ui {
class BattlePause;
}

class BattlePause : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit BattlePause(QWidget *parent = 0);
    ~BattlePause();
    
private slots:
    void on_pushButton_clicked();

private:
    Ui::BattlePause *ui;
};

#endif // BATTLEPAUSE_H
