#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
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

  //void on_HeroHealthBar_valueChanged(int value);

  //void on_am1Button_released();

 // void on_enemyHealthBar_valueChanged(int value);
  //bool eventFilter(QObject *object, QEvent *e);
  void keyReleaseEvent(QKeyEvent *ke);

  //void on_expBar_valueChanged(int value);



private:
  Ui::MainWindow *ui;
  Character* Hero;
  Character* setUpHero();
  //Character* getHero();
  Enemy* Enemies[3];
  //QLabel* Tiles[3][3];
  attackmove* mainAttack;
  attackList* aL;
  QLabel* Labels[3];
  void paintEvent(QPaintEvent *);
  //QTimer* mainclock;
  //QTextBrowser*** Tiles;
  void doAttack();
  void updateArena();
  void startHeroTurn();
  void endHeroTurn();
  void startEnemyTurn();
  void endEnemyTurn();
  void moveCharLeft();
  void moveCharRight();
  void doSpecialAttack();
  void endBattle();
  bool on_enemyDead();


protected:
   bool eventFilter(QObject *obj, QEvent *event);

};

#endif // MAINWINDOW_H
