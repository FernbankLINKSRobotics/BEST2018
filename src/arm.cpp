#include "main.h"
#include "arm.h"

void setShoulder(int speed){
  motorSet(2, speed);
}

void setElbow(int speed){
  motorSet(3, speed);
}
