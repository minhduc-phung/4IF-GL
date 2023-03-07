/*************************************************************************
                           Automate
                             -------------------
    début                : 28 février 2023
    copyright            : (C) 2023 par NGO Ngoc Minh, PHUNG Minh
*************************************************************************/

#pragma once
#include <vector>
#include "./symbole/symbole.h"
#include "./etats/etat.h"
#include "lexer.h"
#include <string>
using namespace std;
class Etat;

class Automate
{
public:
    Automate(string s);
    ~Automate();
    void eval();
    int calcul(vector<Symbole *> tab);
    void decalage(Symbole *s, Etat *e);
    void reduction(int n, Symbole *s);

protected:
    vector<Symbole*> pileSymboles;
    vector<Etat*> pileEtats;
    Lexer *lexer;
    Symbole *symbole;
};

