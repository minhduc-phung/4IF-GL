#include "symbole.h"

Symbole::Symbole(int i) : ident(i) {

}

Symbole::Symbole() {
   
}

Symbole::~Symbole() {

}

int Symbole::eval() {
   return -1;
}

void Symbole::Affiche() {
   cout << Etiquettes[ident];
}

