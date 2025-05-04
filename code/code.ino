#include <Arduino.h>
#include "webserver.h"

void setup() {
  Serial.begin(115200);
  setCpuFrequencyMhz(80); // Can be 80, 160, or 240
  setupWebserver();
}

void loop() {
  loopWebserver();
}