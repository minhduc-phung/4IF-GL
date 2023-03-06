#include "mult.h"

Mult::Mult(Expression* op1, Expression* op2) : ExpressionBinaire(op1, op2) {
    this->ident = MULT;
}

Mult::~Mult() {

}