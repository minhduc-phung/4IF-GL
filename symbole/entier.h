#ifndef ENTIER_H
#define ENTIER_H
#include "symbole.h"

class Entier : public Symbole
{
public:
    Entier(int v);
    ~Entier() {}
    void Affiche(); 

protected:
    int valeur;
};

#endif