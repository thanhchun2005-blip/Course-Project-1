#ifndef DATABASE_H
#define DATABASE_H

#include <Arduino.h>
#include <Preferences.h>
#include "Config.h"

Preferences parkingPrefs;
String storedTags[MAX_CARS];
String storedPlates[MAX_CARS];
int carCount = 0;

void persistDatabase() {
  parkingPrefs.putUInt("count", carCount);
  for (int i = 0; i < MAX_CARS; i++) {
    String tagKey = "t" + String(i);
    String plateKey = "p" + String(i);
    if (i < carCount) {
      parkingPrefs.putString(tagKey.c_str(), storedTags[i]);
      parkingPrefs.putString(plateKey.c_str(), storedPlates[i]);
    } else {
      parkingPrefs.remove(tagKey.c_str());
      parkingPrefs.remove(plateKey.c_str());
    }
  }
}

void initDatabase() {
  parkingPrefs.begin("parking_db", false);
  carCount = parkingPrefs.getUInt("count", 0);
  if (carCount > MAX_CARS) {
    carCount = 0;
  }

  for (int i = 0; i < MAX_CARS; i++) {
    if (i < carCount) {
      String tagKey = "t" + String(i);
      String plateKey = "p" + String(i);
      storedTags[i] = parkingPrefs.getString(tagKey.c_str(), "");
      storedPlates[i] = parkingPrefs.getString(plateKey.c_str(), "");
      if (storedTags[i].length() == 0) {
        carCount = i;
        break;
      }
    } else {
      storedTags[i] = "";
      storedPlates[i] = "";
    }
  }

  persistDatabase();
}

int findTagIndex(const String& tag) {
  for (int i = 0; i < carCount; i++) {
    if (storedTags[i] == tag) {
      return i;
    }
  }
  return -1;
}

bool isTagExist(const String& tag) {
  return findTagIndex(tag) != -1;
}

void saveToData(const String& tag, const String& plate) {
  int idx = findTagIndex(tag);
  if (idx != -1) {
    storedPlates[idx] = plate;
    persistDatabase();
    return;
  }

  if (carCount < MAX_CARS) {
    storedTags[carCount] = tag;
    storedPlates[carCount] = plate;
    carCount++;
    persistDatabase();
  }
}

void removeData(const String& tag) {
  int idx = findTagIndex(tag);
  if (idx != -1) {
    for (int i = idx; i < carCount - 1; i++) {
      storedTags[i] = storedTags[i+1];
      storedPlates[i] = storedPlates[i+1];
    }
    storedTags[carCount - 1] = "";
    storedPlates[carCount - 1] = "";
    carCount--;
    persistDatabase();
  }
}

#endif
