#include "application.h"

#ifndef SJ_SmartThings_h
#define SJ_SmartThings_h

class ST_Switch {
    public:
        ST_Switch();
        void begin(String id, byte pin);
        void capability(String command);
        void capability(String command, String id);
        
    private:
        void _on();
        void _off();
        byte _pin;
        String _id;
};

#endif
