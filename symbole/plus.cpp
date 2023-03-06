#include "plus.h"

Plus::Plus(Expression* op1, Expression* op2) : ExpressionBinaire(op1, op2) {
    this->ident = PLUS;
}