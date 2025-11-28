#include <Arduino.h>
#include "code.h"
#include "func.h"

void setup(){
  Serial.begin(115200); // opens serial port, sets data rate to 115200 bps
  delay(5000);
  sayMyName(myName);

  Serial.print(temp);

  Serial.print(treplussju());

}

void loop(){
  delay(10000);
}