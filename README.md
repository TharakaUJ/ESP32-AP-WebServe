# ESP32 Web Server Projects

This repository contains two projects demonstrating how to use the ESP32 to host a web server. One project configures the ESP32 as an Access Point (AP), while the other connects the ESP32 to an existing Wi-Fi network.

## Projects Overview

### 1. ESP32 Access Point Web Server
This project configures the ESP32 to act as an Access Point and host a web server. Devices can connect directly to the ESP32's Wi-Fi network to access the web interface.

#### Features
- **Access Point Mode**: The ESP32 creates its own Wi-Fi network.
- **Web Server**: A built-in web server accessible from the local network.
- **Interaction and Tuning**: Use the web interface to send commands or adjust settings.

#### Usage
1. Power on the ESP32.
2. Connect your device to the Wi-Fi network created by the ESP32.
3. Open a web browser and navigate to the ESP32's IP address (e.g., `192.168.4.1`).
4. Use the web interface to interact with the ESP32.

---

### 2. ESP32 Station Mode Web Server
This project connects the ESP32 to an existing Wi-Fi network and hosts a web server. Devices on the same network can access the web interface.

#### Features
- **Station Mode**: The ESP32 connects to an existing Wi-Fi network.
- **Web Server**: A built-in web server accessible from the network.
- **Interaction and Tuning**: Use the web interface to send commands or adjust settings.

#### Usage
1. Power on the ESP32.
2. Configure the Wi-Fi credentials in the code and upload it to the ESP32.
3. Connect your device to the same Wi-Fi network as the ESP32.
4. Open a web browser and navigate to the ESP32's IP address (e.g., assigned by the router).
5. Use the web interface to interact with the ESP32.

---

## Applications
- Device configuration and tuning.
- Local control with or without an external router.
- Prototyping IoT applications.

## Requirements
- ESP32 development board.
- Arduino IDE or other compatible development environment.

## Setup
1. Clone this repository.
2. Navigate to the desired project folder (`AccessPoint` or `StationMode`).
3. Upload the provided code to your ESP32.
4. Follow the usage instructions for the selected project.

## Known Issues
- **Access Point Mode**: The ESP32 may overheat when operating as an Access Point. Ensure proper ventilation or consider adding a heat sink for extended use.
- **Station Mode**: Ensure the Wi-Fi credentials are correctly configured to avoid connection issues.

Enjoy building with the ESP32!