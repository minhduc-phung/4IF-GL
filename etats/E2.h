#include "etat.h"

class E2 : public Etat
{
public:
    E2();
    ~E2();
    void print() const;
    bool transition(Automate &automate, Symbole *symbole);
};