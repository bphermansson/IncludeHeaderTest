#include <Arduino.h>
#include "code.h"

void setup(){
  Serial.begin(115200); // opens serial port, sets data rate to 115200 bps
  delay(5000);
  sayMyName(myName);
}

void loop(){
  delay(10000);
}