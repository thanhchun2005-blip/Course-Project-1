#ifndef SENSORS_H
#define SENSORS_H

#include <Arduino.h>
#include "Config.h"

bool buzzerActive = false;
bool buzzerLevelLow = false;
uint8_t buzzerTransitionsLeft = 0;
unsigned long buzzerLastChange = 0;

void setBuzzerIdle() {
  digitalWrite(BUZZER_PIN, HIGH);
  buzzerActive = false;
  buzzerLevelLow = false;
  buzzerTransitionsLeft = 0;
}

void initSensors() {
  pinMode(BUZZER_PIN, OUTPUT);
  setBuzzerIdle();

  pinMode(IR_ENTRANCE_PIN, INPUT);
  pinMode(IR_EXIT_PIN, INPUT);
  
  pinMode(SLOT1_IR, INPUT);
  pinMode(SLOT2_IR, INPUT);
  pinMode(SLOT3_IR, INPUT);
}

void queueBeep(uint8_t beepCount) {
  if (beepCount == 0) {
    setBuzzerIdle();
    return;
  }

  buzzerActive = true;
  buzzerLevelLow = true;
  buzzerTransitionsLeft = (beepCount * 2) - 1;
  buzzerLastChange = millis();
  digitalWrite(BUZZER_PIN, LOW);
}

void updateBuzzer() {
  if (!buzzerActive) {
    return;
  }

  if (millis() - buzzerLastChange < 90) {
    return;
  }

  if (buzzerTransitionsLeft == 0) {
    setBuzzerIdle();
    return;
  }

  buzzerLastChange = millis();
  buzzerLevelLow = !buzzerLevelLow;
  digitalWrite(BUZZER_PIN, buzzerLevelLow ? LOW : HIGH);
  buzzerTransitionsLeft--;

  if (buzzerTransitionsLeft == 0 && !buzzerLevelLow) {
    setBuzzerIdle();
  }
}

void beepError() {
  queueBeep(3);
}

void beepSuccess() {
  queueBeep(1);
}

int getAvailableSlots() {
  int occupied = (!digitalRead(SLOT1_IR)) + 
                 (!digitalRead(SLOT2_IR)) + 
                 (!digitalRead(SLOT3_IR));
  return TOTAL_SLOTS - occupied;
}

void getSlotsStatus(char* statusStr) {
  statusStr[0] = (!digitalRead(SLOT1_IR)) ? 'X' : '0';
  statusStr[1] = ' ';
  statusStr[2] = (!digitalRead(SLOT2_IR)) ? 'X' : '0';
  statusStr[3] = ' ';
  statusStr[4] = (!digitalRead(SLOT3_IR)) ? 'X' : '0';
  statusStr[5] = '\0';
}

#endif
