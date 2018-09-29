#include "PID.h"
#include <algorithm>

PID::PID(double P, double I, double D, double t){
  p_ = P;
  i_ = I;
  d_ = D;
  dt_ = t;
}

void PID::setSetpoint(double x){
  s_ = x;
}

double clamp(double lo, double hi, double n){
  return std::max(lo, std::min(hi, n));
}

int PID::calc(double measure){
  int output;
  double err = s_ - measure;
  sumError_ += err;

  double pVal = p_ * err;
  double iVal = i_ * sumError_ * dt_;
  double dVal = d_ * (err - pError_) / dt_;

  output = (int) clamp(-128.0, 128.0, pVal + iVal + dVal);

  pError_ = err;
  return output;
}
