#include "SER_joystick.h"
#include "SER_IRsensor.h"
#include "SER_ultrasonic_sensor.h"
#include "SER_TempHum_sensor.h"
#include "SER_rain_sensor.h"

joystick SERs_joystick (A3, A4, 8); // - e1
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
};

void loop() {
  // always do your initializations in the global scope for efficiency- e1
  SERs_joystick.analogX ();
  Serial.println("the X readings from the joystick is:");
  Serial.println (SERs_joystick.analogX ());
  delay (1000);
}
