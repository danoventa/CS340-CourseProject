#include "item.h"

Item::Item(int attackIN, int defenseIn)
{
    attack = attackIN;
    defense = defenseIN;
}

void Item::modifyItem(int incAttack, int incDefense)
{
    attack += incAttack;
    defense += incDefense;
}
