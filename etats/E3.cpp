#include "E3.h"
#include "../symbole/plus.h"
#include "../symbole/mult.h"
#include "../symbole/closePar.h"
#include "../symbole/fin.h"

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
        automate.reduction(1, new Plus());
        break;
    case MULT:
        automate.reduction(1, new Mult());
        break;
    case CLOSEPAR:
        automate.reduction(1, new ClosePar());
        break;
    case FIN:
        automate.reduction(1, new Fin());
        break;
    default:
        return false;
    }
    return true;
}
