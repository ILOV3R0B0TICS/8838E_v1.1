#include "main.h"


//hi
//header Guards, safety
#ifndef ROBOTH
#define ROBOTH

extern pros::Motor LF;
extern pros::Motor LM;
extern pros::Motor LB;
extern pros::Motor RF;
extern pros::Motor RM;
extern pros::Motor RB;

extern pros::Motor Intake;
extern pros::Motor cascade;
extern pros::Motor cascade2;
extern pros::Motor banshee;
extern pros::Motor banshee2;

extern pros::Imu imu;
extern pros::Optical eyes;
extern pros::Rotation roto;
extern pros::Distance dis;
extern pros::Controller con;


extern pros::ADIDigitalOut MogoMech;
extern pros::ADIDigitalOut StakeWing;
extern pros::ADIDigitalOut Intake_Piston;
extern pros::ADIDigitalIn selec;

#endif
