/*************************************************************************
                           Etat 4
                             -------------------
    début                : 28 février 2023
    copyright            : (C) 2023 par NGO Ngoc Minh, PHUNG Minh
*************************************************************************/

#ifndef E4_H
#define E4_H
#include "etat.h"
#include "../automate.h"

class E4 : public Etat
{
public:
    E4();
    ~E4();
    void print() const;
    bool transition(Automate &automate, Symbole *symbole);
};

#endif