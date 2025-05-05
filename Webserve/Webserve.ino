#include <WebServer.h>
#include <WiFi.h>

WebServer server(80);

void handleRoot()
{
    server.send(200, "text/html", "<h1>Hello from ESP32 AP Web Server</h1><script>document.body.style.backgroundColor = 'lightblue';</script>");
}

void setup()
{
    Serial.begin(115200);

    // Connect to external Wi-Fi network
    const char *ssid = "Disconnected";
    const char *password = "whybother";

    WiFi.begin(ssid, password);

    // Wait for connection
    while (WiFi.status() != WL_CONNECTED)
    {
        delay(1000);
        Serial.println("Connecting to WiFi...");
    }

    Serial.println("Connected to WiFi");

    Serial.print("Access Point \"");
    Serial.print(ssid);
    Serial.println("\" started");
    Serial.print("IP address: ");
    Serial.println(WiFi.softAPIP());

    // Web server setup
    server.on("/", handleRoot);
    server.begin();
}

void loop()
{
    server.handleClient();
}
