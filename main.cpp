#include <iostream>
#include "lexer.h"
#include "automate.h"

using namespace std;


int main() {
   string chaine("1+2*33");
   
   /*Lexer l(chaine);
   Symbole * s;
   while(*(s=l.Consulter())!=FIN) {
      s->Affiche();
      cout<< "   " << s->eval() << endl;
      l.Avancer();
   } */
   Automate automate(chaine);
   automate.eval();
   return 0;
}

