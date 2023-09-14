#include "main.h"
#include "global.h"


//Wheel Motor Actions
void moveLeft(int speed){
 leftFrontDrive.move(speed);
 leftBackDrive.move(speed);
}

void moveRight(int speed){
 rightFrontDrive.move(speed);
 rightBackDrive.move(speed);
}

void moveChassis(int leftSpeed, int rightSpeed){
    moveLeft(leftSpeed);
    moveRight(rightSpeed);
}

void driveOP(){
    int left = controller.get_analog(ANALOG_LEFT_Y);
	int right = controller.get_analog(ANALOG_RIGHT_Y);
}

//Arm Actions
void moveArm(int speed){
    arm.move(speed);
}

void armOP(){
    bool armUpButton = controller.get_digital(DIGITAL_L1);
}