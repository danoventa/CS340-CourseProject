#ifndef CANNON_H
#define CANNON_H
#include "Enemy.h"

class Cannon: public Enemy
{
private:
  int ctr;
public:
  Cannon(int startHP, int cx, int cy);
  virtual void doTurn(Character *Hero);
  int getCtr();
  virtual QImage getPic();
};

#endif // CANNON_H
