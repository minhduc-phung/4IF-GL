/*************************************************************************
                           Etat 6
                             -------------------
    début                : 28 février 2023
    copyright            : (C) 2023 par NGO Ngoc Minh, PHUNG Minh
*************************************************************************/

#ifndef E6_H
#define E6_H
#include "etat.h"
#include "../automate.h"

class E6 : public Etat
{
public:
    E6();
    ~E6();
    void print() const;
    bool transition(Automate &automate, Symbole *symbole);
};

#endif