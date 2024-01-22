#include <Buttons.h>
#include "Arduino.h"

Buttons::Buttons(unsigned int pin_1, unsigned int pin_2, unsigned int pin_3, unsigned int pin_4, unsigned int pin_5)
{
    button_1_pin = pin_1;
    button_2_pin = pin_2;
    button_3_pin = pin_3;
    button_4_pin = pin_4;
    button_5_pin = pin_5;
    pinMode(button_1_pin, INPUT_PULLUP);
    pinMode(button_2_pin, INPUT_PULLUP);
    pinMode(button_3_pin, INPUT_PULLUP);
    pinMode(button_4_pin, INPUT_PULLUP);
    pinMode(button_5_pin, INPUT_PULLUP);
}

Buttons::~Buttons()
{

}

int Buttons::read(unsigned int button)
{
    int reading = 0;
    switch (button)
    {
    case 1:
    reading = digitalRead(button_1_pin);
    break;

    case 2:
    reading = digitalRead(button_2_pin);
    break;

    case 3:
    reading = digitalRead(button_3_pin);
    break;

    case 4:
    reading = digitalRead(button_4_pin);
    break;

    case 5:
    reading = digitalRead(button_5_pin);
    break;

    default:
    reading = -1;
    break;

    }

    return reading;
}

Buttons buttons(Button_1_PIN, Button_2_PIN, Button_3_PIN, Button_4_PIN, Button_5_PIN);