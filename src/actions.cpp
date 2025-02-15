#include "main.h"
#include "global.h"


//Wheel Motor Actions
int leftSpeed = controller.get_analog(ANALOG_LEFT_Y);
int rightSpeed = controller.get_analog(ANALOG_RIGHT_Y);

void moveLeft(int leftSpeed){
 leftFrontDrive.move(leftSpeed);
 leftBackDrive.move(leftSpeed);
}

void moveRight(int rightSpeed){
 rightFrontDrive.move(rightSpeed);
 rightBackDrive.move(rightSpeed);
}

void moveChassis(int leftSpeed, int rightSpeed){
    if (leftSpeed != 0)
    moveLeft(leftSpeed);
    }else if (rightSpeed != 0){
        moveRight(rightSpeed);
    }


void driveOP(){
    moveRight(rightSpeed);
    moveLeft(leftSpeed);
    moveChassis(leftSpeed, rightSpeed);
}

//Arm Actions
void moveArm(int speed){
    arm.move(speed);
}

void armOP(){
    bool armUpButton = controller.get_digital(DIGITAL_L1);
    bool armDownButton = controller.get_digital(DIGITAL_L2);
    if (armUpButton)
    moveArm(127);
} else if(armDownButton){
    moveArm(-127);
} else {
    moveArm(0);
}

//Claw
void moveClaw(int clawSpeed){
    claw.move(clawSpeed);
}

void clawOP(){
    bool clawOpenButton = controller.get_digital(DIGITAL_A);
    bool clawCloseButton = controller.get_digital(DIGITAL_B);
    if (clawOpenButton) 
    moveClaw(-50);
} else if (clawCloseButton) {
    moveClaw(50);
} else {
    moveClaw(0);
}
