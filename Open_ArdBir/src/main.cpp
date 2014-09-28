#include <Arduino.h>
#include "setup_loop.cpp"

int main(void) {

	init();
	setup();

	while (true) {
		loop();
	}
}
