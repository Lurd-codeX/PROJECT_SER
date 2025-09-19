#include "SER_joystick.h"
#include "SER_IRsensor.h"
#include "SER_ultrasonic_sensor.h"
#include "SER_TempHum_sensor.h"
#include "SER_rain_sensor.h"

ultrasonic SERs_ultrasonic (8,7);

joystick SERs_joystick (A3, A4, 2); // - e1
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  SERs_ultrasonic.setupEcho();
  SERs_ultrasonic.setupTrig();
  
};

void loop() {
  // always do your initializations in the global scope for efficiency- e1
  SERs_joystick.analogX ();
  Serial.println("the X readings from the joystick is:");
  Serial.println (SERs_joystick.analogX ());
  SERs_ultrasonic.duration();
  SERs_ultrasonic.findDistance ();
  
  
  Serial.println("the distance is:");
  Serial.println (SERs_ultrasonic.distance);
  delay (1000);
}
