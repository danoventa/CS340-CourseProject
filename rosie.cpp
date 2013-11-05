#include "Rosie.h"

Rosie::Rosie(string name){
    assistant = new Assistants();
    myName = name;
}

void Rosie::greet()
{
    cout << "Hi, I'm Rosie. What's your name?" << endl << "\t";
    lastName = assistant->getAName();
}

void Rosie::affirm()
{
    cout << "Let me see what I can do for you," << lastName << "? :)" << endl;
}

void Rosie::reportError(string s, int n)
{
    cout << endl << "Gosh, how embarassing!" << endl;
    cout << "I'm sorry " << lastName
                << ", but there's an issue with your " << s << ". :(" << endl;
    exit(n);
}

int Rosie::RandomR()
{
    return 0;
}
