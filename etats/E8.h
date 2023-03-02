#include "etat.h"

class E8 : public Etat
{
public:
    E8();
    ~E8();
    void print() const;
    bool transition(Automate &automate, Symbole *symbole);
};