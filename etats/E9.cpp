#include "E9.h"
#include "../symbole/plus.h"
#include "../symbole/mult.h"
#include "../symbole/closePar.h"
#include "../symbole/fin.h"

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
        automate.reduction(3, new Plus());
        break;
    case MULT:
        automate.reduction(3, new Mult());
        break;
    case CLOSEPAR:
        automate.reduction(3, new ClosePar());
        break;
    case FIN:
        automate.reduction(3, new Fin());
        break;
    default:
        return false;
    }
    return true;
}
