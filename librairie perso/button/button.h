/*
  button.h - Library for the button.
  Created by Samuel Charbonneau, December 27, 2018.
*/
#ifndef Button_h
#define Button_h

#include "Arduino.h"

class Button
{
  public:
    Button(uint8_t pin);
    bool isPressed();
  private:
  uint8_t pin_;
};

#endif