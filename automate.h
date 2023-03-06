#ifndef AUTOMATE_H
#define AUTOMATE_H
#include <vector>
#include "./symbole/symbole.h"
#include "lexer.h"
#include "./etats/etat.h"
#include "./etats/E0.h"
#include <string>
using namespace std;
class Etat;

class Automate
{
public:
    Automate(string s);
    ~Automate();
    void eval();
    void decalage(Symbole *s, Etat *e);
    void reduction(int n, Symbole *s);

protected:
    vector<Symbole *> pileSymboles;
    vector<Etat *> pileEtats;
    Lexer *lexer;
    Symbole *symbole;
};

#endif
