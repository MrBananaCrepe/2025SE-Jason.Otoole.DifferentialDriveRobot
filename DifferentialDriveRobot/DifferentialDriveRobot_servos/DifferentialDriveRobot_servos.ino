/*
  Purpose: Basic example of controlling a continuos servo
  Notes: 
    1. See attached schematic
    2. 100µF 25v capacitor
    3. Servo may need screw adjustment to set 1500 as stop
  Author: Ben Jones 25/4/24
  Contact: benjmain.jones21@det.nsw.edu.au
*/

#include <Servo.h>

Servo myServo;

int pos = 0;

void setup() {
  myServo.attach(11);
  myServo.write(90);
}

void loop() {
  myServo.write(180);
}