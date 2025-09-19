#include "Arduino.h"
#ifndef SER_JOYSTICK_H
#define SER_JOYSTICK_H

class joystick 
{
  public:
      joystick (int , int, int );
      ~joystick() {}
      int analogX ();
      int analogY ();
      int digiSW ();
      

  private:
      int rVx;
      int rVy;
      int sw;
};

#endif