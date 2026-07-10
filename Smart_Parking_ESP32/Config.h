#ifndef CONFIG_H
#define CONFIG_H

#include <Arduino.h>

// I2C LCD Data
#define SDA_PIN 21
#define SCL_PIN 22

// SPI RFID RC522
#define SS_PIN 5
#define SCK_PIN 18
#define MISO_PIN 19
#define MOSI_PIN 23
#define RST_PIN 2
    

// IR Sensors (1 IR per Gate + 3 Slots)
#define IR_ENTRANCE_PIN 34  // Cổng vào
#define IR_EXIT_PIN 35      // Cổng ra

#define SLOT1_IR 4
#define SLOT2_IR 3  // RX0
#define SLOT3_IR 1  // TX0

// Servos & Buzzer
#define SERVO_IN_PIN 15
#define SERVO_OUT_PIN 17
#define BUZZER_PIN 16

// Capacities
#define MAX_CARS 20
#define TOTAL_SLOTS 3
#define GATE_PASS_TIMEOUT 10000UL
#define GATE_CLOSE_DELAY 800UL

// System States
enum SystemState {
  STATE_IDLE,
  ENTRANCE_WAIT_KEYPAD,
  ENTRANCE_GATE_OPEN,
  EXIT_WAIT_CONFIRM,
  EXIT_GATE_OPEN
};

// Extern definitions for shared global state
extern SystemState currentState;
extern String currentTag;
extern String currentPlate;
extern unsigned long lastRFIDRead;
extern unsigned long waitTimeout;
extern unsigned long gateOpenedAt;
extern unsigned long gateClearAt;

extern bool ir2Triggered;
extern bool ir4Triggered;

#endif
