#include "etat.h"

class E6 : public Etat
{
public:
    E6();
    ~E6();
    void print() const;
    bool transition(Automate &automate, Symbole *symbole);
};