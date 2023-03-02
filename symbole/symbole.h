#pragma once

#include <string>
using namespace std;

enum Identificateurs
{
   EXPR,
   OPENPAR,
   CLOSEPAR,
   PLUS,
   MULT,
   INT,
   FIN,
   ERREUR
};

const string Etiquettes[] = {"EXPR", "OPENPAR", "CLOSEPAR", "PLUS", "MULT", "INT", "FIN", "ERREUR"};

class Symbole
{
public:
   Symbole(int i) : ident(i) {}
   virtual ~Symbole() {}
   operator int() const { return ident; }
   virtual void Affiche();

protected:
   int ident;
};
