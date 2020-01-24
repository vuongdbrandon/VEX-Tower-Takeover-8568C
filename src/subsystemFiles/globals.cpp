#include "main.h"

//Verify gear set, maybe change ports
pros::Motor driveLeft(20, pros::E_MOTOR_GEARSET_36, false, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor driveRight(11, pros::E_MOTOR_GEARSET_36, true, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor liftRight(13, pros::E_MOTOR_GEARSET_36, false, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor liftLeft(17, pros::E_MOTOR_GEARSET_36, true, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor intakeRight(12, pros::E_MOTOR_GEARSET_18, false, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor intakeLeft(18, pros::E_MOTOR_GEARSET_18, true, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor tiltTable(16, pros::E_MOTOR_GEARSET_36, false, pros::E_MOTOR_ENCODER_COUNTS);

//Controller
pros::Controller controller(pros::E_CONTROLLER_MASTER);

//Sensors
pros::ADIEncoder trackingH('A', 'B');
pros::ADIEncoder trackingRight('C', 'D');
pros::ADIEncoder trackingLeft('G', 'H');

//driver macros
void dumpCubes() {
  int buttonA = controller.get_digital(pros::E_CONTROLLER_DIGITAL_A);
  if (buttonA == 1) {
    setDrive(-25, -25);
    setIntake(30);
  }
}

//misc
float giveangle(){
  float position = tiltTable.get_position();
  pros::lcd::print(2, "position %f", position);
  return position;
}

const float INCHESTOTICKS = 1800/(4*3.14159);
