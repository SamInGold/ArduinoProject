/*
  ultraSonic.h - Library for the ultrasonic sensor.
  Created by Samuel Charbonneau, December 28, 2018.
*/
#ifndef Button_h
#define Button_h

#include "Arduino.h"

class UltraSonic
{
  public:
    UltraSonic(uint8_t pinTrigger, uint8_t pinEcho);
    unsigned int getDistanceInCm();
    unsigned int getDistanceInInch();
  private:
    uint8_t pinTrigger_, pinEcho_;
    unsigned int calculatePingDuration();
};

#endif