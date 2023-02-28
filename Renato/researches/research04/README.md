# Research records 04

## Lecture slides

The slides for this lecture can be found here: https://bit.ly/ut-iot-2023-04

## IoT Protocols
– HTTP Web Request 
– Websockets
– MQTT 
– CoAP
Wifi devices from IKEA speaks COap

– AMQP
MQTT for big business. Liability. Diverse setup of clients and serves and other hierarchial structure. 
Message broker. 
Kafka

– OSC
– BLE (BlueTOOTH low energy)

– Example
– Purpose/challenge (include description, pros and cons here)
– Software support (check also support for esp8266 and esp32)

### HTTP Web Request (everybody knows, so compare with this)


### Websockets (you should also all know, also compare or assign)
Server or communication between backend and front end uses Websocket
Realtime streaming.
Bidirectional communication stays alive after the request.
Not well supported on Es8266. 
Supports broadcast but not very used

### MQTT 

**Publish Subscribe**
listener - observer pattern. 
Event based. Listen to event.
Better for parallel programs (multiple processes) to communicate together.
Hierarchical topics.
M2M
Can give user the freedom to create topics


MQTT (Message Queuing Telemetry Transport) is a lightweight, open-source, publish-subscribe messaging protocol commonly used in IoT (Internet of Things) and machine-to-machine communication. It is designed for low-bandwidth, high-latency, and unreliable networks, making it ideal for applications where connectivity is intermittent or constrained. MQTT operates on top of TCP/IP and uses a simple and efficient binary messaging format to transmit data between devices. It allows devices to subscribe to topics and receive messages published by other devices, facilitating communication and data exchange among different devices in a decentralized and scalable manner.

**Examples**

MQTT can be used in various applications where there is a need for efficient and reliable communication between IoT devices. Some examples of where MQTT can be used are:

    Smart homes: MQTT can be used to connect and control various smart devices in a home, such as smart lights, thermostats, and security systems, enabling the devices to communicate with each other and with the user.

    Industrial automation: MQTT can be used to connect sensors and machines on a factory floor, allowing for real-time monitoring and control of the production line, as well as enabling predictive maintenance and analytics.

    Agriculture: MQTT can be used in precision farming to collect data from sensors and automate irrigation systems, enabling farmers to optimize crop yields and reduce water usage.

    Energy management: MQTT can be used in smart grid applications to monitor energy usage and manage power distribution, enabling utilities to optimize energy consumption and reduce costs.

    Transportation: MQTT can be used in connected vehicles and smart traffic management systems to enable real-time communication between vehicles and traffic lights, facilitating efficient traffic flow and reducing congestion.

**Software support**

There are many software tools and platforms that support MQTT. Here are some examples:

    MQTT brokers: These are servers that handle the routing and delivery of MQTT messages between clients. Some popular open-source MQTT brokers are Eclipse Mosquitto, HiveMQ, and EMQ.

    IoT platforms: Many IoT platforms offer MQTT support as a messaging protocol. Examples include AWS IoT, Azure IoT Hub, and Google Cloud IoT.

    MQTT client libraries: These are software libraries that enable devices and applications to communicate using MQTT. There are many client libraries available in various programming languages, such as Paho MQTT for Java, Python, and C/C++, and MQTT.js for JavaScript.

    MQTT-enabled devices: Many IoT devices and sensors have built-in MQTT support, allowing them to communicate with MQTT brokers and other MQTT-enabled devices. Examples include the Raspberry Pi, Arduino, and many industrial IoT sensors.

The ESP8266 and ESP32 microcontrollers both have built-in support for MQTT. The Arduino core for ESP8266 includes the PubSubClient library, which provides an MQTT client for connecting to MQTT brokers and publishing/subscribing to topics. The ESP32 Arduino core also includes the PubSubClient library, as well as the AsyncMqttClient library for asynchronous MQTT communication. In addition, there are many other MQTT libraries and frameworks available for the ESP8266 and ESP32, such as the Adafruit MQTT library and the ESP-IDF MQTT component. Overall, MQTT is a popular protocol for IoT communication, and the ESP8266 and ESP32 are well-suited for MQTT-based applications.



### OSC
The OSC (Open Sound Control) protocol is a network communication protocol designed **real-time control and communication** of multimedia applications and devices. It provides a *flexible and extensible* way to exchange messages, including data and commands, over a network, using a simple and *human-readable syntax*. OSC is widely used in music and sound-related applications, such as music performance, live sound mixing, and interactive installations, as well as in other multimedia applications that require real-time communication and control. OSC messages can be sent over any network protocol, such as UDP or TCP/IP, making it a versatile and platform-independent protocol. OSC is an open standard, and there are many open-source libraries and tools available for implementing and using OSC in various applications.

**Examples**

    Music performance and production: OSC is commonly used in music performance and production software, such as Ableton Live, Max/MSP, and Pure Data, to enable real-time control of music parameters, such as volume, tempo, and effects, using external controllers or sensors.

    Live sound mixing: OSC can be used to control digital sound consoles, such as the Yamaha CL and QL series, allowing sound engineers to remotely adjust mixing parameters using tablets or smartphones.

    Interactive installations: OSC can be used in interactive installations and exhibits, such as art installations and museum exhibits, to control and synchronize media elements, such as lights, video, and sound, based on user interactions or environmental conditions.

    Robotics and automation: OSC can be used in robotics and automation applications, such as controlling robotic arms or drones, by sending commands and data over a network to the devices.

    Mobile apps: OSC is supported by some mobile app development platforms, such as Unity, enabling real-time communication and control between mobile apps and other devices over a network.

**Software support**

    SuperCollider: an open-source platform for audio synthesis and algorithmic composition that supports OSC for control and communication.

    TouchOSC: a mobile app that allows users to create custom touch interfaces for controlling OSC-enabled software.

    OSCulator: a software that allows mapping of OSC messages to MIDI and other protocols.

    Isadora: a visual programming software for multimedia that includes built-in support for OSC.

    OpenFrameworks: a C++ toolkit for creative coding that includes an OSC library for sending and receiving messages.

    The ESP8266 and ESP32 microcontrollers can be used to communicate with OSC-enabled software and devices. There are several libraries and frameworks available for the Arduino IDE and the ESP-IDF that provide OSC support for these microcontrollers. For example:

    OSC for ESP8266: This is an Arduino library that provides OSC support for the ESP8266 microcontroller. It includes examples that demonstrate how to send and receive OSC messages over Wi-Fi.

    ESP32-OSC: This is a library for the ESP-IDF that provides OSC support for the ESP32 microcontroller. It includes a simple OSC server example that receives OSC messages over Wi-Fi and a client example that sends OSC messages.

    ESP32OSC: This is another Arduino library that provides OSC support for the ESP32 microcontroller. It includes examples that demonstrate how to send and receive OSC messages over Wi-Fi and how to map OSC messages to other control protocols, such as MIDI.

Overall, the ESP8266 and ESP32 are capable microcontrollers that can be used to communicate with OSC-enabled software and devices, making them suitable for applications in music, art, and other multimedia fields.


### Video MQTT IN Action on CLI

Mosquito client
Mqtt broker (IP Gateway) Ping
ps ax|grep mosq

– What are the main CLI commands for MQTT?
mosquitto
mosquitto_sub
- h (host) - t(topic)
ex: mosquitto_sub -t iotroom/test -h 192.168.12.1

- V

mosquitto_pub -m (message)

mosquitto_pub -t iotroom/test -h iotgateway -m "Hello world"

(if we use # it shows all pubs in a topic)

– What stands out for you/question?
Very human readable.
can send Json packages. 
Quality of services helps to never loose a msg. 

# MQTT for Integration

- One statement for why
- One statement for how
- One example for an integration in an example IoT system using MQTT
Guatier's lamp

MQTT (Message Queuing Telemetry Transport) is a lightweight publish-subscribe messaging protocol that simplifies the integration of IoT systems in several ways:

    Efficient use of network resources: MQTT is designed to be lightweight and efficient, using minimal network bandwidth and processing power. This makes it ideal for IoT systems, which often have limited resources and need to conserve power and bandwidth.


Lightweight protocol for computation and network
    Decoupling of devices and services: MQTT's publish-subscribe model allows devices and services to communicate with each other without knowing each other's network addresses. This decoupling simplifies the integration of IoT systems by allowing devices and services to be added, removed, or replaced without affecting the overall system architecture.

    Scalability and reliability: MQTT supports multiple subscribers for each topic, making it easy to scale the system as new devices are added. It also supports Quality of Service (QoS) levels that ensure reliable message delivery, even in unreliable network environments.

    Security: MQTT supports various security mechanisms, including SSL/TLS encryption, username/password authentication, and digital certificates. These mechanisms ensure that data is transmitted securely and that only authorized devices can access the system.

Overall, MQTT simplifies the integration of IoT systems by providing a simple, efficient, and secure messaging protocol that decouples devices and services, supports scalability and reliability, and conserves network resources. This makes it easier for developers to build complex IoT systems that are robust, scalable, and easy to maintain.

Easy prototyping
 

 ### MQTT in IoTempower video

 – What are the differences of MQTT commands in IoTempower to regular CLI commands?
 iot
 mqtt tab tab
 mqtt_listen --help
 ex mqtt_listen sandbox/test
 mqtt_send
 ex mqtt_send sandbox/test "Hello World!"
 Global topic - use the slash before
 ex /sandbox
mqtt_action
ex mqtt_action payload on mqtt_send sandbox/switch1 1 (when received on send 1 to sandbox/switch1)

– Does IoTempower help you with integration and how?
It takes hierarchy into account which folder you are.
It makes communication with mosquitto in CLI simple.



### MQTT for Simulation and Testing

- Why and how should MQTT be used for simulation and testing?

We can simulate sensors sending msgs for **prototyping and debugging**. 
You can test complex systems without deploying real sensors and actuators. It can help you debug.
Only use real hardware after the first design.
Reduces cost production.

USE mqtt_action script.
