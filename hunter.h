#ifndef HUNTER_H
#define HUNTER_H
#include "Enemy.h"

class Hunter: public Enemy
{
private:
  bool lef;
public:
  Hunter(int startHP, int cx, int cy, bool cup);
  virtual void doTurn(Character *Hero);
  bool getLef();
  void setLef(bool clef);
};

#endif // HUNTER_H
