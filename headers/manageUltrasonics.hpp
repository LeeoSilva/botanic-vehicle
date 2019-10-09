#pragma once
#include "../headers/vehicle.hpp"

class manageUltrasonics{
protected: 
	vehicleStates state;
	const unsigned char ultra_pins[2] = {1, 2};
	unsigned northSide = 0, // distance variables for every ultrasonic sensor
			 westSide  = 0,
			 eastSide  = 0,
			 southSide = 0;

public:
	manageUltrasonics();
	unsigned getNorthSide() const noexcept;
	unsigned getWestSide() const noexcept;
	unsigned getEastSide() const noexcept;
	unsigned getSouthSide() const noexcept;
	void	 setRightSideVel() const noexcept;
	void	 setLeftSideVel() const noexcept; 
		
	int convert() const noexcept;
};
