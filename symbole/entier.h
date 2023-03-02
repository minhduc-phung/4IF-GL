#include "symbole.h"

class Entier : public Symbole
{
public:
    Entier(int v) : Symbole(INT), valeur(v) {}
    ~Entier() {}
    virtual void Affiche();

protected:
    int valeur;
};