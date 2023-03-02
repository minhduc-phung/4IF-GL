#include <vector>
#include "symbole.h"
#include "lexer.h"
#include <string>
class Etat;
class E0;
using namespace std;

class Automate
{
public:
    Automate(string s){};
    ~Automate(){};
    void eval();
    void decalage(Symbole *s, Etat *e);
    void reduction(int n, Symbole *s);

protected:
    vector<Symbole *> pileSymboles;
    vector<Etat *> pileEtats;
    Lexer *lexer;
    Symbole *symbole;
};
