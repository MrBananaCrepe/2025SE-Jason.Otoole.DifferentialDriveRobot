#ifndef DIFFERENTIALDRIVEROBOT_SERVOS_H
#define DIFFERENTIALDRIVEROBOT_SERVOS_H

#include <Arduino.h>
#include <Servo.h>

class Servo
{
private:
  byte pin;
  Servo servo;

public:
  Servo() {} //no use
  Servo(byte pin);

  void init();
  void init(byte pin);

  void forward();
  void backward();
  void stop();
};









#endif