## IoT Protocols

### MQTT

*Example*

Communication between wearables, health monitoring tools, smartphones...

*Purpose/challenge* (description, pros, cons)

MQTT is a publish-subscribe M2M network protocol used for message queuing service.

Network of a single server and several clients.

It allows to connect remote devices, especially ones with resource constraints, or limited network bandwidth, which is the main argument of this protocol. It's also very reliable in terms of message transmision.

But it can be slow, it is not really developer friendly in the way that it does not provide feedback when a message is received or not, and it has some issues with security.

(Wikipedia)

*Software support* (for esp8266, esp32)

One of MQTT's strengths is that it can be deployed on many low power devices, it is indeed supported by Espressif boards:
1. esp32: https://docs.espressif.com/projects/esp-idf/en/latest/esp32/api-reference/protocols/mqtt.html 
2. esp8266: https://cedalo.com/blog/how-to-use-mqtt-on-esp8266/ 

### AMQP

*Example*

Similar examples as MQTT for enterprise-suited (Finances...), since it pretty much is the same thing but more advanced, more flexible, but more complex.

*Purpose/challenge* (description, pros, cons)

AMQP is also a messaging protocol like MQTT but it has a few differences with its counterpart.

Network of many servers and clients.

AMQP supports both messaging and queuing modles, it's still lightweight but allows more complex messaging scenarios, AMQP is more sobust in terms of security, with a message-level encryption as opposed to a Transport Layer Security encryption for MQTT.

AMQP though can be more demanding in terms of resources than MQTT, leading to more latency on weaker devices. MQTT is an open standard while AMQP is a standard protocol maintained by a private company.

*Software support* (for esp8266, esp32)

The protocol works on both µ-controllers with many libraries available on the internet. However, AMQP is more resource intensive, it could be more challenging to use it on those boards than MQTT.

### MQTT in Action on CLI

*Main CLI commands for MQTT*

The commands below allow to subscribe to or publish messages on mosquitto topics:

```
mosquitto_pub
mosquitto_sub

... -t topic
... -m message
... -h host

mosquitto_sub -t sandbox/test -h iotgateway
mosquitto_pub -t sandbox/test -h iotgateway -m "Hello World"
mosquitto_pub -t kitchen/fridge0/temperature -m "5"
```

*What stands out?*

The commands are very straightforward and human-readable. The message in those examples were strings but JSON also works.

### MQTT for Integration

Why and how does MQTT simplify integration of IoT systems?

*Why?*

MQTT allows devices to communicate with each other without knowing each other's network address. Lightweight in resources and network.

*How?*

Messages are sent to topics and whichever device subscribing to those topics will receive the messages. 

*Example*

My living room lamp is subscribed to the /livingroom/lamp topic and waits for messages from my phone or computer to turn it ON/OFF.

### MQTT in IoTempower

*Command differences between IoTEmpower and regular CLI*

iot command to enter the environment

```
mqtt_send
mqtt_listen
mqtt_action

mqtt_listen sandbox/test
mqtt_send sandbox/test Hello World
mqtt_action sandbox payload on mqtt_send sandbox/switch01 1

```

*Does IoTEmpower help with integration and how?*

The commands are even simpler, without the "dash" arguments. We also omit the hostname since we're on the iotgateway.
Running the command from a specific folder moves the command into the hierarchy of the topics.

```
cd fridge0
mgtt_send sandbox test-message
 Output: message sent to "hostname"/sandbox/fridge0

```

**It's easier than classic CLI but one must be really careful in which directory the terminal is running!**

### MQTT for Simulation and Testing

*Why?*

MQTT is all we need to build a mock-up IoT system with interchangeable things.

*How?*



*Two examples*

### Knit your IoT System with IoTknit