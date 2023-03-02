#include "etat.h"

class E0 : public Etat
{
public:
    E0();
    ~E0();
    void print() const;
    bool transition(Automate &automate, Symbole *symbole);
};