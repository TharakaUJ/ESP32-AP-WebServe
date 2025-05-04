#include <WebServer.h>
#include <WiFi.h>
#include "webserver.h"

WebServer server(80);

void handleRoot() {
  server.send(200, "text/html", "<h1>Hello from ESP32 AP Web Server</h1>");
}

void setupWebserver() {
  // Access point setup
  WiFi.softAP("ESP32_AP", "12345678");

  Serial.println("Access Point Started");
  Serial.println(WiFi.softAPIP()); // Usually 192.168.4.1
  
  // Web server setup
  server.on("/", handleRoot);
  server.begin();
}

void loopWebserver() {
  server.handleClient();
}
