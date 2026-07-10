#ifndef GATES_H
#define GATES_H

#include <Arduino.h>
#include <ESP32Servo.h>
#include "Config.h"

Servo servoIn;
Servo servoOut;

void closeEntrance() { servoIn.write(90); }
void closeExit() { servoOut.write(90); }
void openEntrance() { servoIn.write(0); }
void openExit() { servoOut.write(0); }

void initGates() {
  servoIn.attach(SERVO_IN_PIN);
  servoOut.attach(SERVO_OUT_PIN);
  closeEntrance();
  closeExit();
}

#endif
