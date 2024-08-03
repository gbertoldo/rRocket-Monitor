#include <Arduino.h>
#include "Barometer.h"

#define pinBat A1 // Battery +9V
#define pinDp  A2 // Drogue +
#define pinDm  A3 // Drogue -
#define pinPp  A7 // Parachute +
#define pinPm  A6 // Parachute -

float Vref = 3.3; // Reference voltage (provided by 3V3 pin)
float Rfactor =(1.0+6.8/2.2); // Factor to calculate the ddp of the voltage divider  
float analogToVolts = 0; // Factor to convert from analog to volt (see the definition bellow)

Barometer barometer;

void setup() {

  Serial.begin(115200);

  // Reading the analog reference (3.3 V)
  float Aref = 0.0;
  for (int i = 0; i<100; ++i)
  {
    Aref+=analogRead(A0);
    delay(1);
  }
  Aref=Aref*0.01;

  // Calculating the analog to voltage conversion
  analogToVolts = Rfactor*Vref/Aref;
  
  // Initializing the barometer
  barometer.begin();
}

void loop() {

  // Reading voltages...
  float ddpD = analogToVolts*fabs((float)analogRead(pinDp)-(float)analogRead(pinDm));
  float ddpP = analogToVolts*fabs((float)analogRead(pinPp)-(float)analogRead(pinPm));
  float ddpB = analogToVolts*fabs(analogRead(pinBat));
  
  Serial.print("<1,");
  Serial.print(millis()); // Time (milliseconds)
  Serial.print(",");
  Serial.print(barometer.getAltitude()); // Altitude (m)
  Serial.print(",");
  Serial.print(ddpB); // Voltage of the battery (V)
  Serial.print(",");
  Serial.print(ddpD); // Voltage through the drogue terminal (V)
  Serial.print(",");
  Serial.println(ddpP); // Voltage through the parachute terminal (V)
  Serial.print(">");

}
