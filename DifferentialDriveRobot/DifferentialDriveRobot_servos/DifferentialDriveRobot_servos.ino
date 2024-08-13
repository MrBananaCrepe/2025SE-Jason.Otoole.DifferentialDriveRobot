#include <Servo.h>
#include <Arduino.h>

#include "DifferentialDriveRobot_servos.h"
#include "DifferentialDriveRobot_servos.cpp"

#define SERVO_PINR 9
#define SERVO_PINL 11
int signalPinL = 12;
int signalPinR = 13;

Servo myServoL;
Servo myServoR;

void setup () {
  Serial.begin(9600);
  pinMode(signalPinL, INPUT);
  pinMode(signalPinR, INPUT);

  // 2300 = forward | 700 = backward | 1500 = stop
  myServoL.attach(SERVO_PINR, 700, 2300);
  myServoR.attach(SERVO_PINL, 2300, 700); // flipped bc servo reversed
}

void loop() {
  // drive forward
  if(1 == digitalRead(signalPinL && signalPinR)) {
    myServoL.writeMicroseconds(2300);
    myServoR.writeMicroseconds(2300);
    delay(100);
  }

  // turn left
  else if(1 == digitalRead(signalPinL) && 0 == digitalRead(signalPinR)) {
    myServoL.writeMicroseconds(2300);
    myServoR.writeMicroseconds(1500);
    delay(100);
  }

  // turn right
  else if(0 == digitalRead(signalPinL) && 1 == digitalRead(signalPinR)) {
    myServoL.writeMicroseconds(1500);
    myServoR.writeMicroseconds(2300);
    delay(100);
  }

  // stop
  else if(0 == digitalRead(signalPinL) && 0 == digitalRead(signalPinR)) {
    myServoL.writeMicroseconds(1500);
    myServoR.writeMicroseconds(1500);
    delay(100);
  }
}







