#include "SER_joystick.h"
#include "Arduino.h"

  joystick::joystick (int a,int b, int c) : rVx(a), rVy(b), sw(c) {};
  joystick ::analogX ()
  {
    return analogRead (rVx);
  };
  joystick::analogY ()
  {
    return analogRead (rVy);
  };
  joystick::digiSW ()
  {
    return digitalRead (sw);
  };

  