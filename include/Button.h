#ifndef BUTTON_H_INCLUDED
#define BUTTON_H_INCLUDED

#include "Element.h"

class Button:public Element
{
public:
    Button();
    ~Button();
    void on();
    void off();
    void convey(Element * ele);
private:
    Element * element[100];
    int count;
    int n;
protected:
};



#endif // BUTTON_H_INCLUDED
