#include "../headers/manageMotors.hpp"

manageMotors::manageMotors(){
	// Initializing all I/O ports for the DC Motors.
	pinMode(PIN_MOTOR_LADO_DIREITO, OUTPUT);
	pinMode(PIN_MOTOR_LADO_ESQUERDO, OUTPUT);
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

int manageMotors::setAcceleration(const float& accel); // change both DC Motors acceletation

int manageMotors::setRightSideVel(const float& accel){
	if( vel < 0 && vel > 200) return FAILED_STATUS;		
	analogWrite(PIN_MOTOR_LADO_DIREITO, vel);
	return SUCCESS_STATUS;
}

int manageMotors::setLeftSideVel(){
	if( vel < 0 && vel > 200) return FAILED_STATUS;		
	analogWrite(PIN_MOTOR_LADO_ESQUERDO, ValorVelocidadeMotorLadoDireito );
	return SUCCESS_STATUS;
}
