Effects of P,I and D:

The PID class is initialized with 3 variables,i.e. the Control Parameters for Propogation, Integral & Differential term.
The values are taken randomly out of experimentation.

* Kp : 0.2 - the control parameter for Propogation.
The propogation parameter helps the car to move with respect to the cte( Cross Track Error ) provided by the simulator.
The parameter is directly proportional with the steer_value, hence more the value more the vehicle tends to overshoot from the desired track.  

* Ki : 0.0 - the control parameter for Integral.
I have not considered the Integral parameter as it degrades the performance by increasing the error of propogation.

* Kd : 1.55- the control parameter for Differential.
The differential parameter helps to reduce the overshoot caused by the Propogation of the vehicle and hence help the vehicle to maintain the desired path.

// The Kd value of 0.47 along with the throttle value of 0.05 works well in my system which has low processor.
