#include "main.h"
#include "drive.h"
#include "constants.h"

void setWinch(int speed){
  motorSet(motor::winch, speed);
}
