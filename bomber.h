#ifndef BOMBER_H
#define BOMBER_H
#include "Enemy.h"

class Bomber: public Enemy
{
private:
  int ctr;
public:
  Bomber(int startHP, int cx, int cy);
  //void doAttack(*);
  virtual void doTurn(Character *Hero);
  void switchSide();
  void dropBomb(Character *Hero);
  int getCtr();
};

#endif // BOMBER_H
