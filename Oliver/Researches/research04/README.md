

## MQTT

- Example usage:

A humidity sensor publishes that all devices listening to it must start watering the plants immediately.
A Party sensor senses high likelyhood for a pary - start party protocol. Disco lights turn on, music starts playing, and guests are invited.

- Purpose/challenge:

It is designed for IoT and allows efficient communication between devices.

MQTT uses Broker and Client (Publish/Subscribe) archidecture.

It is easy to debug and inspect messages sent and received

MQTT is lightweight and good for resource-constrained enviorments.

It is widely used and has good support

MQTT has support for built-in security

- Software support

Has good support for ESP with vsmqtt

## CoaP

- Example

CoaP is also used in the same places 

- Purpose:

Designed for IoT and good for bad connectivity
runs on UDP
GET, POST, PUT and DELETE 
supports XML, JSON, CBOR

- Software support

Less libraries for CoaP than MQTT
https://github.com/automote/ESP-CoAP


Publish/Subscribbe - Ulnos favorite


MQTT CLI commands:
mosquitto_sub
-v for verbos or something
-t for topic?
mosquitto_pub
can send json

Stands out:
You can subscribe to nothing
What happends when you lose connection for a split second

Why and How does MQRR simplify the integration of IoT systems?

Why?
It is very popular, lightweight and enables good connection. Different protocols can be sent. All information received is useful. Supports JSON XML

How?
It has multiple "topics" to make communication easier. Allows prototyping.

Example:
Temperature sensor sends a temperature reading to all the devices subscribed


WHat are the differences of MQTT commands and IoTempower to regular CLI commands?
instead of mosquitto we use mqtt
listen instead of sub
mqtt_send instead of mosquitto_pub
folder is important

Does IoTempower with the ingtegration?
yes

Why and How should MQTT used for simulation and testing?

Why?
smarter and cheaper

How?
Mock up components and later use hardware

2 Examples:
Mock receiving a payment of 100,000$