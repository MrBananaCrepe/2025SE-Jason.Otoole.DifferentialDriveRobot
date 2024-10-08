#include <Servo.h>
#include <Arduino.h>

#include "DifferentialDriveRobot_servos.h"
#include "DifferentialDriveRobot_servos.cpp"

#define SERVO_PINR 9
#define SERVO_PINL 11
#define signalPinL = 12
#define signalPinR = 13


myServo servoR(SERVO_PINR);
myServo servoL(SERVO_PINL);

void setup () {
  Serial.begin(9600);
  servoL.init();
  servoR.init();

}

void loop() {
  // drive forward
  if(1 == digitalRead(signalPinL && signalPinR)) {
    ServoL.forward()
    ServoR.forward()
    delay(100);
  }

  // turn left
  else if(1 == digitalRead(signalPinL) && 0 == digitalRead(signalPinR)) {
    ServoL.backward()
    ServoR.forward()
    delay(100);
  }

  // turn right
  else if(0 == digitalRead(signalPinL) && 1 == digitalRead(signalPinR)) {
    ServoL.forward()
    ServoR.backward()
    delay(100);
  }

  // stop
  else if(0 == digitalRead(signalPinL) && 0 == digitalRead(signalPinR)) {
    ServoL.stop()
    ServoR.stop()
    delay(100);
  }
}







