# ESP32 Access Point Web Server
This project demonstrates how to configure an ESP32 to act as an Access Point (AP) and host a web server. Once connected to the ESP32's local network, you can access the web server to interact with esp32 or use it with tuning and controlling.

## Features
- **Access Point Mode**: The ESP32 creates its own Wi-Fi network, allowing devices to connect directly.
- **Web Server**: A built-in web server accessible from the local network.
- **Interaction and Tuning**: Use the web interface to send commands or adjust settings on the ESP32.

## Usage
1. Power on the ESP32.
2. Connect your device to the Wi-Fi network created by the ESP32.
3. Open a web browser and navigate to the ESP32's IP address (e.g., `192.168.4.1`).
4. Use the web interface to interact with the ESP32.

## Applications
- Device configuration and tuning.
- Local control without requiring an external router.
- Prototyping IoT applications.

## Requirements
- ESP32 development board.
- Arduino IDE or other compatible development environment.

## Setup
1. Clone this repository.
2. Upload the provided code to your ESP32.
3. Connect to the ESP32's Wi-Fi network and access the web server.

## Known Issues
- **Overheating**: The ESP32 tends to heat up more quickly when operating as an Access Point. Ensure proper ventilation or consider adding a heat sink if you plan to use it in this mode for extended periods.

Enjoy building with the ESP32!