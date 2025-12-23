#pragma once

/*
  StatusLED.h - For NeoPixel LED
*/

#include "config.h"
#include <Adafruit_NeoPixel.h>

	
class StatusLED {
	
public :
	static void initStatusLED();
	static void updateStatusLED(uint8_t);

private :
	static Adafruit_NeoPixel NeoPixel;
	
};

