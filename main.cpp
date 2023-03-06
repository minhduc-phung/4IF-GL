#include <iostream>
#include "lexer.h"
#include "automate.h"

using namespace std;


int main(void) {
   string chaine("(1+34)*123");

   /* Symbole * s;
   while(*(s=l.Consulter())!=FIN) {
      s->Affiche();
      cout<<endl;
      l.Avancer();
   } */
   Automate automate(chaine);
   automate.eval();
   return 0;
}

