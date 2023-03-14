# Research records 03

## Lecture slides

The slides for this lecture can be found here: https://bit.ly/ut-iot-2023-03

## Research IoT architecture in respect to

Diagram : https://docs.google.com/presentation/d/152nMv4T9-ktnm_mcjzW1giGk_SYGq8jCDlh44DcCNPg/edit?usp=sharing

– Internet
– Server
– Cloud (-computing)
– Edge (-computing)
Gateways things and nodes
– Fog (-computing)
– Swarm
A lot of independence devices to divide a computational task
-Things
here are
There are physical objects one wants to be able to track, to monitor and to
interact with. Examples include inanimate objects like pallets,
boxes containing consumer goods, cars, machines, fridges and maybe even the infamous carton of milk or cup of yoghurt
– as well as animate objects like animals and humans. These
are the things of the Internet of Things – or to use a clearer
term, the entities of interest [7]. 

– Gateway


– Nodes

Schematic that shows the relations between those terms: 

![alt text](https://media.discordapp.net/attachments/1074995984775512095/1077547210369138718/image.png)

## Exchange formats

Human readable
JSON
XML (Focus on SOAP)
YAML

Binary (i.e Python's pickle and CBOR)


WHat is especially suitable for IoT systems (where in architecture)? Why?
Lot of systems already use XML
JSON used more today by google and facebook

Binary is light weight but hard to read. Hard to debug. Expensive.

This class is mainly task

What is especially unsuitable? Why?


## Video IoTempower gateway
What are the main steps?
- First software for the PI. Flash it on a SD Card.
- Put the Pi on a case
- Put the SD card in
- Plug default powersupply
- Plug in the IoTE Dongle
- A Wifi will show 
- connect via SSH ssh iotgateway

- sudo poweroff

Without Dongle

take out the sd card and plug in a computer

boot/wifi.txt
configure the wifi

wifi-in.txt
configure the internet in network
eduroam for example

plug the wifi stick to the PI and boot it form the S.D card

Local webpage
//gw.iotempire.net


What stands out (i.e. SD-card hint)?
Ethernet 
IoTempower dongle
network read
password iotempire
Wifi stick on the USB 2 port
SD card after you set up the case

What is the point, why do we need a gateway? What will be the alternatives?
 We need a Wifi to connect devices
 Better a eduroam
 We get our own network and have full control of our own LNA
 Gateway is good for network management. It is a gateway on steroids. 


## Turn on a Light with HTTP Video

What are the main steps?

Plug in the ESP to USB port
Arduino IDE - Select Board and port

Examples ESPHTTwebserver - helloServer

Compile and upload
Open Serial monitor - 115200baud
write down the IP
Open a webbrowser and browse to the IP 
Make sure you are connected to the same network

Setup the server to serve on handler /om
digitalWrite (led/on)

You can send  a query /on and /off

Anything standing out?
D1 has wifi

– After: How could we use a button on another Wemos D1 Mini to
trigger this (not with the browser)?