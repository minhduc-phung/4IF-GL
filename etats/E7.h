/*************************************************************************
                           Etat 7
                             -------------------
    début                : 28 février 2023
    copyright            : (C) 2023 par NGO Ngoc Minh, PHUNG Minh
*************************************************************************/

#ifndef E7_H
#define E7_H
#include "etat.h"
#include "../automate.h"

class E7 : public Etat
{
public:
    E7();
    ~E7();
    void print() const;
    bool transition(Automate &automate, Symbole *symbole);
};

#endif