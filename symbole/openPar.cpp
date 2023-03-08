#include "openPar.h"

OpenPar::OpenPar() : ExpressionConstante() {
    this->ident = OPENPAR;
}

int OpenPar::eval()
{
    return this->valeur;
}

void OpenPar::Affiche()
{
    cout << "OpenPar";
}