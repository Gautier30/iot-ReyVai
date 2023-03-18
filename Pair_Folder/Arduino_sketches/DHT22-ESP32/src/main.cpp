// http://www.esp32learning.com/code/mh-et-live-esp32-mini-kit-and-dht-pro-shield-example.php

#include <Arduino.h>
#include <PubSubClient.h>
#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <WiFi.h>

#define DHTPIN 16
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);

const char* ssid = "iotempire-reyvai";
const char* password = "flashing";
const char* mqtt_server = "iotgateway";

WiFiClient espClient;
PubSubClient client(espClient);
#define MSG_BUFFER_SIZE	(50)
char msg[MSG_BUFFER_SIZE];

void setup_wifi() {

  WiFi.mode(WIFI_STA); //Optional
  WiFi.begin(ssid, password);
  Serial.println("\nConnecting");

  while(WiFi.status() != WL_CONNECTED){
      Serial.print(".");
      delay(100);
  }

  randomSeed(micros());

  Serial.println("\nConnected to the WiFi network");
  Serial.print("Local ESP32 IP: ");
  Serial.println(WiFi.localIP());

}

void reconnect() {
  // Loop until we're reconnected
  while (!client.connected()) {
    Serial.print("Attempting MQTT connection...");
    // Create a random client ID
    String clientId = "ESP32Client-";
    clientId += String(random(0xffff), HEX);
    // Attempt to connect
    if (client.connect(clientId.c_str())) {
      Serial.println("connected");
    } else {
      Serial.print("failed, rc=");
      Serial.print(client.state());
      Serial.println(" try again in 5 seconds");
      // Wait 5 seconds before retrying
      delay(5000);
    }
  }
}


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  setup_wifi();
  client.setServer(mqtt_server, 1883);
  dht.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  
  delay(5000);

  if (!client.connected()) {
    reconnect();
  }
  client.loop();

  float t = dht.readTemperature();
  
  if (isnan(t)){
    Serial.println("Failed to read from the DHT sensor!");
    return;
  }

  snprintf (msg, MSG_BUFFER_SIZE, "%f", t); // %f to include the t float in msg
  Serial.print("Publish message: ");
  Serial.println(msg);
  client.publish("temp", msg);
  
   Serial.print("Temperature: ");
   Serial.print(t);
   Serial.println(" °C.");
}


