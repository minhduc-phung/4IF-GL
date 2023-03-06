#ifndef E4_H
#define E4_H
#include "etat.h"

class E4 : public Etat
{
public:
    E4();
    ~E4();
    void print() const;
    bool transition(Automate &automate, Symbole *symbole);
};

#endif