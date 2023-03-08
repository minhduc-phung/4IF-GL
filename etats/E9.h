/*************************************************************************
                           Etat 9
                             -------------------
    début                : 28 février 2023
    copyright            : (C) 2023 par NGO Ngoc Minh, PHUNG Minh
*************************************************************************/

#ifndef E9_H
#define E9_H
#include "etat.h"
#include "../automate.h"

class E9 : public Etat
{
public:
    E9();
    ~E9();
    void print() const;
    bool transition(Automate &automate, Symbole *symbole);
};

#endif