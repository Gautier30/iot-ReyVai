mqtt examples/purpose/software support as reply to this

Purpose:

Designed for IoT
Broker and Client (Publish/Subscribe)
Allows to inspect 
Very lightweight
Widely used
Built- in security


Example usage:

Smart home devices
thermostats
wearable devices

Has upport for ESP

coap examples/purpose/software support as reply to this
turn on an led with a web request

Purpose:

Designed for IoT and good for bad connectivity
runs on UDP
GET, POST, PUT and DELETE 
supports XML, JSON, CBOR

Example usage:

IKEA wifi devices

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