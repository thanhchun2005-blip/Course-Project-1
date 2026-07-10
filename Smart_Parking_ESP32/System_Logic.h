#ifndef SYSTEM_LOGIC_H
#define SYSTEM_LOGIC_H

#include <Arduino.h>
#include "Config.h"
#include "Database.h"
#include "Display.h"
#include "RFID_Scanner.h"
#include "Keypad_Input.h"
#include "Gates.h"
#include "Sensors.h"

void resetSession(bool refreshDisplay = true) {
  currentState = STATE_IDLE;
  currentTag = "";
  currentPlate = "";
  waitTimeout = 0;
  gateOpenedAt = 0;
  gateClearAt = 0;
  ir2Triggered = false;
  ir4Triggered = false;
  if (refreshDisplay) {
    displayDefault(true);
  }
}

void startGateTracking() {
  gateOpenedAt = millis();
  gateClearAt = 0;
}

void resetGateSessionKeepMessage() {
  currentState = STATE_IDLE;
  currentTag = "";
  currentPlate = "";
  gateOpenedAt = 0;
  gateClearAt = 0;
  ir2Triggered = false;
  ir4Triggered = false;
  waitTimeout = millis();
}

void handleIdleState() {
  displayDefault();
  if (rfidSwiped() && millis() - lastRFIDRead > 2000) {
    currentTag = getRFIDTag();
    if (currentTag == "") return;
    lastRFIDRead = millis();
    int idx = findTagIndex(currentTag);
    if (idx >= 0) {
      beepSuccess();
      currentPlate = storedPlates[idx];
      displayClearInfo("BS: " + currentPlate, "Bam # de mo cong");
      currentState = EXIT_WAIT_CONFIRM;
      waitTimeout = millis();
    } else {
      if (getAvailableSlots() <= 0) {
        beepError();
        displayClearInfo("Bai Da Day!", "Vui long doi...");
        waitTimeout = millis();
      } else {
        beepSuccess();
        currentPlate = "";
        displayClearInfo("Nhap bien so: ", "");
        currentState = ENTRANCE_WAIT_KEYPAD;
        waitTimeout = millis();
      }
    }
  }

  if (waitTimeout != 0 && millis() - waitTimeout > 2000) {
    waitTimeout = 0;
    displayDefault(true);
  }
}

void handleEntranceKeypad() {
  char key = readKey();
  if (key) {
    waitTimeout = millis();
    if (key == '#') {
      if (currentPlate.length() > 0) {
        beepSuccess();
        currentState = ENTRANCE_GATE_OPEN;
        ir2Triggered = false;
        startGateTracking();
        openEntrance();
        displayGateStatus("Xe Dang Vao...", true);
      }
    } else if (key == '*') {
      beepSuccess();
      if (currentPlate.length() > 0) {
        currentPlate.remove(currentPlate.length() - 1);
        printLine(1, currentPlate);
      }
    } else {
      beepSuccess();
      if (currentPlate.length() < 10) {
        currentPlate += key;
        printLine(1, currentPlate);
      }
    }
  }

  if (millis() - waitTimeout > 15000) {
    resetSession();
  }
}

void handleEntranceGateOpen() {
  displayGateStatus("Xe Dang Vao...");

  if (millis() - gateOpenedAt > GATE_PASS_TIMEOUT) {
    beepError();
    closeEntrance();
    displayClearInfo("Cong vao timeout", "Quet the lai");
    resetGateSessionKeepMessage();
    return;
  }

  if (digitalRead(IR_ENTRANCE_PIN) == LOW && !ir2Triggered) {
    ir2Triggered = true;
  }
  if (ir2Triggered && digitalRead(IR_ENTRANCE_PIN) == HIGH) {
    if (gateClearAt == 0) {
      gateClearAt = millis();
    }
  } else {
    gateClearAt = 0;
  }

  if (gateClearAt != 0 && millis() - gateClearAt >= GATE_CLOSE_DELAY) {
    saveToData(currentTag, currentPlate);
    closeEntrance();
    resetSession();
  }
}

void handleExitConfirm() {
  char exitKey = readKey();
  if (exitKey) {
    waitTimeout = millis();
    if (exitKey == '#') {
      beepSuccess();
      openExit();
      ir4Triggered = false;
      startGateTracking();
      displayGateStatus("Xe Dang Ra...", true);
      currentState = EXIT_GATE_OPEN;
    } else if (exitKey == '*') {
      beepSuccess();
      resetSession();
    }
  }
  if (millis() - waitTimeout > 15000) {
    resetSession();
  }
}

void handleExitGateOpen() {
  displayGateStatus("Xe Dang Ra...");

  if (millis() - gateOpenedAt > GATE_PASS_TIMEOUT) {
    beepError();
    closeExit();
    displayClearInfo("Cong ra timeout", "Quet the lai");
    resetGateSessionKeepMessage();
    return;
  }

  if (digitalRead(IR_EXIT_PIN) == LOW && !ir4Triggered) {
    ir4Triggered = true;
  }
  if (ir4Triggered && digitalRead(IR_EXIT_PIN) == HIGH) {
    if (gateClearAt == 0) {
      gateClearAt = millis();
    }
  } else {
    gateClearAt = 0;
  }

  if (gateClearAt != 0 && millis() - gateClearAt >= GATE_CLOSE_DELAY) {
    removeData(currentTag);
    closeExit();
    resetSession();
  }
}

#endif
