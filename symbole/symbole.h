/*************************************************************************
                           Symbole
                             -------------------
    début                : 28 février 2023
    copyright            : (C) 2023 par NGO Ngoc Minh, PHUNG Minh
*************************************************************************/

#pragma once
#ifndef SYMBOLE_H
#define SYMBOLE_H
#include <string>
#include <iostream>
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
   Symbole(int i);
   Symbole();
   virtual ~Symbole();
   operator int() const { return ident; }
   virtual int eval();
   int getIdent();
   virtual void Affiche();

protected:
   int ident;
};

#endif