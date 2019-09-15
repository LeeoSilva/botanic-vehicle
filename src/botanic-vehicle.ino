#include "../headers/manageUltrasonics.hpp"

const unsigned char initialButton_pin = 12;  
const unsigned char ultrasonic_pins[4] = {7, 8, 9, 10}; // arbitrary digital ports
const unsigned char motor_pins[2] = {1, 2} // arbitrary analogic pins

void setup(){
	Serial.begin(9600); // Opens serial port for 9600 b/sec
	manageMotors motors; // For PIN initialiation configuration: headers/manageMotors.hpp 
	manageUltrasonics ultrasonics; // For PIN initialization configuration: headers/manageUltrasonics.hpp
}

void loop(){
			
	
}

