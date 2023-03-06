#include "E5.h"
#include "E2.h"
#include "E3.h"
#include "E8.h"

E5::E5() : Etat()
{
}

E5::~E5()
{
}

void E5::print() const
{
    cout << "Etat 5" << endl;
}

bool E5::transition(Automate &automate, Symbole *s)
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
        automate.decalage(s, new E8());
        break;
    default:
        return false;
    }
    return true;
}
