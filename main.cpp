#include "world.h"

int main (int argc, char **argv)
{
    Story begin = new Story();
    Level1 lvl1 = new Level1();

    begin->Start();
    lvl1->Run(); /* will call the worldmap to create */


}
