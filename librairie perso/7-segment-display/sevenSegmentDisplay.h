/*
  SevenSegmentDisplay.h - Library for display on 7 segment.
  Created by Samuel Charbonneau, December 27, 2018.
*/
#ifndef SevenSegmentDisplay_h
#define SevenSegmentDisplay_h

#include "Arduino.h"

class SevenSegmentDisplay
{
  public:
    SevenSegmentDisplay(uint8_t pin1, uint8_t pin2, uint8_t pin4, uint8_t pin5, uint8_t pin6, uint8_t pin7, uint8_t pin9, uint8_t pin10);
    void display(uint8_t whatToDisplay);
    void roll(bool clockWise, int durationInMs);
    void infinity(bool clockWise, int durationInMs);
    void turnOff();
  private:
    void turnOnSegment(char segment);
    uint8_t a_,b_,c_,d_,e_,f_,g_,point_;
};

#endif