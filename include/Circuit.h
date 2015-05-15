#ifndef CIRCUIT_H_INCLUDED
#define CIRCUIT_H_INCLUDED

#include "Element.h"
#include "Button.h"

class Circuit
{
public:
    Circuit();
    ~Circuit();
    void setSwitch(Button * button);
    void append(Element * ele);
private:
    Button * button;
    int count;
protected:
};



#endif // CIRCUIT_H_INCLUDED
