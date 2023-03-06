#include "automate.h"

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
        Symbole *symbole = lexer->GetNext(true);
        retourTransition = pileEtats.back()->transition(*this, symbole);
    }

    cout << "Fin de la lecture" << endl;
    for (int i = 0; i < pileSymboles.size(); ++i)
        cout << pileSymboles[i]->eval() << endl;
}

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