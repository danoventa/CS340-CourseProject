#include "attackmove.h"
//#include <stdio.h>
//#include <stdlib.h>



attackmove::attackmove(int dam)
{
  damage=dam;
}

attackmove::~attackmove(){

}
/**
 * @brief attackmove::getString
 * @return string of name, implemented in all inheritences includes damage
 */
QString attackmove::getString(){
    QString ret ="Gun: ";

    ret.append(QString::number(damage));
    return ret;
}






//void attackmove::doAttack(int hpanel, Enemy* Enemies[3]){
/**
 * @brief attackmove::doAttack does it's attack, implemented for all enemies
 * @param hpanel, hero's panel
 * @param Enemies, enemies array
 * @param anim hit animation grid
 */
void attackmove::doAttack(int hpanel, Enemy* Enemies[3],animItems* anim){
  //int hpanel=Hero->getPanel();
  Enemy *closest=  NULL;

  for(int i=0;i<3;i++){

      if(Enemies[i]->getX()==hpanel){
          if(closest==NULL){
              closest=Enemies[i];
          }else{
              if(Enemies[i]->getY()<closest->getY()){
                  closest=Enemies[i];
              }
          }


        }
    }
  if(closest==NULL){
      return;
    }else{
      anim->reset();
      anim->setHit(closest->getX(),closest->getY(),1);

      closest->getDamaged(damage);
    }
}

/**
 * @brief attackmove::getHover
 * @param hpanel
 * @param Enemies
 * @param anim
 */
void attackmove::getHover(int hpanel, Enemy* Enemies[3],animItems* anim){
    Enemy* closest=NULL;
    for(int i=0;i<3;i++){

        if(Enemies[i]->getX()==hpanel){
            if(closest==NULL){
                closest=Enemies[i];
            }else{
                if(Enemies[i]->getY()<closest->getY()){
                    closest=Enemies[i];
                }
            }


          }
      }
    if(closest==NULL){
        return;
      }else{
        anim->reset();
        anim->setHit(closest->getX(),closest->getY(),1);
    }
}

/**
 * @brief attackmove::getImage
 * @return
 */
QImage attackmove::getImage(){
     return QImage(":/images/images/gun.png");
}










