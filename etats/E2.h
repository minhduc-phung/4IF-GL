/*************************************************************************
                           Etat 2
                             -------------------
    début                : 28 février 2023
    copyright            : (C) 2023 par NGO Ngoc Minh, PHUNG Minh
*************************************************************************/

#ifndef E2_H
#define E2_H
#include "etat.h"
#include "../automate.h"

class E2 : public Etat
{
public:
    E2();
    ~E2();
    void print() const;
    bool transition(Automate &automate, Symbole *symbole);
};

#endif