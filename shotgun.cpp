#include "shotgun.h"


shotgun::shotgun(int dam):attackmove(dam)
{

}
void shotgun::doAttack(int hpanel, Enemy *Enemies[]){
  Enemy *closest=  NULL;
  Enemy *behind= NULL;
  for(int i=0;i<3;i++){
      if(Enemies[i]->getX()==hpanel){
          closest=Enemies[i];
        }
    }
  if(closest==NULL){
      return;
    }
  for(int i=0;i<3;i++){
      if(closest!=Enemies[i] &&Enemies[i]->getX()==closest->getX() &&Enemies[i]->getY()==closest->getY()-1){
          behind=Enemies[i];
        }
    }
      closest->getDamaged(damage);
      if(behind==NULL){
          return;
        }
      behind->getDamaged(damage);


}

QString shotgun::getString(){
    QString ret ="Shotgun: ";

    ret.append(QString::number(damage));
    return ret;
}
