#include "E8.h"
#include "../symbole/plus.h"
#include "../symbole/mult.h"
#include "../symbole/closePar.h"
#include "../symbole/fin.h"

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
