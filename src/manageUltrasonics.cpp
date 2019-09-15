#include "../headers/manageUltrasonics.hpp"

manageUltrasonics::manageUltrasonics(){
	// Initializing all I/O ports for the Ultrasonic sensors.
	for(unsigned i = 0; i < 2; ++i)
		pinMode(ultra_pins[i], OUTPUT);
}
unsigned manageUltrasonics::getNorthSide();
unsigned manageUltrasonics::getWestSide();
unsigned manageUltrasonics::getEastSide();
unsigned manageUltrasonics::getSouthSide();

