#include "closePar.h"

ClosePar::ClosePar() : ExpressionConstante()
{
    this->ident = CLOSEPAR;
}

int ClosePar::eval()
{
    return this->valeur;
}

void ClosePar::Affiche()
{
    cout << "ClosePar";
}