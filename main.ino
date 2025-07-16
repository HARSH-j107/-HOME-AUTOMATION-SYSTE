#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "mY0RAnD0mT0k3N1234567890";
char ssid[] = "nothing phone 2a";
char pass[] = "idontknow";

int lightPin = D1;
int fanPin = D2;

void setup() {
  pinMode(lightPin, OUTPUT);
  pinMode(fanPin, OUTPUT);
  Blynk.begin(auth, ssid, pass);
}

void loop() {
  Blynk.run();
}

BLYNK_WRITE(V1) {
  digitalWrite(lightPin, param.asInt());
}

BLYNK_WRITE(V2) {
  digitalWrite(fanPin, param.asInt());
}
