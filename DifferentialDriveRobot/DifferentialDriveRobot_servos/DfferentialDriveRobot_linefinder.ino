/*
  Purpose: Basic example of reading binary data from the Seead Line Finder sensor module
  Notes: 
    1. Connect to a digital pin
    2. High when black is detected, Low when white is detected
  Author: Ben Jones 13/7/23
  Contact: benjmain.jones21@det.nsw.edu.au
  Source: https://wiki.seeedstudio.com/Grove-Line_Finder/
*/

static unsigned int lineFollower = 3;

void setup() {
  Serial.begin(9600);
  pinMode(lineFollower, INPUT);
}

void loop() {
  if(HIGH == digitalRead(signalPin))
      Serial.println("black");
    else  Serial.println("white");  // display the color
    delay(1000);
}