
#include "main.h"
#include "api.h"
#include "pid.h"
#include "robot.h"
#include "auton.h"
bool stay_clamp = true;

using namespace pros;
using namespace std;

int atn = 0;
string autstr;
// Task colorSortTask;
// bool colorSortActive = false;

void on_center_button() {
	static bool pressed = false;
	pressed = !pressed;
	if (pressed) {
		pros::lcd::set_text(2, "I was pressed!");
	} else {
		pros::lcd::clear_line(2);
	}
}//bla bla bla
//bla bla bla
void initialize() {

	// pros::lcd::initialize();
	// pros::lcd::set_text(1, "Hello PROS User!");

	// pros::lcd::register_btn1_cb(on_center_button);

	// while(true){
	// 	if (selec.get_value() == true){
	// 		atn++;
	//delay(350);
	// 	}
	// 	if(atn>7){//change number to number of autons
	// 		atn=0;
	// 	}
	// 	if (atn == 0) {
	// 		autstr = "NONE";
	// 		con.print(0,0, "Aut 0:%s", autstr);
	// 	}
	// 	else if (atn ==1) {
	// 		autstr = "RED RING";
	// 		con.print(0,0, "Aut 1: %s", autstr);
	// 	}
	// 	else if (atn ==2) {
	// 		autstr = "BLUE RING";
	// 		con.print(0,0, "Aut 2: %s", autstr);
	// 	}
	// 	else if (atn ==3) {
	// 		autstr = "RED GOAL QUALS";
	// 		con.print(0,0, "Aut 3: %s", autstr);
	// 	}
	// 	else if (atn ==4) {
	// 		autstr = "BLUE GOAL QUALS";
	// 		con.print(0,0, "Aut 4: %s", autstr);
	// 	}
	// 	else if (atn ==5) {
	// 		autstr = "RED GOAL ELIMS";
	// 		con.print(0,0, "Aut 5: %s", autstr);
	// 	}
	// 	else if (atn ==6) {
	// 		autstr = "BLUE GOALS ELIMS";
	// 		con.print(0,0, "Aut 6: %s", autstr);
	// 	}
	// 	else if (atn ==7) {
	// 		autstr = "SKILLS";
	// 		con.print(0,0, "Aut 7: %s", autstr);
	// 	}

	// 	if(con.get_digital_new_press(E_CONTROLLER_DIGITAL_X)){
	// 		break;
	// 	}




	// 		}

//auton selector

}
void disabled() { 
	// imu.tare(); 
	// while(stay_clamp = true){
	// 	MogoMech.set_value(true);
	// }
}

//void autonomous moved into just auton.cpp

void competition_initialize() {
	int pressed = 0;


	
while(true){
	if(selec.get_value() == true){
		pressed ++;
	} else {
		pressed = 0;
	}

	if(pressed ==1){
		atn++;
	}


		if(atn>9){//change number to number of autons
			atn=0;
		}
		if (atn == 0) {
			autstr = "NONE";
			con.print(0,0, "Aut 0:%s", autstr);
		}
		else if (atn ==1) {
			autstr = "RED AWP";
			con.print(0,0, "Aut 1: %s", autstr);
		}
		else if (atn ==2) {
			autstr = "BLUE AWP";
			con.print(0,0, "Aut 2: %s", autstr);
		}
		else if (atn ==3) {
			autstr = "RED GOAL E";
			con.print(0,0, "Aut 3: %s", autstr);
		}
		else if (atn ==4) {
			autstr = "BLUE GOAL E";
			con.print(0,0, "Aut 4: %s", autstr);
		}
		else if (atn ==5) {
			autstr = "BLUE GOAL Q";
			con.print(0,0, "Aut 5: %s", autstr);
		}
		else if (atn ==6) {
			autstr = "RED GOAL Q";
			con.print(0,0, "Aut 6: %s", autstr);
		}
		else if (atn ==7) {
			autstr = "Red Ring Rush";
			con.print(0,0, "Aut 7: %s", autstr);
		} 
		else if (atn ==8) {
			autstr = "Blue Ring Rush";
			con.print(0,0, "Aut 8: %s", autstr);
		}
		else if (atn ==9) {
			autstr = "SKILLS";
			con.print(0,0, "Aut 9: %s", autstr);
		}
	}

}


void opcontrol() {


bool arcToggle = true;
bool tankToggle=false;
bool StakeWingToggle=false;
double liftAngle=true;
int time =0;
bool hooks_Macro = false;
bool  hooks_Macro_Rev = false;
bool fishy_macro = false;
bool return_fishmech = false;
bool MogoMechToggle = false;
bool LBC = false;
int Macro = 0;
bool IntakePiston = false;
bool claw= false;
eyes.set_led_pwm(100);



while (true) {
cascade.set_brake_mode(pros::E_MOTOR_BRAKE_HOLD);
cascade2.set_brake_mode(pros::E_MOTOR_BRAKE_HOLD);
banshee.set_brake_mode(pros::E_MOTOR_BRAKE_HOLD);



//chassis drive 
int power = con.get_analog(ANALOG_LEFT_Y);
int RX = con.get_analog(ANALOG_RIGHT_X);
int turn = int(pow(RX, 3)/ 16129);
int left= power + turn; 
int right = power - turn;

if(con.get_digital(E_CONTROLLER_DIGITAL_R1)){
cascade.move(127);
cascade2.move(127);
} else if(con.get_digital(E_CONTROLLER_DIGITAL_R2)){
cascade.move(-127);
cascade2.move(-127);
}
else{
cascade.move(0);
cascade2.move(0);
}

if(con.get_digital(E_CONTROLLER_DIGITAL_L2)){
Intake.move(127);
banshee2.move(-127);
} else if(con.get_digital(E_CONTROLLER_DIGITAL_L1)){
Intake.move(-127);
banshee2.move(127);
}
else{
Intake.move(0);
banshee2.move(20);
}

// if(con.get_digital(E_CONTROLLER_DIGITAL_Y)){
// banshee.move(-127);
// } else if(con.get_digital(E_CONTROLLER_DIGITAL_B)){
// banshee.move(127);
// }
// else{
// banshee.move(0);
// }

if (con.get_digital_new_press(E_CONTROLLER_DIGITAL_Y)){
	claw = !claw;
}
Claw.set_value(claw);

if(con.get_digital_new_press(E_CONTROLLER_DIGITAL_A)){
skill_run();
}
if(con.get_digital_new_press(E_CONTROLLER_DIGITAL_LEFT)){
driveTurn2(30);

}
if (tankToggle){
	LF.move(con.get_analog(ANALOG_LEFT_Y));
	LM.move(con.get_analog(ANALOG_LEFT_Y));
	LB.move(con.get_analog(ANALOG_LEFT_Y));
	RF.move(con.get_analog(ANALOG_RIGHT_Y));
	RM.move(con.get_analog(ANALOG_RIGHT_Y));
	RB.move(con.get_analog(ANALOG_RIGHT_Y));
}

if (arcToggle) {
LF.move(left);
LM.move(left);
LB.move(left);
RF.move(right);
RM.move(right);
RB.move(right);
}
double  chasstemp = ((RF.get_temperature() + RB.get_temperature() + LF.get_temperature() + LB.get_temperature())/4);
if (time % 50 == 0 && time % 100 !=0 && time % 150 !=0){
    con.print(0,0,"time:%f       ", float(time2));//viewTime
} else if (time% 100 == 0 && time % 150 !=0){
    con.print(1,0,"imu:%f      ", float(imu.get_heading()));//viewTime
} else if (time % 150 == 0){
    con.print(2,0,"C:%i H:%i LB:%i      ",int(chasstemp), int(Intake.get_temperature()), int(cascade.get_temperature()));
}


delay(10);
time += 10;

}
}
