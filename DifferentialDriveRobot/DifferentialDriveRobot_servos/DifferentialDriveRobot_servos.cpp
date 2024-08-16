#include "DifferentialDriveRobot_servos.h"

myServo::Servo(byte pin)
{
  this->pin = pin;
}

void myServo::init()
{
  servo.attach(pin);
}

void myServo::init(byte pin)
{
  init();
}

void myServo::forward()
{
  servo.write(2300);
}

void myServo::backward()
{
  servo.write(700);
}

void myServo::stop()
{
  servo.write(1500);
}



