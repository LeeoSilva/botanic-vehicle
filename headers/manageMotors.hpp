#pragma once

#define PIN_MOTOR_LADO_DIREITO 3
#define PIN_MOTOR_LADO_ESQUERDO 6

#define FAILED_STATUS -1 // Return value of a function that failed his purpose.
#define SUCCESS_STATUS 0 // Return value of a function that success in his purpose.


/*
   Class to organize and manage DC Motors 

   All the DC Motors can only be controlled by Analog ports.
	The DC Motors can only go to a certain speed 0 >= speed <= 200.
	*/


class manageMotors : manageUltrasonics {

	public:
		manageMotors(); // constructor
		setAcceleration(const unsigned& accel); // change both DC Motors acceletation

		void setRightSideVel() const noexcept;
		void setLeftSideVel() const noexcept; 

		void goForward();
		void goBackwards();
		void turnRight();
		void turnLeft();

		float convert() const noexcept;
};
