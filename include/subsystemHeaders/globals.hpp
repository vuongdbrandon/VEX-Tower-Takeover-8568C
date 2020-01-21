#include "main.h"

//MOTORS
extern pros::Motor liftRight;
extern pros::Motor liftLeft;
extern pros::Motor intakeRight;
extern pros::Motor intakeLeft;
extern pros::Motor driveRight;
extern pros::Motor driveLeft;
extern pros::Motor tiltTable;

//CONTROLLER
extern pros::Controller controller;

//Sensors
extern pros::ADIEncoder trackingX;
extern pros::ADIEncoder trackingLeft;
extern pros::ADIEncoder trackingRight;

//driver macros
void dumpCubes();

//MISC
float giveangle();
extern const float INCHESTOTICKS;

//Conversion

#define PI = 3.14159
#define
