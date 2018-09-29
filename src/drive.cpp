#include "main.h"
#include "drive.h"
#include "constants.h"

void winch(int speed){
  motorSet(motor::winch, speed);
}
