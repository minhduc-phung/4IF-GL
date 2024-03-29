/*************************************************************************
                           Lexer
                             -------------------
    début                : 28 février 2023
    copyright            : (C) 2023 par NGO Ngoc Minh, PHUNG Minh
*************************************************************************/

#pragma once
#ifndef LEXER_H
#define LEXER_H
#include <string>
#include <cstdlib>
#include "./symbole/entier.h"
#include "./symbole/mult.h"
#include "./symbole/plus.h"
#include "./symbole/openPar.h"
#include "./symbole/closePar.h"
#include "./symbole/fin.h"
#include "./symbole/entier.h"
using namespace std;

class Lexer {
   public:
      Lexer(string s) : flux(s), tete(0), tampon(nullptr) { }
      ~Lexer() { }
      void PutSymbol(Symbole *s);
      Symbole * Consulter();
      void Avancer();

   protected:
      string flux;
      int tete;
      Symbole * tampon;
};

#endif
