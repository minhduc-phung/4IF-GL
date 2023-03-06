#ifndef EXPRESSION_CONSTANTE_H
#define EXPRESSION_CONSTANTE_H
#include "expression.h"

class ExpressionConstante : public Expression
{
    public:
        ExpressionConstante() : Expression(0) {}
        virtual ~ExpressionConstante() {}

};

#endif