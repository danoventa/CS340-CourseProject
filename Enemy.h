
#ifndef ENEMY_H
#define ENEMY_H

#include "QObject"
#include "Character.h"

class Enemy: public QObject
{
public:
  Enemy(int startHP, int cx, int cy);
  virtual ~Enemy();
  void setX(int cx);
  void setY(int cy);
  void setTurn(bool cmove);
  void setMove(bool cmove);
  int getX();
  int getY();
  bool getMove();
  bool getTurn();
  int getHP();
  int getmaxHP();
  bool getAlive();
  void setAlive(bool isAlive);
  virtual void doTurn(Character *Hero);
  bool getDamaged(int damage);
  void getRestored(int recovery);
//signals:
  //void Died();
//public slots:
  //virtual void doTurn(Character *Hero);

protected:
  int xpos;
  int ypos;
  int currentHP;
  int maxHP;
  int inTurn;
  int canmove;
  bool Alive;


};

#endif // ENEMY_H
