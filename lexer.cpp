#include "lexer.h"

Symbole *Lexer::Consulter()
{
   if (!tampon)
   {

      if (tete == flux.length())
         tampon = new Symbole(FIN);
      else
      {
         switch (flux[tete])
         {
         case '(':
            tampon = new Symbole(OPENPAR);
            tete++;
            break;
         case ')':
            tampon = new Symbole(CLOSEPAR);
            tete++;
            break;
         case '*':
            tampon = new Symbole(MULT);
            tete++;
            break;
         case '+':
            tampon = new Symbole(PLUS);
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
            }
         }
      }
   }
   return tampon;
}

Symbole *Lexer::GetNext(bool eat)
{
   int nbCharLus = 0;
   bool charTrouve = false;
   Symbole *symbole;

   while (!charTrouve)
   {
      char currentChar = flux[nbCharLus];
      charTrouve = true;

      if (currentChar == '+')
      {
         symbole = new Plus();
         nbCharLus++;
      }
      else if (currentChar == '*')
      {
         symbole = new Mult();
         nbCharLus++;
      }
      else if (currentChar == '(')
      {
         symbole = new OpenPar();
         nbCharLus++;
      }
      else if (currentChar == ')')
      {
         symbole = new ClosePar();
         nbCharLus++;
      }
      else if (currentChar >= 48 && currentChar <= 58)
      {
         // cout << "Read a number" << endl;
         // cout << "char " << currentChar << endl;

         string number(1, currentChar);
         // cout << "number " << number << endl;

         nbCharLus++;

         while (flux[nbCharLus] >= 48 && flux[nbCharLus] <= 58)
         {
            // cout << "char" << chaine[nbCharLus] << endl;
            number += flux[nbCharLus];
            // cout << "nombre" << number << endl;
            nbCharLus++;
         }

         symbole = new Entier(atoi(number.c_str()));
      }
      else if (currentChar == '\0')
      {
         symbole = new Fin();
      }
      else
      {
         nbCharLus++;
         charTrouve = false;
      }
   }

   if (eat)
   {
      flux = flux.substr(nbCharLus);
   }

   // cout << symbole->avoirJeton() << endl;
   return symbole;
}

void Lexer::Avancer()
{
   tampon = nullptr;
}
