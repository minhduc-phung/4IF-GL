#ifndef E3_H
#define E3_H
#include "etat.h"

class E3 : public Etat
{
public:
    E3();
    ~E3();
    void print() const;
    bool transition(Automate &automate, Symbole *symbole);
};

#endif