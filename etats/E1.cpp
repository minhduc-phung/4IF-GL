#include "E1.h"
#include "../symbole/symbole.h"

E1::E1()
{
}

E1::~E1()
{
}

void E1::print() const
{
    Etat::print();
}

bool E1::transition(Automate &automate, Symbole *s)
{
    this->print();
    switch (*s)
    {
    case PLUS:
        automate.decalage(s, new E4("etat4"));
        break;
    case MULT:
        automate.decalage(s, new E5("etat5"));
        break;
    case FIN:
        return false;
        break;
    default:
        return false;
    }
    return true;
}
