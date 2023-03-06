#include "E3.h"

E3::E3() : Etat()
{
}

E3::~E3()
{
}

void E3::print() const
{
    cout << "Etat 3" << endl;
}

bool E3::transition(Automate &automate, Symbole *s)
{
    this->print();
    switch (*s)
    {
    case PLUS:
        automate.reduction(1, s);
        break;
    case MULT:
        automate.reduction(1, s);
        break;
    case CLOSEPAR:
        automate.reduction(1, s);
        break;
    case FIN:
        automate.reduction(1, s);
        break;
    default:
        return false;
    }
    return true;
}
