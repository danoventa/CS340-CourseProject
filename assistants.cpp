#include "assistants.h"

Assistants::Assistants(){
    seed(time(NULL));

}

string Assistants::getAName()
{
    string name;
    getline(cin, name);

    return name;
}

int Assistants::getRandomInt(){

}
