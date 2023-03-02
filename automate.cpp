#include "automate.h"
#include "etat.h"
#include "./etats/E0.h"

Automate::Automate(string s)
{
    lexer = new Lexer(s);
    pileEtats.push_back(new E0());
}

void Automate::eval() {}

void Automate::decalage(Symbole *s, Etat *e)
{
    pileSymboles.push_back(s);
    pileEtats.push_back(e);
}

void Automate::reduction(int n, Symbole *s)
{
    for (int i = 0; i < n; i++)
    {
        pileSymboles.pop_back();
        pileEtats.pop_back();
    }
    pileSymboles.push_back(s);
    pileEtats.back()->transition(*this, s);
}

Automate::~Automate()
{
    delete lexer;
}