Internet – provides basis for communication

Server – Provide connectivity

Cloud (-computing) – Computing done on the cloud.

Edge (-computing) – Computing done on the edges like phones and temperature sensors.

Fog (-computing) – Computing between cloud and edge. Also close to swarm.

Swarm – Many nodes that combine into a bigger picture. For example drones that draw an image into the sky. 

Things – Smaller singular things like an LED or a sensor.

Gateway – A gateway to connect to internet or other devices.

Nodes – Bigger devices like displays and microcontrollers

● How are these concepts related/connected – what is the same (group them and
interrelate/connect/associate the groups → maybe draw small architecture sketch)?

![Alt text](/Oliver/Pictures/IoTpyramid.png "IoTpyramid")


IoT Architecture Terms and Relations/Sketch - notes
IoT Architecture Terms and Relations/Sketch - sketch (image or link)
Exchange Formats: at least two examples for pro or con with explanation
IoTempower Gateway - main steps, what is the point?
Trun on the Light - main steps, what stands out, optional - hint at button?
Reflection
lab
Gateway setup log
Gateway services offered
Led on/off on Web Request
Second ESP8266 as Webclient, controlling LED Webserver
Second ESP8266 with button as Webclient, controlling Webserver
Story draft (will be finished in homework and beginning of lab 4)
Reflection





● Selection of exchange formats:
– Text
– XML (focus on SOAP)
– JSON
– YAML
– Binary (i.e. Python's pickle and CBOR –> maybe relate to JSON)
● 5 min on your own:
– What is especially suitable for IoT systems (where in architecture)? Why?
dEVELOPMENT TIME IS BETTer with text based protocols. Cheaper
– What is especially unsuitable? Why?
Binary. not readable and hard to develop
XML (focus on SOAP), JSON, YAML


Questions for discussion and portfolio
– During:
● What are the main steps?
setup raspberry, connect to internet
have d1 mini


● What stands out (i.e. SD-card hint)?
make sure you plug the sd card correctly.	



– After: What is the point, why do we need a gateway? What will be the
alternatives?
We always have the same router to connect to. It easier to find devices. connect to another network or router.



Turn on a Light with HTTP

● https://drive.google.com/file/d/1SoP587F8HXMfrST94boxJPpQMBPTI2D0
Questions:
– During:
● What are the main steps?
get ip adress from serial monitor

● Anything standing out?

– After: How could we use a button on another Wemos D1 Mini to
trigger this (not with the browser)?