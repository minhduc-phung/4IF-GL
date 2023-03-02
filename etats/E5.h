#include "etat.h"

class E5 : public Etat
{
public:
    E5();
    ~E5();
    void print() const;
    bool transition(Automate &automate, Symbole *symbole);
};