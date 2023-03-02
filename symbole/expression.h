#include "symbole.h"
#include <map>

class Expression : public Symbole
{
protected:
    int valeur;

public:
    Expression(int valeur) : Symbole(EXPR), valeur(valeur) {}
    virtual ~Expression() {}
    virtual double eval();
};

class ExpressionBinaire : public Expression
{
protected:
    Expression *op1;
    Expression *op2;

public:
    ExpressionBinaire(Expression *op1, Expression *op2) : Expression(0), op1(op1), op2(op2) {}
    virtual ~ExpressionBinaire() {}
    double eval();
    virtual void Affiche();
};

class ExpressionConstante : public Expression
{
}