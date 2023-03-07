/*************************************************************************
                           Expression Constante
                             -------------------
    début                : 28 février 2023
    copyright            : (C) 2023 par NGO Ngoc Minh, PHUNG Minh
*************************************************************************/

#ifndef EXPRESSION_CONSTANTE_H
#define EXPRESSION_CONSTANTE_H
#include "expression.h"

class ExpressionConstante : public Expression
{
public:
    ExpressionConstante() : Expression(-1) {}
    virtual ~ExpressionConstante() {}
    virtual int eval() {}
    virtual void Affiche() {}
};

#endif