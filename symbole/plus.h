#ifndef PLUS_H
#define PLUS_H
#include "expressionBinaire.h"

class Plus : public ExpressionBinaire {
    public:
        Plus(Expression* op1, Expression* op2);
        Plus() : ExpressionBinaire() {}
        ~Plus() {} 
};

#endif