/*
 Controlling a 6_servos position using a potentiometer (variable resistor).

*/

#include <Servo.h>

Servo s1base,s2shoulder,s3elbow,s4wrist,s5Gripper,s6freedom;;  // create servo object to control a servo

int potpin1 =  A0; // analog pin used to connect the potentiometer
int potpin2 =  A1;
int potpin3 =  A2;
int potpin4 =  A3;
int potpin5 =  A4;
int potpin6 =  A5;

/***********************************/ 

int val;            // variable to read the value from the analog pin
int va2;
int va3;
int va4;
int va5;
int va6;


/**********************************/

void setup() {
  s1base.attach(8);    // attaches the servo on pin 8 to the servo object
  s2shoulder.attach(9);
  s3elbow.attach(10);
  s4wrist.attach(11);
  s5Gripper.attach(12);
  s6freedom.attach(13);
}

void loop() {
  val = analogRead(potpin1);            // reads the value of the potentiometer (value between 0 and 1023)
  val = map(val, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  s1base.write(val);                  // sets the servo position according to the scaled value
  delay(15);                           // waits for the servo to get there
  
  /*******************************/
  
  va2 = analogRead(potpin2);            // reads the value of the potentiometer (value between 0 and 1023)
  va2 = map(va2, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  s2shoulder.write(va2);                  // sets the servo position according to the scaled value
  delay(15);                           // waits for the servo to get there
  
  /*******************************/
  
  va3 = analogRead(potpin3);            // reads the value of the potentiometer (value between 0 and 1023)
  va3 = map(va3, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  s3elbow.write(va3);                  // sets the servo position according to the scaled value
  delay(15);
   
  /*******************************/
  
  va4 = analogRead(potpin4);            // reads the value of the potentiometer (value between 0 and 1023)
  va4 = map(va4, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  s4wrist.write(va4);                  // sets the servo position according to the scaled value
  delay(15);
   
  /*******************************/
  
  va5 = analogRead(potpin5);            // reads the value of the potentiometer (value between 0 and 1023)
  va5 = map(va5, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  s5Gripper.write(va5);                  // sets the servo position according to the scaled value
  delay(15);
   
  /*******************************/
  
  va6 = analogRead(potpin6);            // reads the value of the potentiometer (value between 0 and 1023)
  va6 = map(va6, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  s6freedom.write(va6);                  // sets the servo position according to the scaled value
  delay(15); 
  
  
}
