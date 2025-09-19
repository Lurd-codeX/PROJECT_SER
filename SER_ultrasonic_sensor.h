#ifndef SER_ULTRASONIC_SENSOR_H
#define SER_ULTRASONIC_SENSOR_H

class ultrasonic
{
public:
  ultrasonic (int, int);
  ~ultrasonic () {}
  int setTrigLow();
  int setupTrig();
  int setupEcho();
  int duration();
  int findDistance ();
  int distance;
  int time;

private:
  int trig;
  int echo;
};

#endif