#include "main.h"
#include "api.h"
#include "pid.h"
#include "robot.h"
#include "auton.h"
using namespace pros;

// below is not accurate. I will renumber later
//  auton1=red side ring side
//  auton2=blue side ring side
//  auton3= red side elims goal side
//  autons4= blue side elims goal side
//  autons5 = auto skills
// 1 = no blue rings, 2 = no red rings.
void DriveStraightAuto()
{
  driveStraightSlow(250, 50);
}

void LeftSide()
{
  cascade.move(110);
  cascade2.move(110);
  delay(500);
  cascade2.move(0);
  cascade.move(0);//cascadeup and hold
  delay(250);
    driveStraight2(-450);//score preload
    cascade.move(-90);
  cascade2.move(-90);
  delay(500);
  cascade.move(0);
  cascade2.move(0);
    banshee.move(-90);
      delay(300);
    driveArcL(45, 200, 1500, 50);
    driveTurn2(45);
    driveStraight2(-500);
    banshee.move(90);
      driveArcR(-46, 300, 1200, 50);
  driveStraightSlow(-500, 25);
  delay(500);
  cascade2.move(-127);
  cascade.move(-127);
    delay(1000);
  driveTurn2(-135);
  driveStraightSlow(-1000, 25);
     cascade.move(0);
  cascade2.move(0);
  delay(250);
  cascade.move(127);
  cascade2.move(127);
  delay(1500);
     cascade2.move(0);
  cascade.move(0);
  driveStraight2(500);
   cascade.move(0);
  cascade2.move(0);
  driveTurn2(270);
  driveArcR(120, 200, 1200, 50);
  driveStraight2(1600);
  driveStraight2(-400);
 driveStraight2(1100);
driveStraight2(-250);
}

void RightSide()
{
  cascade.move(110);
  cascade2.move(110);
  delay(500);
  cascade2.move(0);
  cascade.move(0);//cascadeup and hold
  delay(250);
    driveStraight2(-450);//score preload
    cascade.move(-90);
  cascade2.move(-90);
  delay(500);
  cascade.move(0);
  cascade2.move(0);
    banshee.move(-90);
      delay(300);
    driveArcR(45, 200, 1500, 50);
    driveTurn2(-45);
    driveStraight2(-500);
    banshee.move(90);
      driveArcL(-46, 460, 1200, 50);
  // driveTurn2(-45);
  // driveStraightC(-300);
  // driveTurn2(-35);
  // driveStraightC(-360);
  // driveTurn2(-1);
  driveStraightSlow(-500, 25);
  delay(500);
  cascade2.move(-127);
  cascade.move(-127);
    delay(1000);
  driveTurn2(135);
  driveStraightSlow(-900, 25);
     cascade.move(0);
  cascade2.move(0);
  delay(250);
  cascade.move(127);
  cascade2.move(127);
  delay(1000);
     cascade2.move(0);
  cascade.move(0);
  driveStraight2(500);
   cascade.move(0);
  cascade2.move(0);
   driveTurn2(45);
  driveArcL(70, 300, 1200, 50);
  driveStraight2(1500);
  driveStraight2(-250);
 driveStraight2(1100);
 driveStraight2(-250);
  //second preload scored
//     cascade.move(-90);
//   cascade2.move(-90);
//   delay(500);
//     banshee.move(-90);
//       delay(500);
//       driveStraightCSlow(300, 100);
//   cascade.move(-70);
//   cascade2.move(-70);
//    cascade.move(0);
//   cascade2.move(0);
//   banshee.move(90);
//   driveTurn2(-30);
//   driveStraightC(400);
//   driveTurn2(-30);
//   delay(250);
//   driveStraight2(-300);
//   driveStraightCSlow(450, 100);
//   delay(250);
//   driveStraight2(-300);
//   driveStraightCSlow(450, 100);
//   delay(250);
//   // driveStraight2(0);
//   // driveStraightSlow(0, 50);
//   // delay(250);//toggle changed
//   driveStraightCSlow(-900, 50);
  // driveArcL(-46, 500, 1200, 50);
  // // driveTurn2(-45);
  // // driveStraightC(-300);
  // // driveTurn2(-35);
  // // driveStraightC(-360);
  // // driveTurn2(-1);
  // driveStraightSlow(-100, 25);
  // banshee.move(90);
  // delay(500);
  // cascade2.move(-127);
  // cascade.move(-127);
  //   delay(1000);
  // cascade.move(0);
  // cascade2.move(0);
  // driveTurn2(135);
  // driveStraightSlow(-900, 25);
  // delay(250);
  // cascade.move(127);
  // cascade2.move(127);
  // delay(1000);
  // cascade2.move(0);
  // cascade.move(0);
  // Claw.set_value(true);
  // driveStraight2(300);
  //  cascade.move(-127);
  // cascade2.move(-127);//second preload scored
}


void goal_safe_side_red()
{ // not tested
}

void Standard_AWP_blue()
{ // done
driveStraight2(4000);
}


void Goal_Rush_Blue()
{ // incosistent, but done
}

// blue ring side touch bar bc not doing corner stack
void goal_safe_side_blue()
{
}

void Ring_Rush_blue()
{
  banshee.move(-127);
}

void skill_run()
{
  driveStraight2(-200);
  driveStraightSlow(450, 50);
  delay(250);
  driveStraight2(-200);
  driveStraightSlow(450, 50);
  delay(250);
  driveStraight2(-650);
  driveTurn2(90);
   cascade.move(100);
  cascade2.move(100);
  delay(500);
  cascade2.move(0);
  cascade.move(0);//cascadeup and hold
  driveStraight2(-1000);
  cascade.move(-50);
  cascade2.move(-50);
  delay(500);
  cascade2.move(0);
  cascade.move(0);
  banshee.move(-127);
  Intake.move(-127);
  delay(500);
  driveStraight2(925);
  driveTurn2(45);
  banshee.move(127);
  cascade.move(-50);
  cascade2.move(-50);
  delay(500);
  cascade2.move(0);
  cascade.move(0);
  driveStraightSlow(-1300, 25);
   cascade.move(80);
  cascade2.move(80);
  delay(500);
  cascade2.move(0);
  cascade.move(0);
  driveStraight2(-400);
  driveTurn2(180);
  cascade.move(100);
  cascade2.move(100);
  delay(500);
  cascade2.move(0);
  cascade.move(0);//cascadeup and hold
  driveStraight2(-1200);
  cascade.move(-100);
  cascade2.move(-100);
  delay(500);
  cascade2.move(0);
  cascade.move(0);
  banshee.move(-127);
  Intake.move(-127);//cup and pin #1 scored
  delay(500);
   driveStraight2(1100);
  driveTurn2(135);
  banshee.move(127);
  cascade.move(-50);
  cascade2.move(-50);
  delay(500);
  cascade2.move(0);
  cascade.move(0);
  driveStraightSlow(-1600, 25);
   cascade.move(80);
  cascade2.move(80);
  delay(500);
  cascade2.move(0);
  cascade.move(0);
  driveStraight2(-400);
  driveTurn2(-95);
  cascade.move(127);
  cascade2.move(127);
  delay(1000);
  cascade2.move(0);
  cascade.move(0);//cascadeup and hold
  driveStraight2(-1500);
  cascade.move(-100);
  cascade2.move(-100);
  delay(500);
  cascade2.move(0);
  cascade.move(0);
  banshee.move(-127);
  Intake.move(-127);//cup and pin #2 scored
  delay(500);
  driveStraightSlow(1750, 50);
  banshee.move(127);
   cascade.move(-100);
  cascade2.move(-100);
  delay(500);
  cascade2.move(0);
  cascade.move(0);
  driveTurn2(180);
  driveStraight2(-600);
   cascade.move(50);
  cascade2.move(50);
  delay(500);
  cascade2.move(0);
  cascade.move(0);
  driveStraight2(600);
  driveTurn2(-90);
  cascade.move(127);
  cascade2.move(127);
  delay(1000);
  cascade2.move(0);
  cascade.move(0);//cascadeup and hold
  driveStraight2(-2000);
   cascade.move(-80);
  cascade2.move(-80);
  delay(1000);
  cascade2.move(0);
  cascade.move(0);
  banshee.move(-127);
  Intake.move(-127);//cup and pin #3 scored
  delay(500);
  driveStraightSlow(2000, 50);



  // driveTurn2(180);
  // driveStraight
  

  // cascade.move(110);
  // cascade2.move(110);
  // delay(500);
  // cascade2.move(0);
  // cascade.move(0);//cascadeup and hold
  // delay(250);
  //   driveStraight2(-450);//score preload
  //   cascade.move(-90);
  // cascade2.move(-90);
  // delay(500);
  //   banshee.move(-90);
  //     delay(500);
  //     driveStraightCSlow(300, 100);
  // cascade.move(-70);
  // cascade2.move(-70);
  //  cascade.move(0);
  // cascade2.move(0);
  // banshee.move(90);
  // driveTurn2(-30);
  // driveStraightC(400);
  // driveTurn2(-30);
  // delay(250);
  // driveStraight2(-300);
  // driveStraightCSlow(450, 100);
  // delay(250);
  // driveStraight2(-300);
  // driveStraightCSlow(450, 100);
  // delay(250);
  // // driveStraight2(0);
  // // driveStraightSlow(0, 50);
  // // delay(250);//toggle changed
  // driveStraightC(-150);
  // driveTurn2(-45);
  // driveStraightC(-300);
  // driveTurn2(-35);
  // driveStraightC(-355);
  // driveTurn2(1);
  // driveStraightSlow(-850, 25);
  // banshee.move(90);
  // delay(500);
  // cascade2.move(-127);
  // cascade.move(-127);
  //   delay(1000);
  // cascade.move(0);
  // cascade2.move(0);
  // driveTurn2(135);
  // driveStraightSlow(-900, 25);
  // delay(250);
  // cascade.move(127);
  // cascade2.move(127);
  // delay(1000);
  // cascade2.move(0);
  // cascade.move(0);
  // Claw.set_value(true);
  // driveStraight2(300);
  //  cascade.move(-127);
  // cascade2.move(-127);//second preload scored
  // delay(500);
  // cascade.move(0);
  // cascade2.move(0);
  // driveStraight2(300);
  // driveTurn2(85);
  //   driveStraightSlow(-1300, 25);
  //   driveTurn2Slow(220, 50);
  //   cascade.move(-127);
  // cascade2.move(-127);
  //   driveStraight2(-700);
  //   cascade2.move(0);
  // cascade.move(0);
  // driveStraight2(-300);
  //   cascade.move(90);
  // cascade2.move(90);
  //   banshee.move(-127);
  //   cascade.move(0);
  // cascade2.move(0);
  //   delay(500);
  //   driveStraight2(200);

}

void Ring_Rush_Red()
{ // done
 
  cascade.move(70);
  cascade2.move(70);
  delay(500);
  cascade2.move(0);
  cascade.move(0);//cascadeup and hold
  delay(250);
    driveStraight2(-375);//score preload
    cascade.move(-70);
  cascade2.move(-70);
  delay(500);
  
      delay(500);
  driveStraightC(300);
  cascade.move(-70);
  cascade2.move(-70);
   cascade.move(0);
  cascade2.move(0);
  driveTurn2(30);
  driveStraight2(-250);
  driveStraight2(400);
  driveStraight2(-250);
  driveStraight2(400);//toggle changed
//  cored
}
void Grab_Pin()
{
}
void autonomous()
{
  if (atn == 0)
  {
  }
  else if (atn == 0)
  {
    DriveStraightAuto();
  }
  else if (atn == 1)
  {
    RightSide();
  }
  else if (atn == 2)
  {
    LeftSide();
  }
  else if (atn == 3)
  {
     Standard_AWP_blue();
  }
  else if (atn == 4)
  {
    Goal_Rush_Blue();
  }
  else if (atn == 5)
  {
    goal_safe_side_blue();
  }
  else if (atn == 6)
  {
    goal_safe_side_red();
  }
  else if (atn == 7)
  {
    Ring_Rush_Red();
  }
  else if (atn == 8)
  {
    Ring_Rush_blue();
  }
  else if (atn == 9)
  {
    skill_run();
  }
}