#include "SJ_SmartThings.h"

ST_Switch::ST_Switch() {}

void ST_Switch::begin(String id, byte pin) {
    //Set switch id. If "sw" not provided, prepend it.
    _id = id;
    if (id.indexOf("sw") < 0) _id = "sw" + _id;
    
    //Set pin
    _pin = pin;
    
    return;
}

void ST_Switch::capability(String command) {
    if (command == "on") _on();
    else if (command == "off") _off();
    
    return;
}

void ST_Switch::capability(String command, String id) {
    if (id == _id) capability(command);
    
    return;
}

//Turn switch on
void ST_Switch::_on() {
    pinMode(_pin, OUTPUT);
    digitalWrite(_pin, HIGH);

    return;
}

//Turn switch off
void ST_Switch::_off() {
    pinMode(_pin, OUTPUT);
    digitalWrite(_pin, LOW);

    return;
}
