#include "main.h"

//Includes

//Controller
extern pros::Controller controller;

//Drive Motors
pros::Motor leftFrontDrive;
pros::Motor leftBackDrive;
pros::Motor rightFrontDrive;
pros::Motor rightBackDrive;
void moveLeft(int leftSpeed);
void moveRight(int rightSpeed);
void moveChassis(int leftSpeed, int rightSpeed);
//Arm Motor
pros::Motor arm;
void moveArm(int speed);
void armOP();

//Claw Motor
pros::Motor claw;
void moveArm(int speed);
void clawOP();