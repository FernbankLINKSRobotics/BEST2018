#include "main.h"
#include "arm.h"
#include "constants.h"

void setShoulder(int speed){
  motorSet(motor::shoulder, speed);
}

void setElbow(int speed){
  motorSet(motor::elbow, speed);
}
