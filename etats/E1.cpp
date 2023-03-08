#include "E1.h"
#include "E4.h"
#include "E5.h"

E1::E1()
{
}

E1::~E1()
{
}

void E1::print() const
{
    cout << "Etat 1" << endl;
}

bool E1::transition(Automate &automate, Symbole *s)
{
    this->print();
    switch (*s)
    {
    case PLUS:
        automate.decalage(s, new E4());
        break;
    case MULT:
        automate.decalage(s, new E5());
        break;
    case FIN:
        return false;
        break;
    default:
        return false;
    }
    return true;
}
