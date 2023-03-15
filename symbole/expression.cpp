#include "expression.h"

Expression::Expression() : Symbole() {
    this->valeur = -1;
}

int Expression::eval() {
    return this->valeur;
}