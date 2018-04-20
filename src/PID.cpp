#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
  //initializing PID factors
  PID::Kp = Kp;
  PID::Ki = Ki;
  PID::Kd = Kd;

  //initializing Error factor for PID
  p_error = 0.0;
  i_error = 0.0;
  d_error = 0.0;



}

void PID::UpdateError(double cte) {

  //d_error need to be updated
  d_error = cte - p_error;
  //i_error need to be updated
  i_error = i_error + cte;

  p_error = cte;
}

double PID::TotalError() {
  return -(Kp*p_error + Ki*i_error + Kd*d_error);
}
