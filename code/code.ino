#include <Arduino.h>
#include "webserver.h"

void setup() {
  Serial.begin(115200);
  setupWebserver();
}

void loop() {
  loopWebserver();
}