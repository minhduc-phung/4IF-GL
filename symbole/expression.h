#ifndef EXPRESSION_H
#define EXPRESSION_H
#include "symbole.h"

class Expression : public Symbole
{
protected:
    int valeur;

public:
    Expression() : Symbole() {}
    Expression(int valeur) : Symbole(EXPR), valeur(valeur) {}
    virtual ~Expression() {}
    virtual int eval();
};

#endif

