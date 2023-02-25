/**
   BasicHTTPClient.ino

    Created on: 24.05.2015

*/

#include <Arduino.h>

#include <ESP8266WiFi.h>
#include <ESP8266WiFiMulti.h>

#include <ESP8266HTTPClient.h>

#include <WiFiClient.h>

ESP8266WiFiMulti WiFiMulti;

const int buttonPin = D5; //D3 for shield
int buttonState = 0;

void setup() {

  Serial.begin(115200);
  // Serial.setDebugOutput(true);
  pinMode(buttonPin, INPUT);

  WiFi.mode(WIFI_STA);
  WiFi.setPhyMode(WIFI_PHY_MODE_11G);
  WiFiMulti.addAP("Gogo-WIFI", "MaOlenGogo2701");
}

// The button press triggers a sequence of "on" and "off" endpoints calls with delays
void loop(){
  if ((WiFiMulti.run() == WL_CONNECTED)){
    WiFiClient client;
    HTTPClient http;
    buttonState = digitalRead(buttonPin);
    int count = 0;
    if (buttonState == 0){
      while(count < 4){
        if (http.begin(client, "http://192.168.1.179/on")){
          http.GET();
          delay(500);
        }
        http.end();
        if (http.begin(client, "http://192.168.1.179/off")){
          http.GET();
          delay(500);
        }
        http.end();
        count += 1;
        Serial.println(count);
      } 
    }
  }
}

// The button press triggers the "blinking" endpoint
/*
void loop() {
  // wait for WiFi connection
  if ((WiFiMulti.run() == WL_CONNECTED)) {

    WiFiClient client;

    HTTPClient http;

    if (http.begin(client, "http://192.168.1.179/blink")) {  // HTTP
      buttonState = digitalRead(buttonPin);
      if (buttonState == 0){
        Serial.println("Flashing the LED");
        http.GET();
        delay(500);
      } 
      http.end();
    }
  }
}
*/
