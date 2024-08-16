#ifndef DIFFERENTIALDRIVEROBOT_SERVOS_H
#define DIFFERENTIALDRIVEROBOT_SERVOS_H

#include <Arduino.h>
#include <Servo.h>

class myServo
{
private:
  byte pin;
  myServo servo;

public:
  myServo() {} //no use
  myServo(byte pin);

  void init();
  void init(byte pin);

  void forward();
  void backward();
  void stop();
};









#endif