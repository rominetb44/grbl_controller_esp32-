/*
  StatusLED.h - For NeoPixel LED
*/


#include "StatusLED.h"

// NEO_KHZ800 ou NEO_KHZ400, NEO_RGB ou NEO_GRB ou ....ou NEO_RGBW ou NEO_WRGB, ...
Adafruit_NeoPixel StatusLED::NeoPixel = Adafruit_NeoPixel(NB_STATUS_LED, STATUS_LED_PIN, NEO_RGB + NEO_KHZ800);


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
			ledColor = NeoPixel.Color(255, 255, 0); // Jog = orange
			break;
		case 'H':
		ledColor = NeoPixel.Color(0, 0, 255); // Hold = Blue
			break;
		case 'I':
		ledColor = NeoPixel.Color(0, 255, 0); // Idle = vert
			break;
		case 'R':
			ledColor = NeoPixel.Color(0, 255, 255); // Run = jaune
			break;
		case 'A':
			ledColor = NeoPixel.Color(255, 0, 0); // Alarme = rouge
			break;
		case '?':
			ledColor = NeoPixel.Color(255, 0, 0); // ? = rouge
			break;
		/*case 'H':
			ledColor = NeoPixel.Color(0, 255, 255); // Homing = rouge
			break;*/
		default:
			ledColor = NeoPixel.Color(255, 0, 0); // autres = rouge
	}
	
	for (int pixel = 0; pixel < NB_STATUS_LED; pixel++) {         // for each pixel
		NeoPixel.setPixelColor(pixel, ledColor);  					// it only takes effect if pixels.show() is called
	}
	NeoPixel.show();  // update to the NeoPixel Led Strip
}

