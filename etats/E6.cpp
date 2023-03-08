#include "E6.h"
#include "E4.h"
#include "E5.h"
#include "E9.h"

E6::E6() : Etat()
{
}

E6::~E6()
{
}

void E6::print() const
{
    cout << "Etat 6" << endl;
}

bool E6::transition(Automate &automate, Symbole *s)
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
    case CLOSEPAR:
        automate.decalage(s, new E9());
        break;
    default:
        return false;
    }
    return true;
}
