/*************************************************************************
                           Expression Binaire
                             -------------------
    début                : 28 février 2023
    copyright            : (C) 2023 par NGO Ngoc Minh, PHUNG Minh
*************************************************************************/

#ifndef EXPRESSION_BINAIRE_H
#define EXPRESSION_BINAIRE_H
#include "expression.h"

class ExpressionBinaire : public Expression
{
protected:
    Expression *op1;
    Expression *op2;

public:
    ExpressionBinaire(Expression *op1, Expression *op2) : Expression(0), op1(op1), op2(op2) {}
    ExpressionBinaire() : Expression() {}
    virtual ~ExpressionBinaire() {}
    virtual int eval() {}
    virtual void Affiche() {}
};

#endif