#include "../headers/manageMotors.hpp"

manageMotors::manageMotors(){
	// Initializing all I/O ports for the DC Motors.
	for(unsigned i = 0; i < 3; ++i)
		pinMode(motor_pins[i], OUTPUT);
}

manageMotors::goForward(){}
manageMotors::goBackwards(){}
manageMotors::turnRight(){
	/*
		This functions utilizes the concept of reverse direction to
		rotate the vehicle.
		This is done by accelerating the LEFT wheel forward
		and the RIGHT wheel backwards, then causing rotation of the vehicle.	
	*/
			

}
manageMotors::turnLeft(){
	/*
		This functions utilizes the concept of reverse direction to
		rotate the vehicle.
		This is done by accelerating the RIGHT wheel forward
		and the LEFT wheel backwards, then causing rotation of the vehicle.	
	*/
	

}
