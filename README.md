# PROJECT_SER
# PROJECT_SER

# Smart Environment Rover (SER)

An Arduino-based modular project that simulates an intelligent rover capable of
environment awareness using multiple sensors.

## Features
- **Joystick module**: Manual control inputs
- **Ultrasonic sensor**: Distance measurement
- **IR line sensor**: Line detection for tracking
- **DHT sensor**: Temperature and humidity monitoring
- **Rain sensor**: Detects rainfall conditions

## Extra Features
- **machine learning**: in the long run I intend to add a machine learning feature that would help to study and predict the environment based on data gotten from the sensors

## Structure
- `SER_joystick.h/.cpp` → Joystick class
- `SER_ultrasonic_sensor.h/.cpp` → Ultrasonic class
- `SER_IRsensor.h/.cpp` → Line sensor class
- `SER_TempHum_sensor.h/.cpp` → Temperature & humidity class
- `SER_rain_sensor.h/.cpp` → Rain sensor class
- `SmartEnvironmentRover.ino` → Main entry (setup + loop)

## Probable Future Work
- Expansion to ESP32 for IoT capabilities this i am not sure of but ill try my best to implement as i have other goals to achieve

---

Developed by: Falade Temiloluwa Jeremiah  
Goal: Build modular embedded projects while learning C++/Arduino

