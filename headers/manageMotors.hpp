#pragma once

/*
	Class to organize and manage DC Motors 

	All the DC Motors can only be controlled by Analog ports.
	The DC Motors can only go to a certain speed 0 >= speed <= 200.
*/


class manageMotors : manageUltrasonics {
protected:
	const unsigned char motor_pins[4] = {1, 2, 3, 4};
	unsigned unsigned accel = 0; // the value can only go 

public:
	manageMotors();
	setAcceleration(const unsigned& accel);
	goForward();
	goBackwards();
	turnRight();
	turnLeft();
};
