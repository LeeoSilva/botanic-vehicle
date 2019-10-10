#pragma once
#include "../headers/vehicle.hpp"

#define PIN_ULTRA_LADO_DIREITO 6
#define PIN_ULTRA_LADO_ESQUERDO 2
#define PIN_ULTRA_LADO_FRONTAL 2

#define FAILED_STATUS -1 // Return value of a function that failed his purpose.
#define SUCCESS_STATUS 0 // Return value of a function that success in his purpose.


class manageUltrasonics{
protected: 
	vehicleStates state;
	unsigned northSide = 0, // distance variables for every ultrasonic sensor
			 westSide  = 0,
			 eastSide  = 0;

public:
	manageUltrasonics();
	unsigned getFrontalSide() const noexcept;
	unsigned getRightSide() const noexcept;
	unsigned getLeftSide() const noexcept;
	int setRightSideVel() const noexcept;
	int setLeftSideVel() const noexcept; 
		
	float convert() const noexcept;
};
