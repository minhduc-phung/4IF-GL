#ifndef MULT_H
#define MULT_H
#include "expressionBinaire.h"

class Mult : public ExpressionBinaire {
    public:
        Mult() : ExpressionBinaire() {}
        Mult(Expression* op1, Expression* op2);
        ~Mult();
};

#endif