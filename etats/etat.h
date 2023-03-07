/*************************************************************************
                           Etat
                             -------------------
    début                : 28 février 2023
    copyright            : (C) 2023 par NGO Ngoc Minh, PHUNG Minh
*************************************************************************/

#pragma once
#include "../symbole/symbole.h"
#include "../automate.h"
#include <iostream>
using namespace std;
class Automate;

class Etat
{
public:
    Etat();
    virtual ~Etat();
    virtual void print() const;
    virtual bool transition(Automate &automate, Symbole *s);
};
