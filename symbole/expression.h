/*************************************************************************
                           Expression
                             -------------------
    début                : 28 février 2023
    copyright            : (C) 2023 par NGO Ngoc Minh, PHUNG Minh
*************************************************************************/

#ifndef EXPRESSION_H
#define EXPRESSION_H
#include "symbole.h"

class Expression : public Symbole
{
protected:
    int valeur;

public:
    Expression();
    Expression(int valeur) : Symbole(EXPR), valeur(valeur) {}
    virtual ~Expression() {}
    virtual int eval();
};

#endif

