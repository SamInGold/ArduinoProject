/*
  touchSensor.h - Library for the touch sensor.
  Created by Samuel Charbonneau, December 27, 2018.
*/
#ifndef TouchSensor_h
#define TouchSensor_h

#include "Arduino.h"

class TouchSensor
{
  public:
    TouchSensor(uint8_t pin);
    bool isTouch();
  private:
  uint8_t pin_;
};

#endif