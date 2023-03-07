/*************************************************************************
                           Etat 8
                             -------------------
    début                : 28 février 2023
    copyright            : (C) 2023 par NGO Ngoc Minh, PHUNG Minh
*************************************************************************/

#ifndef E8_H
#define E8_H
#include "etat.h"
#include "../automate.h"

class E8 : public Etat
{
public:
    E8();
    ~E8();
    void print() const;
    bool transition(Automate &automate, Symbole *symbole);
};

#endif