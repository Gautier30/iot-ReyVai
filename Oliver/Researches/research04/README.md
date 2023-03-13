

# MQTT

## Example usage:

A humidity sensor publishes that all devices listening to it must start watering the plants immediately.

A Party sensor senses high likelyhood for a pary - start party protocol. Disco lights turn on, music starts playing, and guests are invited.

## Purpose/challenge:

It is designed for IoT and allows efficient communication between devices.

MQTT uses Broker and Client (Publish/Subscribe) archidecture.

It is easy to debug and inspect messages sent and received

MQTT is lightweight and good for resource-constrained enviorments.

It is widely used and has good support

MQTT has support for built-in security

## Software support

IoTempire

---

# CoaP

## Example

Smart air purifiers, filters & accessories, lighting, electric blinds, systems & controls, wireless speakers


## Purpose:

It is designed for IoT and good for bad connectivity

CoaP uses UDP (GET, POST, PUT and DELETE) 

Supports XML, JSON, CBOR (like MQTT)

## Software support

Less libraries for CoaP than MQTT
https://github.com/automote/ESP-CoAP

---

## Publish/Subscribe

MQTT uses the publish/subscribe architecture. It is easy to read and debug. It has very intuitive design and is simple to use.


## MQTT CLI commands:

    mosquitto_sub
    mosquitto_pub
    -v to see the topic also
    -t topic
    -h host
    -m message

## What stands out?

You can subscribe to any topic, even the ones that don't exist.

If connection is lost then nothing really happens, worst case you miss one message.

Alot of conversions from string have to be done.

## Why and How does MQTT simplify the integration of IoT systems?

Why?

MQTT is very popular and is used for a lightweight reliable connection. It supports different data formats like JSON and XML. All information received is text based and useful. It has great debug and troubleshoot options making it easy to use for development. We can build robust and scalable IoT products with it.

How?

It uses the publish/subscribe archidecture for a reliable connection. Topics can be used to make systems scalable. Prototyping is easier than ever.

Example:

Temperature sensor sends a temperature reading to all the devices subscribed. Based on the temperature reading an air conditioning unit can be tuurned on. 


## WHat are the differences of MQTT commands and IoTempower to regular CLI commands?

    mqtt_send = mosquitto_pub
    mqtt_listen = mosquitto_sub
    mqtt_action gives the ability to "react" to messages

IoTempower MQTT helps with IoT ingtegration.

## Why and How should MQTT used for simulation and testing?

Why?

It is smart to use MQTT for prototyping and mocking. It is cheap to develop a prototype with MQTT.

How?

A simulation of the system being built can be set up. The real hardware can replace the mock up hardware components once the spine of the system has been set in place.

Example:

We have a coffee machine that accepts crypto as payment. Payments can take time since they need to be somehow verified. One way to make this process faster is to send mock payments with MQTT.

We simulate a temperature sensor to change temperature. Based on the temperature reading we can turn on air conditioning. A real temperature sensor need the temperature to actually rise. A simulated one can run on a for loop.