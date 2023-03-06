#include "E8.h"

E8::E8() : Etat()
{
}

E8::~E8()
{
}

void E8::print() const
{
    cout << "Etat 8" << endl;
}

bool E8::transition(Automate &automate, Symbole *s)
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
