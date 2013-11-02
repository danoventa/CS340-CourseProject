#ifndef ROSIE_H
#define ROSIE_H

//#include <iostream>
#include "Assistants.h"

// using namespace std;

class Rosie {
public:
    Rosie();
    int RandomR();
    void greet();
    void affirm();
    void reportError(string s, int n);

private:
    Assistants *assistant;
    std::string lastName;
};

#endif //ROSIE_H
