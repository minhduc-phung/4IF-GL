#include "E0.h"
#include "../symbole/symbole.h"

E0::E0() : Etat()
{
}

E0::E0()
{
}

bool E0::transition(Automate &automate, Symbole *symbole)
{
    this->print();
    switch (*symbole)
    {
    case EXPR:
        automate.decalage(symbole, new E1());
        break;
    case INT:
        automate.decalage(symbole, new E3());
        break;
    case OPENPAR:
        automate.decalage(symbole, new E2());
        break;
    default:
        return false;
    }
    return true;
}