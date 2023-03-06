#ifndef ETAT_H
#define ETAT_H
#include "../automate.h"
#include "../symbole/symbole.h"
#include <iostream>
using namespace std;
class Automate;

class Etat
{
public:
    Etat();
    virtual ~Etat();
    virtual void print() const;
    virtual bool transition(Automate &automate, Symbole *symbole);
};

#endif