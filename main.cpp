#include <iostream>
using namespace std;

#include "Circuit.h"
#include "Element.h"
#include "Lamp.h"
#include "Fan.h"
#include "Button.h"

int main(){

    Circuit circuit;
    Button button;
    Fan fan;
    Lamp lamp;

    circuit.setSwitch(&button);
    circuit.append(&fan);
    circuit.append(&lamp);

    button.on();
    button.off();

    return 0;
}
