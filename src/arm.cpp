#include "main.h"
#include "arm.h"
#include "constants.h"
#include "PID.h"

//PID shoulderPID = void;

void initArm(){
  //shoulderPID = PID::PID(1, 1, 1, 1);
}

void setShoulder(int speed){
  motorSet(motor::shoulder, speed);
}

void setElbow(int speed){
  motorSet(motor::elbow, speed);
}

void setTwist(int speed){
  motorSet(motor::twist, speed);
}


void updateArm(){
  // TODO: replac with real code
  // pot 1
  // pot 2
  // double s = shoulderPID.calc(pot 1)
  // e = elbowPID.calc(pot 2)
  // set s
  // set e
}
