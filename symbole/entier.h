/*************************************************************************
                           Entier
                             -------------------
    début                : 28 février 2023
    copyright            : (C) 2023 par NGO Ngoc Minh, PHUNG Minh
*************************************************************************/

#ifndef ENTIER_H
#define ENTIER_H
#include "symbole.h"

class Entier : public Symbole
{
public:
    Entier(int v);
    ~Entier() {}
    void Affiche(); 
    int eval();

protected:
    int valeur;
};

#endif