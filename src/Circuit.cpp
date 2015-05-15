#include "Circuit.h"

Circuit::Circuit(){}
Circuit::~Circuit(){}
void Circuit::setSwitch(Button * button){
    this->button=button;
}
void Circuit::append(Element * ele){
    button->convey(ele);
}
