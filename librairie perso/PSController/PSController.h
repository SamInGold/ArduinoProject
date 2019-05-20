#ifndef PSCONTROLLER_H
#def PSCONTROLLER_H
#include "Arduino.h"

//IDs of different playstation controller
#define DIGITAL_CONTROLLER_ID = 0x41
#define ANALOG_CONTROLLER_RED_MODE_ID = 0x73
#define ANALOG_CONTROLLER_GREEN_MODE_ID = 0x53

#define START_SEQUENCE = 0x01
#define ASK_DATA = 0x42
#define HERE_COMES_THE_DATA = 0x5A

class PSController{
	
	public:
		PSController(byte data, byte cmd, byte att, byte clk, byte ack, byte delay): _dataPin(data), _cmdPin(cmd), _attPin(att), _clkPin(clk), _ackPin(ack), _delay(delay);
		
		
	private:
		// the inner variable for the pinout
		byte _dataPin;
		byte _cmdPin;
		byte _attPin;
		byte _clkPin;
		byte _ackPin;
		byte _delay;
		
		byte _id;
		
		//the inner variable for the buttons pressed
		bool _slct, _strt, _up, _down, _left, _rght, _tri, _squ, _x, _o, _r1, _r2, _l1, _l2, _joyR, _j0yL;
		byte _rghtJoyLR, _rghtJoyUD, _leftJoyLR, _leftJoyUD;
	
	
	
}

