#include "main.h"
#include "claw.h"
#include "constants.h"

void setRotation(int rot){
  motorSet(motor::wrist, rot); // Servo -> rot = rotation
  // normal motorSet is speed w/ servos its rotation
}

void setClamp(int cla){
  motorSet(motor::claw, cla);
}
