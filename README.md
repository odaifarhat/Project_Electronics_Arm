# Project_Electronics_Arm

Motor drive design and implementation for robot arm,Controlling a 6 servos position using a potentiometer (variable resistor) for control angle.


# Component List:

Name====>Quantity====>Component

U1====>1====>(Arduino Uno R3)

SERVO_elbow SERVO_Gripper SERVO_shoulder SERVO_wrist SERVO_base SERVO_freedom ====>6 ====> (Positional Micro Servo)

Rpot1 Rpot2 Rpot3 Rpot4 Rpot5 Rpot6 ====> 6 ====> (250 kΩ Potentiometer)

# Simulation:

https://www.tinkercad.com/things/c8KEayHFoLl


# Circuit connection:

Step by Step:

Step_1, connect ground and power (5v) to all pieces.

Step_2, connect the signal pins (8 to 13) from the motor to digtal(pwm) in arduino.

Step_3, connect the analogs pins (A0 to A5) in arduino from to potentiometer (wiper).

Step_4, we go to the code and there will be an explanation in each line.

# See the picture

![Controlling a 6_servos position using a potentiometer,](https://user-images.githubusercontent.com/56201060/122440721-843bd800-cfa5-11eb-9f87-5c50ecd5b21a.png)


# Code:

/* Controlling a 6 servos position using a potentiometer (variable resistor).


   17 june 2021 _ Eng.odai Farhat

*/

#include <Servo.h>

Servo s1base,s2shoulder,s3elbow,s4wrist,s5Gripper,s6freedom;; // create servo object to control a servo

int potpin1 = A0; // analog pin used to connect the potentiometer

int potpin2 = A1; // analog pin used to connect the potentiometer

int potpin3 = A2; // analog pin used to connect the potentiometer

int potpin4 = A3; // analog pin used to connect the potentiometer

int potpin5 = A4; // analog pin used to connect the potentiometer

int potpin6 = A5; // analog pin used to connect the potentiometer

/********************************************************************************/

int val; // variable to read the value from the analog pin

int va2; // variable to read the value from the analog pin

int va3; // variable to read the value from the analog pin

int va4; // variable to read the value from the analog pin

int va5; // variable to read the value from the analog pin

int va6; // variable to read the value from the analog pin

/********************************************************************************/

void setup() {

s1base.attach(8); // attaches the servo on pin 8 to the servo object

s2shoulder.attach(9); // attaches the servo on pin 9 to the servo object

s3elbow.attach(10); // attaches the servo on pin 10 to the servo object

s4wrist.attach(11); // attaches the servo on pin 11 to the servo object

s5Gripper.attach(12); // attaches the servo on pin 12 to the servo object

s6freedom.attach(13); // attaches the servo on pin 13 to the servo object

}

void loop() {

val = analogRead(potpin1); // reads the value of the potentiometer (value between 0 and 1023)

val = map(val, 0, 1023, 0, 180); // scale it to use it with the servo (value between 0 and 180)

s1base.write(val); // sets the servo position according to the scaled value

delay(15); // waits for the servo to get there

/********************************************************************************/

va2 = analogRead(potpin2); // reads the value of the potentiometer (value between 0 and 1023)

va2 = map(va2, 0, 1023, 0, 180); // scale it to use it with the servo (value between 0 and 180)

s2shoulder.write(va2); // sets the servo position according to the scaled value

delay(15); // waits for the servo to get there

/********************************************************************************/

va3 = analogRead(potpin3); // reads the value of the potentiometer (value between 0 and 1023)

va3 = map(va3, 0, 1023, 0, 180); // scale it to use it with the servo (value between 0 and 180)

s3elbow.write(va3); // sets the servo position according to the scaled value

delay(15);

/********************************************************************************/

va4 = analogRead(potpin4); // reads the value of the potentiometer (value between 0 and 1023)

va4 = map(va4, 0, 1023, 0, 180); // scale it to use it with the servo (value between 0 and 180)

s4wrist.write(va4); // sets the servo position according to the scaled value

delay(15);

/********************************************************************************/

va5 = analogRead(potpin5); // reads the value of the potentiometer (value between 0 and 1023)

va5 = map(va5, 0, 1023, 0, 180); // scale it to use it with the servo (value between 0 and 180)

s5Gripper.write(va5); // sets the servo position according to the scaled value

delay(15);

/********************************************************************************/

va6 = analogRead(potpin6); // reads the value of the potentiometer (value between 0 and 1023)

va6 = map(va6, 0, 1023, 0, 180); // scale it to use it with the servo (value between 0 and 180)

s6freedom.write(va6); // sets the servo position according to the scaled value

delay(15);

}

/************************************************************************************************************************************/

                                                          /* END */
