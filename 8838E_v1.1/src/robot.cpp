#include "main.h"
#include "api.h"
#include "robot.h"

//header Guards, safety

#define LF_PORT 10
#define LM_PORT 100
#define LB_PORT 9
#define RF_PORT 8
#define RM_PORT 100 
#define RB_PORT 7
#define IMU_PORT 5
#define Intake_port 1
#define cascade_port 4
#define banshee_PORT 2
#define DISTANCE_PORT 19
#define ROTATION_PORT 4


pros::Motor LF (LF_PORT, pros::E_MOTOR_GEARSET_06, true); //keep
pros::Motor LM (LM_PORT, pros::E_MOTOR_GEARSET_06, true); //
pros::Motor LB (LB_PORT, pros::E_MOTOR_GEARSET_06, true); //keep
pros::Motor RF (RF_PORT, pros::E_MOTOR_GEARSET_06, false); //keep
pros::Motor RM (RM_PORT, pros::E_MOTOR_GEARSET_06, false); //keep
pros::Motor RB (RB_PORT, pros::E_MOTOR_GEARSET_06, false); //keep                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           

pros::Motor Intake (Intake_port, pros::E_MOTOR_GEARSET_06, true);
pros::Motor cascade (cascade_port, pros::E_MOTOR_GEARSET_18, true);

pros::Imu imu(IMU_PORT);
pros::Optical eyes(banshee_PORT);
pros::Rotation roto(ROTATION_PORT);
pros::Distance dis (DISTANCE_PORT);
pros::Controller con (pros::E_CONTROLLER_MASTER);


pros::ADIDigitalOut MogoMech ('B',false);//out soloniod was stolen so I changed this
pros::ADIDigitalOut StakeWing('A',false);
pros::ADIDigitalOut Intake_Piston ('A',false);
pros::ADIDigitalIn selec ('C');//