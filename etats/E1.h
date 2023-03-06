#ifndef E1_H
#define E1_H

#include "etat.h"

class E1 : public Etat
{
public:
    E1();
    ~E1();
    void print() const;
    bool transition(Automate &automate, Symbole *symbole);
};

#endif