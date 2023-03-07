/*************************************************************************
                           Etat 1
                             -------------------
    début                : 28 février 2023
    copyright            : (C) 2023 par NGO Ngoc Minh, PHUNG Minh
*************************************************************************/

#ifndef E1_H
#define E1_H

#include "etat.h"
#include "../automate.h"

class E1 : public Etat
{
public:
    E1();
    ~E1();
    void print() const;
    bool transition(Automate &automate, Symbole *symbole);
};

#endif