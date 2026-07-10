#ifndef DISPLAY_H
#define DISPLAY_H

#include <Arduino.h>
#include <stdio.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <string.h>
#include "Sensors.h"

LiquidCrystal_I2C lcd(0x27, 16, 2);

void initDisplay() {
  Wire.begin(SDA_PIN, SCL_PIN);
  lcd.begin(16, 2);
  lcd.backlight();
}

void displayClearInfo(String line1, String line2) {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(line1);
  lcd.setCursor(0, 1);
  lcd.print(line2);
}

void printLine(int line, String text) {
  lcd.setCursor(0, line);
  lcd.print("                ");
  lcd.setCursor(0, line);
  lcd.print(text);
}

void displayGateStatus(const char* title, bool force = false) {
  int avail = getAvailableSlots();
  char statusStr[6];
  char bottomLine[17];
  static char lastTitle[17] = "";
  static char lastBottom[17] = "";

  getSlotsStatus(statusStr);
  snprintf(bottomLine, sizeof(bottomLine), "Cho:%s T:%d", statusStr, avail);

  if (!force && strcmp(lastTitle, title) == 0 && strcmp(lastBottom, bottomLine) == 0) {
    return;
  }

  strncpy(lastTitle, title, sizeof(lastTitle) - 1);
  lastTitle[sizeof(lastTitle) - 1] = '\0';
  strncpy(lastBottom, bottomLine, sizeof(lastBottom) - 1);
  lastBottom[sizeof(lastBottom) - 1] = '\0';

  printLine(0, title);
  printLine(1, bottomLine);
}

void displayDefault(bool force = false) {
  int avail = getAvailableSlots();
  char statusStr[6];
  static char lastStatus[6] = "";
  static int lastAvail = -1;

  getSlotsStatus(statusStr);

  if (!force && avail == lastAvail && strcmp(statusStr, lastStatus) == 0) {
    return;
  }

  lastAvail = avail;
  strcpy(lastStatus, statusStr);

  lcd.clear();
  lcd.setCursor(0, 0);
  if (avail <= 0) {
    lcd.print("Bai Da Day!");
  } else {
    lcd.print("Cho TRONG: ");
    lcd.print(avail);
  }
  
  lcd.setCursor(0, 1);
  lcd.print("TrangThai: ");
  lcd.print(statusStr);
}

#endif
