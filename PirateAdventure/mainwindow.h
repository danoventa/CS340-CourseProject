#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "worldmap.h"

//USED FOR BATTLE
#include "QKeyEvent"
#include "Character.h"
#include "Enemy.h"
#include "QTextBrowser"
#include "QLabel"
#include "attackmove.h"
#include "bomber.h"
#include "cannon.h"
#include "hunter.h"
#include "attacklist.h"
#include "QTimer"
//#include "battledata.h"
//END INCludes for battle

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::MainWindow *ui;
    worldmap wm;
    //battle variables and functions
    Character* Hero;
    Character* setUpHero();
    //Character* getHero();
    //Enemy* Enemies[3];
    Enemy* Enemies[3];
    //QLabel* Tiles[3][3];
    attackmove* mainAttack;
    attackList* aL;
    QLabel* Labels[3];
    bool inBattle;
    bool inOver;
    bool inStory;

     void paintEvent(QPaintEvent *);
     void drawOverWorld(QPainter* g);


    /* BATTLE FUNCTIONS-- not implemented yet in this version
    void paintEvent(QPaintEvent *);
    void drawOverWorld(QPainter* g);
    void startBattle(char etype1, int ehp1, int ex1, int ey1,char etype2, int ehp2, int ex2, int ey2, char etype3, int ehp3, int ex3, int ey3);
    void doAttack();
    void startHeroTurn();
    void endHeroTurn();
    void startEnemyTurn();
    void endEnemyTurn();
    void moveCharLeft();
    void moveCharRight();
    void doSpecialAttack();
    void endBattle();
    bool on_enemyDead();

    void drawBattle(QPainter* g);
    void drawAttackList(QPainter* g);
    void drawHP(QPainter* g);
    void lostBattle();
    END battle functions*/

protected:
   bool eventFilter(QObject *obj, QEvent *event);

};

#endif // MAINWINDOW_H
