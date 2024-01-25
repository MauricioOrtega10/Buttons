#pragma once

#ifndef _Buttons_h
#define _Buttons_h

#include <ButtonsConfig.h>


class Buttons 
{
public:
    Buttons(unsigned int pin_1, unsigned int pin_2, unsigned int pin_3, unsigned int pin_4, unsigned int pin_5);
    ~Buttons();
    int read(unsigned int button);

private:
    unsigned int button_1_pin;
    unsigned int button_2_pin;
    unsigned int button_3_pin;
    unsigned int button_4_pin;
    unsigned int button_5_pin;
};

extern Buttons buttons;

#endif