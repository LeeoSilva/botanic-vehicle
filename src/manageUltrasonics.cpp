#include "../headers/manageUltrasonics.hpp"

manageUltrasonics::manageUltrasonics(){
	// Initializing all I/O ports for the Ultrasonic sensors.
	pinMode(PIN_ULTRA_LADO_DIREITO, OUTPUT);
	pinMode(PIN_ULTRA_LADO_ESQUERDO, OUTPUT);
	pinMode(PIN_ULTRA_LADO_FRONTAL,  OUTPUT);
}


unsigned manageUltrasonics::getFrontalSide();
unsigned manageUltrasonics::getRightSide();
unsigned manageUltrasonics::getLeftSide();


int manageUltrasonics::setRightSideVel() const noexcept;
int manageUltrasonics::setLeftSideVel() const noexcept; 
		

inline int manageUltrasonics::convert(const long& microseconds) { return microseconds / 74 / 2; } // convert microseconds into cm.


