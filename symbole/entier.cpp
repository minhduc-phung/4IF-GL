#include "entier.h"

Entier::Entier(int v) : Symbole(INT) {
    this->valeur = v;
}

void Entier::Affiche()
{
    Symbole::Affiche();
    cout << "(" << this->valeur << ")" << endl;
}