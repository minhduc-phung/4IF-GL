/*************************************************************************
                           Etat 3
                             -------------------
    début                : 28 février 2023
    copyright            : (C) 2023 par NGO Ngoc Minh, PHUNG Minh
*************************************************************************/

#ifndef E3_H
#define E3_H
#include "etat.h"
#include "../automate.h"

class E3 : public Etat
{
public:
    E3();
    ~E3();
    void print() const;
    bool transition(Automate &automate, Symbole *symbole);
};

#endif