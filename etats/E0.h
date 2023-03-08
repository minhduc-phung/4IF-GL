/*************************************************************************
                           Etat 0
                             -------------------
    début                : 28 février 2023
    copyright            : (C) 2023 par NGO Ngoc Minh, PHUNG Minh
*************************************************************************/

#ifndef E0_H
#define E0_H
#include "etat.h"

class E0 : public Etat {
public:
    E0();
    ~E0();
    void print() const;
    bool transition(Automate &automate, Symbole *s);
};

#endif