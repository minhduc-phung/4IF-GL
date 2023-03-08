#include "E4.h"
#include "E2.h"
#include "E3.h"
#include "E7.h"

E4::E4() : Etat()
{
}

E4::~E4()
{
}

void E4::print() const
{
    cout << "Etat 4" << endl;
}

bool E4::transition(Automate &automate, Symbole *s)
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
        automate.decalage(s, new E7());
        break;
    default:
        return false;
    }
    return true;
}
