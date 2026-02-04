/*
  StatusLED.h - For NeoPixel LED
*/


#include "StatusLED.h"

// NEO_KHZ800 ou NEO_KHZ400, NEO_RGB ou NEO_GRB ou ....ou NEO_RGBW ou NEO_WRGB, ...
Adafruit_NeoPixel StatusLED::NeoPixel = Adafruit_NeoPixel(NB_STATUS_LED, STATUS_LED_PIN, NEO_GRB + NEO_KHZ800);


/**
 * Initialisation des LED
 */
void StatusLED::initStatusLED() {
	NeoPixel.begin();
	NeoPixel.setBrightness(STATUS_LED_BRIGHTNESS);
	return;
}

/**
 * Permet d'allumer les LED selon un état de GRBL
 *
 * @param uint8_t nStatus : status de GRBL
 */
void StatusLED::updateStatusLED(uint8_t nStatus) {
	
	uint32_t ledColor = 0;
	
	switch (nStatus) {
		case 'J':
			ledColor = STATUS_LED_COLOR_JOG; // Jog
			break;
		case 'H':
		ledColor = STATUS_LED_COLOR_HOLD; // Hold
			break;
		case 'I':
		ledColor = STATUS_LED_COLOR_IDLE; // Idle
			break;
		case 'R':
			ledColor = STATUS_LED_COLOR_RUN; // Run
			break;
		case 'A':
			ledColor = STATUS_LED_COLOR_ALARM; // Alarme
			break;
		case '?':
			ledColor = STATUS_LED_COLOR_UNKNOW; // ?
			break;
		case 'D':
			ledColor = STATUS_LED_COLOR_DOOR; // Door
			break;
		default:
			ledColor = STATUS_LED_COLOR_OTHER; // autres
	}
	
	for (int pixel = 0; pixel < NB_STATUS_LED; pixel++) {         // for each pixel
		NeoPixel.setPixelColor(pixel, ledColor);  					// it only takes effect if pixels.show() is called
	}
	NeoPixel.show();  // update to the NeoPixel Led Strip
}

