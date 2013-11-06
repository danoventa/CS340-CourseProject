#include "pouch.h"

Pouch::Pouch()
{

}

void Pouch::addItem(Item itemIn)
{
    items.push_back(itemIn);
}

void Pouch::dropItem(int itemNum)
{
    /* no longer display in menu */
    item[itemNum].~Item();
}

void Pouch::equipItem(Item itemEquip)
{
    /* add to hero stats */
}

void Pouch::unequipItem(int itemNum)
{
   /* equip this item */
   /* remove stats from here */
}

void Pouch::changeEquip(int itemNum1, int itemNum2)
{
    /*change from item 1 to item 2 */
    /* remove stats from item 2 */
    /* add stats from item 1 */
}
