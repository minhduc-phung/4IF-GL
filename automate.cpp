#include "automate.h"
#include "./etats/E0.h"
#include "./symbole/plus.h"
#include "./symbole/mult.h"
#include <algorithm>

Automate::Automate(string s)
{
    lexer = new Lexer(s);
    pileEtats.push_back(new E0());
}

void Automate::eval()
{
    bool retourTransition = true;
    while (retourTransition)
    {
        Symbole *symbole = lexer->Consulter();
        // symbole->Affiche();
        // cout << endl;
        retourTransition = pileEtats.back()->transition(*this, symbole);
        lexer->Avancer();
    }

    cout << "Valeur calculee: " << pileSymboles[0]->eval() << endl;
    
}

void Automate::decalage(Symbole *s, Etat *e)
{
    pileSymboles.push_back(s);
    pileEtats.push_back(e);
}

void Automate::reduction(int n, Symbole *s)
{
    vector<Symbole *> popedList;

    for (int i = 0; i < n; i++)
    {
        delete pileEtats.back();
        pileEtats.pop_back();
        popedList.push_back(pileSymboles.back());
        pileSymboles.pop_back();
    }

    reverse(popedList.begin(), popedList.end());
    int val = calcul(popedList);

    pileEtats.back()->transition(*this, new Expression(val));
    lexer->PutSymbol(s);
}

int Automate::calcul(vector<Symbole *> tab)
{
    if (tab.size() == 1)
    {
        return tab[0]->eval();
    }
    else if (tab.size() == 3)
    {
        if (tab[0]->getIdent() == OPENPAR)
        {
            return tab[1]->eval();
        }
        else if (tab[1]->getIdent() == PLUS)
        {   
            return Plus((Expression*) tab[0], (Expression*) tab[2]).eval();
        }
        else if (tab[1]->getIdent() == MULT)
        {
            return Mult((Expression*) tab[0], (Expression*) tab[2]).eval();
        }
    }
    return -1;
}

Automate::~Automate()
{
    delete lexer;
}