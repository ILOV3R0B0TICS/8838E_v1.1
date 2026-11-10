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
//   Claw.set_value(false);
//   cascade.move(70);
//   cascade2.move(70);
//   delay(500);
//   cascade2.move(0);
//   cascade.move(0);//cascadeup and hold
//   delay(250);
//     driveStraight2(-375);//score preload
//     cascade.move(-70);
//   cascade2.move(-70);
//   delay(500);
//     Claw.set_value(true);
//       delay(500);
//   driveStraightC(400);
//   cascade.move(-70);
//   cascade2.move(-70);
//    cascade.move(0);
//   cascade2.move(0);
//   driveTurn2(40);
//   driveStraight2(-250);
//   driveStraight2(400);
//    driveStraight2(-250);
//   driveStraight2(400);//toggle changed
//   driveStraightC(-275);
//   driveTurn2(35);
//   driveStraightC(-390);
//   driveTurn2(-11);
//   driveStraightSlow(-540, 25);
//   Claw.set_value(false);
//   delay(500);
//  cascade.move(-100);
//   cascade2.move(-100);
//   delay(500);
//   cascade2.move(0);
//   cascade.move(0);
//   driveTurn2(-125);
//   driveStraight2(-575);
//   delay(250);
//   cascade.move(90);
//   cascade2.move(90);
//   delay(500);
//   cascade2.move(0);
//   cascade.move(0);
//   Claw.set_value(true);
//   driveStraight2(300);
//    cascade.move(-127);
//   cascade2.move(-127);//second preload scored

 //Claw.set_value(false);
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
    banshee.move(-90);
      delay(500);
  driveStraightC(300);
  cascade.move(-70);
  cascade2.move(-70);
   cascade.move(0);
  cascade2.move(0);
  banshee.move(90);
  driveTurn2(30);
  driveStraightC(400);
  driveTurn2(30);
  delay(250);
  driveStraight2(-150);
  driveStraightSlow(450, 50);
  delay(250);
  // driveStraight2(0);
  // driveStraightSlow(0, 50);
  // delay(250);//toggle changed
  driveStraightC(-150);
  driveTurn2(45);
  driveStraightC(-300);
  driveTurn2(35);
  driveStraightC(-350);
  driveTurn2(-3);
  driveStraightSlow(-705, 25);
  banshee.move(90);
  delay(500);
  cascade2.move(-127);
  cascade.move(-127);
    delay(1000);
  cascade.move(0);
  cascade2.move(0);
  driveTurn2(-135);
  driveStraightSlow(-900, 25);
  delay(250);
  cascade.move(127);
  cascade2.move(127);
  delay(1000);
  cascade2.move(0);
  cascade.move(0);
  Claw.set_value(true);
  driveStraight2(300);
   cascade.move(-127);
  cascade2.move(-127);//second preload scored

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
    banshee.move(-90);
      delay(500);
  driveStraightC(300);
  cascade.move(-70);
  cascade2.move(-70);
   cascade.move(0);
  cascade2.move(0);
  banshee.move(90);
  driveTurn2(-30);
  driveStraightC(400);
  driveTurn2(-30);
  delay(250);
  driveStraight2(-150);
  driveStraightSlow(450, 50);
  delay(250);
  // driveStraight2(0);
  // driveStraightSlow(0, 50);
  // delay(250);//toggle changed
  driveStraightC(-150);
  driveTurn2(-45);
  driveStraightC(-300);
  driveTurn2(-35);
  driveStraightC(-350);
  driveTurn2(1);
  driveStraightSlow(-705, 25);
  banshee.move(90);
  delay(500);
  cascade2.move(-127);
  cascade.move(-127);
    delay(1000);
  cascade.move(0);
  cascade2.move(0);
  driveTurn2(135);
  driveStraightSlow(-900, 25);
  delay(250);
  cascade.move(127);
  cascade2.move(127);
  delay(1000);
  cascade2.move(0);
  cascade.move(0);
  Claw.set_value(true);
  driveStraight2(300);
   cascade.move(-127);
  cascade2.move(-127);//second preload scored
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
   banshee.move(90);
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
    Claw.set_value(true);
      delay(500);
  driveStraightC(300);
  cascade.move(-70);
  cascade2.move(-70);
   cascade.move(0);
  cascade2.move(0);
  driveTurn2(-30);
  driveStraight2(-250);
  driveStraight2(400);
  driveStraight2(-250);
  driveStraight2(400);//toggle changed
  driveStraightC(-50);
  driveTurn2(-30);
  driveStraightC(-300);
  driveTurn2(-35);
  driveStraightC(-350);
  driveTurn2(12);
  driveStraightSlow(-540, 25);
  banshee.move(90);
  delay(500);
 cascade.move(-100);
  cascade2.move(-100);
  delay(500);
  cascade2.move(0);
  cascade.move(0);
  driveTurn2(125);
  driveStraight2(-850);
  delay(250);
  cascade.move(90);
  cascade2.move(90);
  delay(500);
  cascade2.move(0);
  cascade.move(0);
  Claw.set_value(true);
  driveStraight2(300);
   cascade.move(-127);
  cascade2.move(-127);//second preload scored
  delay(500);
  cascade2.move(0);
  cascade.move(0);
  driveStraight2(1300);
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