/*
  button.cpp - Library for the button.
  Created by Samuel Charbonneau, December 27, 2018.
*/

#include "Arduino.h"
#include "button.h"

Button::Button(uint8_t pin):pin_(pin){
    pinMode(pin_,INPUT);
}

bool Button::isPressed(){
    if(digitalRead(pin_)==HIGH){
        delay(10);
          if(digitalRead(pin_)==HIGH){
            return true;
        }
    }
    return false;
}