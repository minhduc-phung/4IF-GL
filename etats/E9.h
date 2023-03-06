#ifndef E9_H
#define E9_H
#include "etat.h"

class E9 : public Etat
{
public:
    E9();
    ~E9();
    void print() const;
    bool transition(Automate &automate, Symbole *symbole);
};

#endif