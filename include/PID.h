#ifndef PID_H_
#define PID_H_

class PID {
public:
  // Init func, t = delta time
  PID(double P, double I, double D, double t);
  // Set the point that we want to go to, rn angle
  void setSetpoint(double x);
  // takes in sensor data -> motor speed
  int calc(double measure);

private:
  // local vars
  // ceoffcients
  double p_;
  double i_;
  double d_;

  double s_; // setpoint
  double dt_; // delta time

  double pError_ = 0; // previous error
  double sumError_ = 0; // Error sum
};

#endif
