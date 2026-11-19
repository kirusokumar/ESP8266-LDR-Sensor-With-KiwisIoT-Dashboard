#include <KiwisIoT.h>

const char* ssid  = "YOUR_WIFI_NAME";
const char* pass  = "YOUR_WIFI_PASSWORD";
const char* topic = "YOUR_TOPIC_ID";

KiwisIoT kiwisiot(ssid, pass, topic);

#define LDR_PIN A0

void setup() {
  Serial.begin(9600);

  kiwisiot.begin();
}

void loop() {
  kiwisiot.run();

  int ldrValue = analogRead(LDR_PIN);

  kiwisiot.send("1", ldrValue);

  Serial.print("LDR Value = ");
  Serial.println(ldrValue);

  delay(1000);
}