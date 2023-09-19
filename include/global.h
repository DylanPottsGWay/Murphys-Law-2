#include "main.h"

//Includes

//Controller
extern pros::Controller controller;

//Drive Motors
pros::Motor leftFrontDrive;
pros::Motor leftBackDrive;
pros::Motor rightFrontDrive;
pros::Motor rightBackDrive;


//Arm Motor
pros::Motor arm;
void moveArm(int speed);
void armOP();

//Claw Motor
pros::Motor claw;