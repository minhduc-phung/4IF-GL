#include "E2.h"
#include "E3.h"
#include "E6.h"

E2::E2() : Etat()
{
}

E2::~E2()
{
}

void E2::print() const
{
    cout << "Etat 2" << endl;
}

bool E2::transition(Automate &automate, Symbole *s)
{
    this->print();
    switch (*s)
    {
    case INT:
        automate.decalage(s, new E3());
        break;
    case OPENPAR:
        automate.decalage(s, new E2());
        break;
    case EXPR:
        automate.decalage(s, new E6());
        break;
    default:
        return false;
    }
    return true;
}
