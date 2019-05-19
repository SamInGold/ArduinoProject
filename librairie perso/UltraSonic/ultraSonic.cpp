/*
  ultraSonic.cpp - Library for the ultrasonic sensor.
  Created by Samuel Charbonneau, December 28, 2018.
*/

#include "Arduino.h"
#include "ultraSonic.h"

UltraSonic::UltraSonic(uint8_t& pinTrigger, uint8_t& pinEcho):pinTrigger_(pinTrigger), pinEcho_(pinEcho){
    pinMode(pinTrigger_, OUTPUT );
    pinMode(pinEcho_, INPUT);
}

unsigned int UltraSonic::getDistanceInCm(){
  return calculatePingDuration() / 74 / 2;
}

unsigned int UltraSonic::getDistanceInInch(){
  return calculatePingDuration() / 29 / 2;
}

unsigned int UltraSonic::calculatePingDuration(){
   digitalWrite(pingPin, LOW);
   delayMicroseconds(2);
   digitalWrite(pingPin, HIGH);
   delayMicroseconds(10);
   digitalWrite(pingPin, LOW);
   return pulseIn(echoPin, HIGH);
}