#include "Config.h"
#include "Database.h"
#include "Display.h"
#include "RFID_Scanner.h"
#include "Keypad_Input.h"
#include "Gates.h"
#include "Sensors.h"
#include "System_Logic.h"

// Define the global states initialized in Config.h
SystemState currentState = STATE_IDLE;
String currentTag = "";
String currentPlate = "";
unsigned long waitTimeout = 0;  // Timeout cho việc bấm phím
unsigned long lastRFIDRead = 0;
unsigned long gateOpenedAt = 0;
unsigned long gateClearAt = 0;

bool ir2Triggered = false;
bool ir4Triggered = false;

void setup() {
  initSensors();
  initDatabase();
  initGates();
  initDisplay();
  initRFID();
  displayDefault(true);
  
}

void loop() {
  updateBuzzer();

  switch (currentState) {
    case STATE_IDLE:
      handleIdleState();
      break;

    case ENTRANCE_WAIT_KEYPAD:
      handleEntranceKeypad();
      break;

    case ENTRANCE_GATE_OPEN:
      handleEntranceGateOpen();
      break;

    case EXIT_WAIT_CONFIRM:
      handleExitConfirm();
      break;

    case EXIT_GATE_OPEN:
      handleExitGateOpen();
      break;
  }
}
