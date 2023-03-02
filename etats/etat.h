#pragma once
#include "automate.h"
#include "symbole.h"

class Etat
{
public:
    Etat(string name);
    virtual ~Etat();
    virtual void print() const;
    virtual bool transition(Automate &automate, Symbole *symbole);

protected:
    string name;
};