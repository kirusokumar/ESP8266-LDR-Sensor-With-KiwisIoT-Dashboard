# ESP8266 LDR Sensor Monitoring Using KiwisIoT

## Project Overview
This project monitors light intensity using an LDR (Light Dependent Resistor) sensor and NodeMCU ESP8266. The ESP8266 reads the analog sensor value and sends it to the KiwisIoT platform through Wi-Fi for real-time remote monitoring.

## Hardware Components
- NodeMCU ESP8266
- LDR Sensor
- 10kΩ Resistor
- Jumper Wires
- Power Supply

## Software Requirements
- Arduino IDE
- ESP8266 Board Package
- KiwisIoT Arduino Library

## Circuit Connections

| Component | NodeMCU ESP8266 |
|---|---|
| LDR voltage divider output | A0 |
| LDR and resistor divider | 3.3V and GND |

Connect the LDR and 10kΩ resistor as a voltage divider, with the midpoint connected to A0.

## Working Principle
The LDR changes its resistance depending on the surrounding light intensity. The ESP8266 reads the analog voltage through the A0 pin and obtains a sensor value.

The reading is sent to KiwisIoT every second, allowing users to monitor changes in light levels through the online dashboard.

## KiwisIoT Dashboard

| Channel | Data |
|---|---|
| Channel 1 | LDR Analog Reading |

The analog reading is a raw sensor value, not a calibrated lux measurement.

## Configuration
Update your Wi-Fi credentials and KiwisIoT Topic ID in the code:

```cpp
const char* ssid  = "YOUR_WIFI_NAME";
const char* pass  = "YOUR_WIFI_PASSWORD";
const char* topic = "YOUR_TOPIC_ID";
```

Upload the code to the NodeMCU ESP8266 and monitor the LDR readings through the KiwisIoT dashboard.

## Applications
- Smart lighting systems
- Automatic streetlight control
- Indoor light monitoring
- Smart home automation
- Light intensity monitoring
- Energy-saving applications

## Project Blog
[Read the full project on Hackster.io](https://www.hackster.io/kirusokumar/esp8266-ldr-sensor-with-kiwisiot-dashboard-2203c7)

## Recommended Platform
[KiwisIoT – IoT Monitoring Platform](https://www.kiwisiot.in/)

**Arduino Library:** https://github.com/Kiwistron/KiwisIoT

**Example Projects:** https://github.com/Kiwistron/KiwisIoT-Projects/tree/main

---
**Author:** Kirusokumar