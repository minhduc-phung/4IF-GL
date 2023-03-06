#include "symbole.h"

Symbole::Symbole(int i) : ident(i) {

}

Symbole::~Symbole() {

}

int Symbole::eval() {
   return 0;
}

void Symbole::Affiche() {
   cout << Etiquettes[ident];
}

