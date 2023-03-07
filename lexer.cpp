#include "lexer.h"

Symbole *Lexer::Consulter()
{
   if (!tampon)
   {
      if (tete == flux.length())
         tampon = new Fin();
      else
      {
         switch (flux[tete])
         {
         case '(':
            tampon = new OpenPar();
            tete++;
            break;
         case ')':
            tampon = new ClosePar();
            tete++;
            break;
         case '*':
            tampon = new Mult();
            tete++;
            break;
         case '+':
            tampon = new Plus();
            tete++;
            break;
         default:
            if (flux[tete] <= '9' && flux[tete] >= '0')
            {
               int resultat = flux[tete] - '0';
               int i = 1;
               while (flux[tete + i] <= '9' && flux[tete + i] >= '0')
               {
                  resultat = resultat * 10 + (flux[tete + i] - '0');
                  i++;
               }
               tete = tete + i;
               tampon = new Entier(resultat);
            }
            else
            {
               tampon = new Symbole(ERREUR);
               tete++;
            }
         }
      }
   }
   return tampon;
}

void Lexer::PutSymbol(Symbole *s)
{
   switch (*s)
   {
   case PLUS:
      flux = '+' + flux;
      break;
   case MULT:
      flux = '*' + flux;
      break;
   case CLOSEPAR:
      flux = ')' + flux;
      break;
   case OPENPAR:
      flux = '(' + flux;
      break;
   }
}

void Lexer::Avancer()
{
   tampon = nullptr;
}
