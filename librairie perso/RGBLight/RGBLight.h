/*
  RGBLight.h - Library for the RGB light.
  Created by Samuel Charbonneau, December 28, 2018.
*/
#ifndef RGBLight_h
#define RGBLight_h

#include "Arduino.h"

class RGBLight
{
  public:
    RGBLight(const uint8_t& r, const uint8_t& g, const uint8_t& b);
    void setColor(const uint8_t& r,const uint8_t& g,const uint8_t& b);

    void setRed(const uint8_t & red);
    void setGreen(const uint8_t & green);
    void setBlue(const uint8_t & blue);

    uint8_t getRed() const;
    uint8_t getGreen() const;
    uint8_t getBlue() const;
    
  private:
    void applyColor();
    uint8_t pinR_,pinG_,pinB_, r_,g_,b_;
};

#endif