/*************************************************************************
                           ClosePar
                             -------------------
    début                : 28 février 2023
    copyright            : (C) 2023 par NGO Ngoc Minh, PHUNG Minh
*************************************************************************/

#ifndef CLOSEPAR_H
#define CLOSEPAR_H
#include "expressionConstante.h"

class ClosePar : public ExpressionConstante {
    public:
        ClosePar();
        ~ClosePar() {}
        int eval();
        void Affiche();
};

#endif