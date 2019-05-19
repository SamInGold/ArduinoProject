/*
  SevenSegmentDisplay.h - Library for display on 7 segment.
  Created by Samuel Charbonneau, December 27, 2018.
*/

#include "Arduino.h"
#include "sevenSegmentDisplay.h"

SevenSegmentDisplay::SevenSegmentDisplay(uint8_t pin1, uint8_t pin2, uint8_t pin4, uint8_t pin5, uint8_t pin6, uint8_t pin7, uint8_t pin9, uint8_t pin10):a_(pin7),b_(pin6),c_(pin4),d_(pin2),e_(pin1),f_(pin9),g_(pin10),point_(pin5){
    pinMode(a_, OUTPUT);  //A
    pinMode(b_, OUTPUT);  //B
    pinMode(c_, OUTPUT);  //C
    pinMode(d_, OUTPUT);  //D
    pinMode(e_, OUTPUT);  //E
    pinMode(f_, OUTPUT);  //F
    pinMode(g_, OUTPUT);  //G
    pinMode(point_, OUTPUT);  //G
}

void SevenSegmentDisplay::display(uint8_t whatToDisplay){
    turnOff();
    switch(whatToDisplay){
        case 0:
        case '0':
        case 'O':
            digitalWrite(a_,HIGH);
            digitalWrite(b_,HIGH);
            digitalWrite(c_,HIGH);
            digitalWrite(d_,HIGH);
            digitalWrite(e_,HIGH);
            digitalWrite(f_,HIGH);
            break;

        case 1:
        case '1':
            digitalWrite(b_,HIGH);
            digitalWrite(c_,HIGH);
            break;
        
        case 2:
        case '2':
            digitalWrite(a_,HIGH);
            digitalWrite(b_,HIGH);
            digitalWrite(d_,HIGH);
            digitalWrite(e_,HIGH);
            digitalWrite(g_,HIGH);
            break;
        
        case 3:
        case '3':
            digitalWrite(a_,HIGH);
            digitalWrite(b_,HIGH);
            digitalWrite(c_,HIGH);
            digitalWrite(d_,HIGH);
            digitalWrite(g_,HIGH);
            break;
        
        case 4:
        case '4':
            digitalWrite(b_,HIGH);
            digitalWrite(c_,HIGH);
            digitalWrite(f_,HIGH);
            digitalWrite(g_,HIGH);
            break;

        case 5: 
        case '5':
        case 's':
        case 'S':
            digitalWrite(a_,HIGH);
            digitalWrite(c_,HIGH);
            digitalWrite(d_,HIGH);
            digitalWrite(f_,HIGH);
            digitalWrite(g_,HIGH);
            break;
        
        case 6:
        case '6':
        case 'g':
        case 'G':
            digitalWrite(a_,HIGH);
            digitalWrite(c_,HIGH);
            digitalWrite(d_,HIGH);
            digitalWrite(e_,HIGH);
            digitalWrite(f_,HIGH);
            digitalWrite(g_,HIGH);
            break;

        case 7:
        case '7':
            digitalWrite(a_,HIGH);
            digitalWrite(b_,HIGH);
            digitalWrite(c_,HIGH);
            break;
        
        case 8:
        case '8':
            digitalWrite(a_,HIGH);
            digitalWrite(b_,HIGH);
            digitalWrite(c_,HIGH);
            digitalWrite(d_,HIGH);
            digitalWrite(e_,HIGH);
            digitalWrite(f_,HIGH);
            digitalWrite(g_,HIGH);
            break;

        case 9:
        case '9':
        case 'q':
        case 'Q':
            digitalWrite(a_,HIGH);
            digitalWrite(b_,HIGH);
            digitalWrite(c_,HIGH);
            digitalWrite(d_,HIGH);
            digitalWrite(f_,HIGH);
            digitalWrite(g_,HIGH);
            break;

        case 'a':
        case 'A':
            digitalWrite(a_,HIGH);
            digitalWrite(b_,HIGH);
            digitalWrite(c_,HIGH);
            digitalWrite(e_,HIGH);
            digitalWrite(f_,HIGH);
            digitalWrite(g_,HIGH);
            break;
        
        case 'b':
        case 'B':
            digitalWrite(c_,HIGH);
            digitalWrite(d_,HIGH);
            digitalWrite(e_,HIGH);
            digitalWrite(f_,HIGH);
            digitalWrite(g_,HIGH);
            break;
        
        case 'c':
            digitalWrite(d_,HIGH);
            digitalWrite(e_,HIGH);
            digitalWrite(g_,HIGH);
            break;

        case 'C':
            digitalWrite(a_,HIGH);
            digitalWrite(d_,HIGH);
            digitalWrite(e_,HIGH);
            digitalWrite(f_,HIGH);
            break;
        
        case 'd':
        case 'D':
            digitalWrite(b_,HIGH);
            digitalWrite(c_,HIGH);
            digitalWrite(d_,HIGH);
            digitalWrite(e_,HIGH);
            digitalWrite(g_,HIGH);
            break;
        
        case 'e':
        case 'E':
            digitalWrite(a_,HIGH);
            digitalWrite(d_,HIGH);
            digitalWrite(e_,HIGH);
            digitalWrite(f_,HIGH);
            digitalWrite(g_,HIGH);
            break;
        
        case 'f':
        case 'F':
            digitalWrite(a_,HIGH);
            digitalWrite(e_,HIGH);
            digitalWrite(f_,HIGH);
            digitalWrite(g_,HIGH);
            break;
        
        case 'h':
            digitalWrite(c_,HIGH);
            digitalWrite(e_,HIGH);
            digitalWrite(f_,HIGH);
            digitalWrite(g_,HIGH);
            break;

        case 'H':
            digitalWrite(b_,HIGH);
            digitalWrite(c_,HIGH);
            digitalWrite(e_,HIGH);
            digitalWrite(f_,HIGH);
            digitalWrite(g_,HIGH);
            break;

        case 'j':
        case 'J':
            digitalWrite(b_,HIGH);
            digitalWrite(c_,HIGH);
            digitalWrite(d_,HIGH);
            digitalWrite(e_,HIGH);
            break;

        case 'l':
        case 'L':
            digitalWrite(d_,HIGH);
            digitalWrite(e_,HIGH);
            digitalWrite(f_,HIGH);
            break;

        case 'n':
        case 'N':
            digitalWrite(c_,HIGH);
            digitalWrite(e_,HIGH);
            digitalWrite(g_,HIGH);
            break;

        case 'o':
            digitalWrite(c_,HIGH);
            digitalWrite(d_,HIGH);
            digitalWrite(e_,HIGH);
            digitalWrite(g_,HIGH);
            break;

        case 'p':
        case 'P':
            digitalWrite(a_,HIGH);
            digitalWrite(b_,HIGH);
            digitalWrite(e_,HIGH);
            digitalWrite(f_,HIGH);
            digitalWrite(g_,HIGH);
            break;
        
        case 'u':
            digitalWrite(c_,HIGH);
            digitalWrite(d_,HIGH);
            digitalWrite(e_,HIGH);
            break;

        case 'U':
            digitalWrite(b_,HIGH);
            digitalWrite(c_,HIGH);
            digitalWrite(d_,HIGH);
            digitalWrite(e_,HIGH);
            digitalWrite(f_,HIGH);
            break;



    };
}

void SevenSegmentDisplay::roll(bool clockWise,int durationInMs){
    char tableToRoll[6] = {'a','b','c','d','e','f'};
    if(clockWise){
        for(int i =0 ; i<(durationInMs/50);i++){
            turnOnSegment(tableToRoll[i%6]);
            delay(50);
        }
    }else{
       for(int i =durationInMs/50 ; i>0;i--){
            turnOnSegment(tableToRoll[i%6]);
            delay(50);
        } 
    }
}

void SevenSegmentDisplay::infinity(bool clockWise,int durationInMs){
    char tableToRoll[8] = {'g','c','d','e','g','b','a','f'};
    if(clockWise){
        for(int i =0 ; i<(durationInMs/50);i++){
            turnOnSegment(tableToRoll[i%8]);
            delay(50);
        }
    }else{
       for(int i =durationInMs/50 ; i>0;i--){
            turnOnSegment(tableToRoll[i%8]);
            delay(50);
        } 
    }
}

void SevenSegmentDisplay::turnOff(){
    digitalWrite(a_,LOW);
    digitalWrite(b_,LOW);
    digitalWrite(c_,LOW);
    digitalWrite(d_,LOW);
    digitalWrite(e_,LOW);
    digitalWrite(f_,LOW);
    digitalWrite(g_,LOW);
}


void SevenSegmentDisplay::turnOnSegment(char segment){
    turnOff();
    switch(segment)
    {
        case 'a':
            digitalWrite(a_,HIGH);
            break;
        case 'b':
            digitalWrite(b_,HIGH);
            break;
        case 'c':
            digitalWrite(c_,HIGH);
            break;
        case 'd':
            digitalWrite(d_,HIGH);
            break;
        case 'e':
            digitalWrite(e_,HIGH);
            break;
        case 'f':
            digitalWrite(f_,HIGH);
            break;
        case 'g':
            digitalWrite(g_,HIGH);
            break;
    }
}