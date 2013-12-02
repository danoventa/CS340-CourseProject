#ifndef SHOTGUN_H
#define SHOTGUN_H
#include "attackmove.h"


class shotgun: public attackmove
{
public:
  shotgun(int dam);
  virtual QString getString();
  virtual QImage getImage();
  virtual void doAttack(int hpanel, Enemy *Enemies[]);
};



#endif // SHOTGUN_H