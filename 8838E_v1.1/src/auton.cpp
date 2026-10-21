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

void RightSide()
{
  cascade.move(70);
  cascade2.move(70);
  delay(500);
  cascade2.move(0);
  cascade.move(0);
  delay(250);
    driveStraight2(-375);
  driveStraightC(400);
  cascade.move(-70);
  cascade2.move(-70);
  delay(500);
   cascade.move(0);
  cascade2.move(0);
  driveTurn2(40);
  driveStraight2(-250);
  driveStraight2(350);
  driveStraightC(-150);
  driveTurn2(15);
  driveStraightC(-250);
  driveTurn2(-18);
  driveStraight2(-300);
  driveTurn2(-125);
   cascade.move(90);
  cascade2.move(90);
  delay(500);
  cascade2.move(5);
  cascade.move(5);
  driveStraight2(-500);
  driveStraight2(250);
   cascade.move(-127);
  cascade2.move(-127);
}
void Goal_Rush_red()
{
}

void Ring_Rush_red()
{ // done
}

void goal_safe_side_red()
{ // not tested
}

void Standard_AWP_blue()
{ // done
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
  driveStraight2(-100);
  driveStraight2(180);
  driveStraight2(-100);
  driveStraight2(180);
  driveStraight2(-1000);
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
    Standard_AWP_blue();
  }
  else if (atn == 3)
  {
    Goal_Rush_red();
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
    Ring_Rush_red();
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