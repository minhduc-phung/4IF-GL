/*************************************************************************
                           OpenPar
                             -------------------
    début                : 28 février 2023
    copyright            : (C) 2023 par NGO Ngoc Minh, PHUNG Minh
*************************************************************************/

#ifndef OPENPAR_H
#define OPENPAR_H
#include "expressionConstante.h"

class OpenPar : public ExpressionConstante {
    public:
        OpenPar();
        ~OpenPar() {}
        int eval();
        void Affiche();
};

#endif