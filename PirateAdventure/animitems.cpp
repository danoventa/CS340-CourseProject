#include "animitems.h"


/**
 * @brief animItems::animItems initializes hits to zero
 * \fn animItems()
 *
 */
animItems::animItems()
{
    /*hits={
        {0,0,0},
        {0,0,0},
        {0,0,0}
    };*/
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            hits[i][j]=0;
        }
    }

}
/**
 * @brief animItems::reset, resets the hits to zero
 */
void animItems::reset(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            hits[i][j]=0;
        }
    }
}
/**
 * @brief animItems::getHit takes i and j and gets hit from hits[]
 * @param i
 * @param j
 * @return
 */
int animItems::getHit(int i, int j){
    return hits[i][j];
}
/**
 * @brief animItems::setHit sets hit to value (should be 1 for hit)
 * @param i
 * @param j
 * @param val
 */
void animItems::setHit(int i, int j, int val){
    hits[j][i]=val;
}
