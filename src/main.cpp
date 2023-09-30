#include <Arduino.h>
#include "ElectricChargeSensor.h"

ElectricChargeSensor ecs = ElectricChargeSensor(4, 6); // 5M resistor between pins 4 & 6

void setup() {
  ecs.setAutoCalibate(0xFFFFFFFF); // turn off autocalibrate on channel 1 - just as an example
  Serial.begin(9600);
}

void loop() {
  long start = millis();
  long total =  ecs.getValue(50);

  Serial.print(millis() - start);        // check milliseconds per one round
  Serial.print("\t");                    

  Serial.print(total);                   // print sensor output value
  Serial.print("\t");

  Serial.println(ecs.isPress(50));       // print sersor is pressed or not

  delay(10); 
}

