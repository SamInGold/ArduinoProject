/*
  RGBLight.cpp - Library for the RGB light.
  Created by Samuel Charbonneau, December 28, 2018.
*/

#include "Arduino.h"
#include "RGBLight.h"

RGBLight::RGBLight(const uint8_t& r, const uint8_t& g, const uint8_t& b):pinR_(r),pinG_(g),pinB_(b){
    pinMode(pinR_, OUTPUT);
    pinMode(pinG_, OUTPUT);
    pinMode(pinB_, OUTPUT);
}

void RGBLight::setColor(const uint8_t& r,const uint8_t& g,const uint8_t& b){
  setRed(r);
  setGreen(g);
  setBlue(b);
}


void RGBLight::setRed(const uint8_t & red){
   r_ = 255 - red;
  applyColor();
}

void RGBLight::setGreen(const uint8_t & green){
   g_ = 255 - green;
  applyColor();
}

void RGBLight::setBlue(const uint8_t & blue){
   b_ = 255 - blue;
  applyColor();
}


uint8_t RGBLight::getRed() const{
  return 255-r_;
}

uint8_t RGBLight::getGreen() const{
  return 255-g_;
}

uint8_t RGBLight::getBlue() const{
  return 255-b_;
}

void RGBLight::applyColor(){
  analogWrite(pinR_, r_);
  analogWrite(pinG_, g_);
  analogWrite(pinB_, b_);  
}