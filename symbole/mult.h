/*************************************************************************
                           Mult
                             -------------------
    début                : 28 février 2023
    copyright            : (C) 2023 par NGO Ngoc Minh, PHUNG Minh
*************************************************************************/

#ifndef MULT_H
#define MULT_H
#include "expressionBinaire.h"

class Mult : public ExpressionBinaire {
    public:
        Mult();
        Mult(Expression* op1, Expression* op2);
        ~Mult();
        int eval();
        void Affiche();
};

#endif