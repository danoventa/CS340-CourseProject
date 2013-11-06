#include "attackmove.h"
//#include <stdio.h>
//#include <stdlib.h>


attackmove::attackmove(int dam)
{
  damage=dam;
}

attackmove::~attackmove(){

}







void attackmove::doAttack(int hpanel, Enemy* Enemies[3]){
  //int hpanel=Hero->getPanel();
  Enemy *closest=  NULL;
  for(int i=0;i<3;i++){
      if(Enemies[i]->getX()==hpanel){
          closest=Enemies[i];
        }
    }
  if(closest==NULL){
      return;
    }else{
      closest->getDamaged(damage);
    }
}
