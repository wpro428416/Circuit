#include "Button.h"
#include "Element.h"

Button::Button(){
    count=0;
    n=0;
}
Button::~Button(){}
void Button::on(){
    for(count=0;count<n;){
        element[count++]->on();
    }
}
void Button::off(){
    for(count=0;count<n;){
        element[count++]->off();
    }
}

void Button::convey(Element * ele){
    this->element[count++]=ele;
    n++;
}
