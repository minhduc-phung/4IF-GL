/*************************************************************************
                           Fin
                             -------------------
    début                : 28 février 2023
    copyright            : (C) 2023 par NGO Ngoc Minh, PHUNG Minh
*************************************************************************/

#ifndef FIN_H
#define FIN_H
#include "expressionConstante.h"

class Fin : public ExpressionConstante {
    public:
        Fin();
        ~Fin() {}
        int eval();
        void Affiche();
};

#endif