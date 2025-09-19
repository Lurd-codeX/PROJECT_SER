#include "SER_ultrasonic_sensor.h"
#include "Arduino.h"

ultrasonic ::ultrasonic (int a,int b):trig (a), echo(b)
{};

ultrasonic::setupTrig () 
{
  pinMode (trig, OUTPUT);
  return 0;
}

int ultrasonic::setupEcho () 
{
  pinMode (echo, INPUT);
  return 0;
}
int ultrasonic::setTrigLow()
{
  digitalWrite(echo, LOW);
  return 0;
}
int ultrasonic::duration() 
{
  digitalWrite(trig, LOW);
  delay (500);
  digitalWrite(trig, HIGH);
  delay (1000);
  digitalWrite(trig, LOW);

  time = pulseIn (echo, HIGH);
  return time;
};

int ultrasonic::findDistance ()
{
  distance =  0.0343*time*0.5;
  return 0;
};


