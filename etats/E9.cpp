#include "E9.h"
#include "../automate.h"

E9::E9(string name) : Etat(name)
{
}

E9::~E9()
{
}

bool E9::transition(Automate &automate, Symbole *symbole)
{
    this->print();
    switch (*symbole)
    {
    case PLUS:
        automate.reduction(4, new Plus());
        break;
    case MULT:
        automate.reduction(4, new Mult());
        break;
    case FIN:
        automate.reduction(4, new Fin());
        break;
    case CLOSEPAR:
        automate.reduction(4, new ClosePar());
        break;
    default:
        return false;
        break;
    }
    return true;
}