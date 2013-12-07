#include "Character.h"
#include "attackmove.h"

/**
 * @brief Character::Character main hero character used in battle
 * @param startHP
 * @param sexp
 * @param cdam
 * @param cpanel
 */
Character::Character(int startHP, int sexp, int cdam, int cpanel)
{
  currentHP=startHP;
  maxHP=startHP;

  //level=slevel;
  exp=sexp;
  attDam=cdam;
  //nextexp=snextexp;
  canmove=false;
  heropanel=cpanel;
  inTurn=false;
  gold=0;
  //mainAttack=new attackmove(10);



}
Character::~Character(){

}

/**
 * @brief Character::getDamaged
 * @param damage
 * @return
 */
bool Character::getDamaged(int damage){
  if(currentHP>damage){
      currentHP-=damage;
      return false;
    }else{
      currentHP=0;
      return true;
    }

}

/**
 * @brief Character::getRestored if already at max, stays at max
 * @param recovery
 */
void Character::getRestored(int recovery){
  if(currentHP+recovery>maxHP){
      currentHP=maxHP;
    }else{
      currentHP+=recovery;

    }

}

/**
 * @brief Character::getGold
 * @return gold character has
 */
int Character::getGold(){
    return gold;

}

/**
 * @brief Character::incGold
 * @param amt of gold to increase
 */
void Character::incGold(int amt){
    gold+=amt;
}

int Character::getHP(){
  return currentHP;

}
/*
int Character::getexp(){
  return exp;

}
*/
int Character::getmaxHP(){
  return maxHP;
}
/*
int Character::getlevel(){
  return level;
}
*/
/*
int Character::getnextexp(){
  return nextexp;
}
*/


void Character::setHP(int nhp){
  currentHP=nhp;

}

void Character::setexp(int nexp){
  exp=nexp;

}
void Character::setmaxHP(int nmaxhp){
  maxHP=nmaxhp;
}
/*
void Character::setlevel(int nlevel){
  level=nlevel;
}
*/
/*
void Character::setnextexp(int nnextexp){
  nextexp=nnextexp;
}
*/

void Character::setCanMove(bool cmove){
  canmove=cmove;

}
bool Character::getCanMove(){
  return canmove;
}
int Character::getPanel(){
  return heropanel;
}
void Character::setPanel(int cpanel){
  heropanel=cpanel;
}
bool Character::isTurn(){
  return inTurn;
}
void Character::setTurn(bool cturn){
  inTurn=cturn;
}
int Character::getDam(){
  return attDam;
}
void Character::setDam(int cdam){
  attDam=cdam;
}

/*
 attackmove* Character::getAttack(){
   return mainAttack;
 }
 */

