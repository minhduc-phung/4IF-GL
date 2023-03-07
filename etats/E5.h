/*************************************************************************
                           Etat 5
                             -------------------
    début                : 28 février 2023
    copyright            : (C) 2023 par NGO Ngoc Minh, PHUNG Minh
*************************************************************************/

#ifndef E5_H
#define E5_H
#include "etat.h"
#include "../automate.h"

class E5 : public Etat
{
public:
    E5();
    ~E5();
    void print() const;
    bool transition(Automate &automate, Symbole *symbole);
};

#endif