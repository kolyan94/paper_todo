#include "lgfx/v1/misc/enum.hpp"
#include <epdiy.h>
#include <M5GFX.h>

static M5GFX display;

void setup() {
	Serial.begin(115200);

	display.init();
	display.clearDisplay();

	display.setTextSize(2);
	display.setTextColor(TFT_BLACK, TFT_WHITE);
	display.setCursor(10, 10);
	
	display.println("SUKA NAKINEC");

	display.display();
	display.waitDisplay();
}

void loop() {

}
