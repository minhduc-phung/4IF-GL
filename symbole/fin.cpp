#include "fin.h"

Fin::Fin() : ExpressionConstante() {
    this->ident = FIN;
}

int Fin::eval()
{
    return this->valeur;
}

void Fin::Affiche()
{
    cout << "FinDeTexte";
}