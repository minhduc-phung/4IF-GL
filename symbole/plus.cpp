#include "plus.h"

Plus::Plus(Expression *op1, Expression *op2) : ExpressionBinaire(op1, op2)
{
    this->ident = PLUS;
}

Plus::Plus() : ExpressionBinaire()
{
    this->ident = PLUS;
    this->op1 = nullptr;
    this->op2 = nullptr;
}

int Plus::eval()
{
    if (this->op1 == nullptr && this->op2 == nullptr)
    {
        return this->valeur;
    }
    else
    {
        return op1->eval() + op2->eval();
    }
}

void Plus::Affiche()
{
    cout << "Plus";
}