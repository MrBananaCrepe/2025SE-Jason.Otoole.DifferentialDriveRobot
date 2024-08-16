#include "DifferentialDriveRobot_servos.h"

Servo::Servo(byte pin)
{
  this->pin = pin;
}

void Servo::init()
{
  servo.attach(pin);
}

void Servo::init(Servo servo)
{
  init();
}

void Servo::forward()
{
  servo.write(2300);
}

void Servo::backward()
{
  servo.write(700);
}

void Servo::stop()
{
  servo.write(1500);
}



