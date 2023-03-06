#include "E9.h"

E9::E9() : Etat()
{
}

E9::~E9()
{
}

void E9::print() const
{
    cout << "Etat 9" << endl;
}

bool E9::transition(Automate &automate, Symbole *s)
{
    this->print();
    switch (*s)
    {
    case PLUS:
        automate.reduction(3, s);
        break;
    case MULT:
        automate.reduction(3, s);
        break;
    case CLOSEPAR:
        automate.reduction(3, s);
        break;
    case FIN:
        automate.reduction(3, s);
        break;
    default:
        return false;
    }
    return true;
}
