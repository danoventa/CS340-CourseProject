#include "bomber.h"

Bomber::Bomber(int startHP, int cx, int cy): Enemy(startHP,cx,cy)
{
  ctr=3;

}
void Bomber::doTurn(Character *Hero)
{
  if(Alive==false){
      return;
    }
  if(ctr==3 ||ctr==2){
      switchSide();
      ctr--;

    }else{
      dropBomb(Hero);
      ctr=3;
    }

}
int Bomber::getCtr(){
  return ctr;
}

void Bomber::switchSide(){
  if(xpos<2){
      xpos=2;
    }else{
      xpos=0;
    }
}
void Bomber::dropBomb(Character *Hero){
  if(xpos==0){
      if(Hero->getPanel()==0 || Hero->getPanel()==1){
          Hero->getDamaged(5);
        }
    }else if(xpos==2){
      if(Hero->getPanel()==2 || Hero->getPanel()==1){
          Hero->getDamaged(5);
        }
    }
}
