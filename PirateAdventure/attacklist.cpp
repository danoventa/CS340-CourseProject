#include "attacklist.h"

/**
 * @brief attackList::attackList all alists null
 */
attackList::attackList()
{
  for(int i=0; i<5; i++){
      alist[i]=NULL;
      used[i]=false;
    }
  curr=-1;
  full=0;
}
/*
void attackList::initList(char c1, int d1, char c2, int d2, char c3, int d3, char c4, int d4){
  alist[0]=

}
*/
/**
 * @brief attackList::getFull
 * @return number of list when full
 */
int attackList::getFull(){
    return full;
}
/**
 * @brief attackList::changeMove changes move at pos, used to customise attacks
 * @param pos
 * @param am
 */
void attackList::changeMove(int pos, attackmove* am){
  if(alist[pos]==NULL){
      full++;
      curr++;
    }
  alist[pos]=am;

}

/**
 * @brief attackList::addMove add attack if theres room
 * @param am
 */
void attackList::addMove(attackmove* am){
  if(full>4){
      return;
    }

  full++;
  curr++;
  alist[curr]=am;

}

/**
 * @brief attackList::getAttack gets bottom attack
 * @return
 */
attackmove* attackList::getAttack(){
  if(full>0 && curr>-1){
      if(used[curr]){
          //used, move on to next one
          curr--;
          return getAttack();
      }else{
          used[curr]=true;
        return alist[curr--];
      }

  }else{
      return NULL;
    }

}
/**
 * @brief attackList::reset resets for next battle
 */
void attackList::reset(){
    for(int i=0; i<5; i++){
        //alist[i]=NULL;
        used[i]=false;
      }
    curr=full-1;
}
//used for printing list

/**
 * @brief attackList::getAttackAt gets attack for printing the list
 * @param pos
 * @return
 */
attackmove* attackList::getAttackAt(int pos){
    if(pos>-1 && pos<full){

        return alist[pos];
    }
    return NULL;
}
/**
 * @brief attackList::getCurr
 * @return current attack position
 */
int attackList::getCurr(){
    return curr;
}



/**
 * @brief attackList::takeMoveAt used for taking moves specifically, should take out moves using used
 * @param pos
 * @return
 */
attackmove* attackList::takeMoveAt(int pos){
    if(pos>-1 && pos<=full && !used[pos]){
        used[pos]=true;

        return alist[pos];

    }
    return NULL;
}
/**
 * @brief attackList::isUsedAt
 * @param pos
 * @return is attack used at pos
 */
bool attackList::isUsedAt(int pos){
    return used[pos];
}
