#include "cannon.h"

Cannon::Cannon(int startHP, int cx, int cy): Enemy(startHP,cx,cy)
{
  ctr=3;

}
void Cannon::doTurn(Character *Hero)
{
  if(Alive==false){
      return;
    }
  if(ctr>1){
      ctr--;
    }else{
      if(Hero->getPanel()==xpos){
          Hero->getDamaged(20);
        }
      ctr=3;
    }

}
QImage Cannon::getPic(){
    return QImage("images/cann.png");
}
