#include <Servo.h>
#include <Arduino.h>

#define SERVO_RIGHTPIN 12
#define SERVO_LEFTPIN 11
#define SENSOR_RIGHTPIN 10
#define SENSOR_LEFTPIN 9

Servo myServo;

int pos = 0;

class Servo
{
private:
  byte pin;
public:
  Servo() {} // no use

  Servo(byte pin)
  {
    this->pin = pin;
  }

  void init()
  {
    pinMode(pin, OUTPUT);
  }

  void init(byte defaultState)
  {
    init();
    if (defaultState == 1) {
      on();
    }
    else {
      off();
    }
  }

  void on()
  {
    digitalWrite(pin, 1);
  }

  void off()
  {
    digitalWrite(pin, 0);
  }
};

void setup() {
  myServo.attach(11);
  myServo.write(90);
}

void loop() {
  myServo.write(180);
}