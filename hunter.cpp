#include "hunter.h"

Hunter::Hunter(int startHP, int cx, int cy, bool clef): Enemy(startHP,cx,cy)
{
  lef=clef;
}
bool Hunter::getLef(){
  return lef;
}
void Hunter::setLef(bool clef){
  lef=clef;

}

void Hunter::doTurn(Character *Hero){
  if(Alive==false){
      return;
    }
  if(xpos==0){
      lef=false;
      xpos=1;
    }else if(xpos==1){
      if(lef){
          xpos=0;
        }else{
          xpos=2;
        }
    }else if(xpos==2){
      lef=true;
      xpos=1;
    }
  if(xpos==Hero->getPanel()){
      Hero->getDamaged(5);
    }

}
