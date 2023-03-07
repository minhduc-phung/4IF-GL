/*************************************************************************
                           Plus
                             -------------------
    début                : 28 février 2023
    copyright            : (C) 2023 par NGO Ngoc Minh, PHUNG Minh
*************************************************************************/

#ifndef PLUS_H
#define PLUS_H
#include "expressionBinaire.h"

class Plus : public ExpressionBinaire {
    public:
        Plus(Expression* op1, Expression* op2);
        Plus();
        ~Plus() {} 
        int eval();
        void Affiche();
};

#endif