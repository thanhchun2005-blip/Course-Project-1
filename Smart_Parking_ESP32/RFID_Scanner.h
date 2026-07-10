#ifndef RFID_SCANNER_H
#define RFID_SCANNER_H

#include <Arduino.h>
#include <SPI.h>
#include <MFRC522.h>
#include "Config.h"

MFRC522 mfrc522(SS_PIN, UINT8_MAX);
MFRC522 rfid(SS_PIN, RST_PIN);

void initRFID() {
  SPI.begin(SCK_PIN, MISO_PIN, MOSI_PIN, SS_PIN);
  mfrc522.PCD_Init();
}

bool rfidSwiped() {
  if (!mfrc522.PICC_IsNewCardPresent()) return false;
  if (!mfrc522.PICC_ReadCardSerial()) return false;
  return true;
}

String getRFIDTag() {
  String uid = "";
  for (byte i = 0; i < mfrc522.uid.size; i++) {
    if (mfrc522.uid.uidByte[i] < 0x10) {
      uid += "0";
    }
    uid += String(mfrc522.uid.uidByte[i], HEX);
  }
  mfrc522.PICC_HaltA();
  mfrc522.PCD_StopCrypto1();
  uid.toUpperCase();
  return uid;
}

#endif
