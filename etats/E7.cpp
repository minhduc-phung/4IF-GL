#include "E7.h"
#include "E5.h"

E7::E7() : Etat()
{
}

E7::~E7()
{
}

void E7::print() const
{
    cout << "Etat 7" << endl;
}

bool E7::transition(Automate &automate, Symbole *s)
{
    this->print();
    switch (*s)
    {
    case PLUS:
        automate.reduction(3, s);
        break;
    case MULT:
        automate.decalage(s, new E5());
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
