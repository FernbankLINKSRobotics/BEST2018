#include "main.h"
#include "claw.h"

void setRotation(int rot){
  motorSet(4, rot); // Servo -> rot = rotation
  // normal motorSet is speed w/ servos its rotation
}

void setClamp(int cla){
  motorSet(5, cla);
}
