#include "DifferentialDriveRobot.h"

Servo::Servo(byte pin)
{
  this->pin = pin;
}

void Servo::init()
{
  pinMode(pin, OUTPUT);
}

void Servo::init(byte defaultState)
{
  init();
  if (defaultState == 1) {
    on();
  }
  else {
    off();
  }
}

void Servo::on()
{
  digitalWrite(pin, 1);
}

void Servo::off()
{
  digitalWrite(pin, 0);
}





