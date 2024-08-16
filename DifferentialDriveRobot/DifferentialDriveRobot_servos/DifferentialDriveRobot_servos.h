#ifndef DIFFERENTIALDRIVEROBOT_H
#define DIFFERENTIALDRIVEROBOT_H

#include <Arduino.h>
#include <Servo.h>

class Servo
{
private:
  byte pin;

public:
  Servo() {} //no use
  Servo(byte pin);

  void init();
  void init(byte defaultState);

  void on();
  void off();
};









#endif