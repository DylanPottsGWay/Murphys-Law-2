#include "main.h"

//Includes

//Controller
extern pros::Controller controller;

//Drive Motors
pros::Motor leftFrontDrive (8, MOTOR_GEAR_GREEN, false, MOTOR_ENCODER_DEGREES);
pros::Motor rightFrontDrive (4, MOTOR_GEAR_GREEN, false, MOTOR_ENCODER_DEGREES);
pros::Motor leftBackDrive (10, MOTOR_GEAR_GREEN, false, MOTOR_ENCODER_DEGREES);
pros::Motor rightBackDrive (3, MOTOR_GEAR_GREEN, false, MOTOR_ENCODER_DEGREES);
void moveLeft(int leftSpeed);
void moveRight(int rightSpeed);
void moveChassis(int leftSpeed, int rightSpeed);
//Arm Motor
pros::Motor arm (1, MOTOR_GEAR_GREEN, false, MOTOR_ENCODER_DEGREES);
void moveArm(int armSpeed);
void armOP();

//Claw Motor
pros::Motor claw (11, MOTOR_GEAR_GREEN, false, MOTOR_ENCODER_DEGREES);
void moveArm(int clawSpeed);
void clawOP();