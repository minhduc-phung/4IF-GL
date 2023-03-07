#include "mult.h"

Mult::Mult(Expression* op1, Expression* op2) : ExpressionBinaire(op1, op2) {
    this->ident = MULT;
}

Mult::Mult() : ExpressionBinaire() {
    this->ident = MULT;
    this->op1 = nullptr;
    this->op2 = nullptr;
}

Mult::~Mult() {

}

int Mult::eval()
{
    if (this->op1 == nullptr && this->op2 == nullptr)
    {
        return this->valeur;
    }
    else
    {
        return op1->eval() * op2->eval();
    }
}

void Mult::Affiche()
{
    cout << "Mult";
}