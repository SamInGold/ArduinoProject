/*
  touchSensor.h - Library for the touch sensor.
  Created by Samuel Charbonneau, December 27, 2018.
*/

#include "Arduino.h"
#include "touchSensor.h"

TouchSensor::TouchSensor(uint8_t pin):pin_(pin){
    pinMode(pin_,INPUT);
}

bool TouchSensor::isTouch(){
    if(digitalRead(pin_)==HIGH){
        delay(10);
          if(digitalRead(pin_)==HIGH){
            return true;
        }
    }
    return false;
}