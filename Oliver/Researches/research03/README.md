## IoT concepts
- **Cloud** computing relies on **internet** and **servers**. 
- **Internet** provides the underlying network infrastructure and **servers** provide computing resources. 
- **Edge** computing and **fog** computing aim to make cloud computing easier by enabling localized processing of data. 
- **Gateways** provide a way to connect to internet and other networks. 
- **Nodes** are individual endpoints that make up the IoT network. 
- **Swarms** of IoT devices use edge and fog computing to achieve some common goal. 
- **Things** are physical objects that have sensors, software and stuff that helps them communicate and exchange data. 

Here's a sketch of how these concepts are connected:

![Alt text](/Oliver/Pictures/IoTpyramid.png "IoTpyramid")

We decided to sketch the concepts as a pyramid, because in this view nodes and things are the most important parts of the IoT system. They generate and collect data while in direct contact with reality itself. We viewed the cloud layer as something that emerges from the huge complexity of the whole system.

## Exchange Formats

**Text** - human-readable and easy to use format that is commonly used

**XML** - human-readable markup language used for encoding data in a hierarchical structure. SOAP is a protocol that uses XML for exchanging messages between applications over a network.

**JSON** - human-readable text-based format that is lightweight. Generates less network traffic than XML.

**Binary** - a sequence of bytes, which can be more efficient and compact than text-based formats.

Text-based formats are easy (and cheap) to develop, debug and troubleshoot. For example if a device is not working properly a human can check what is being transmitted by the device. 

The disadvantages of binary is that it isn't human readable and it is not as compatible with other devices as text. The data format may need to be converted. It is hard to develop.

## Our Own Network

> IoTempower Gateway - main steps, what is the point?

To use IoTempower we need a wifi/ethernet connection, sd card, the software, Raspberry Pi and a wifi dongle (optional).

1. Make sure the case fits the Raspberry Pi
2. Flash the software onto an sd-card
3. Insert the sd-card
4. Plug in the Raspberry Pi using the default power supply 
5. Use the wifi dongle to ensure that a connection is established
6. Test connection to the Pi
7. ssh into the Pi or plug the sd-card into your computer
8. Edit the wifi.txt file for a desired wifi name and password
9. Edit the wifi-in.txt file to connect to internet
10. Reboot

When using ethernet of usb-tethering the wifi-in.txt file remains as is. The sd-card needs to be inserted correctly. The wifi stick goes into the USB 2 ports and Android phones for USB tethering go into the USB 3 ports.

> What is the point, why do we need a gateway? What will be the
alternatives?

We always have the same router to connect to. It easier to find devices. connect to another network or router. The ip-addresses will remain the same and are easier to configure.

> Trun on the Light with HTTP - main steps, what stands out, optional - hint at button?

We need the setup we made in the last point. Raspberry Pi with software, the dongle, cables. We also need an ESP8266 and the Arduino IDE.

Setup the HelloServer:

1. Plug the ESP to your computer.
2. Use the Arduino IDE and select the board and port.
3. Use an Arduino IDE example called ESP8266WebServer - HelloServer.
5. Fill in the wifi field we set up for the Raspberry Pi.
6. Compile and upload.
7. Look at serial monitor and set it to 115200
8. Reset the ESP by pressing the reset button
9. When connected get the IP-address from the serial monitor.
10. Open your browser and connect to the IP-address

Turn on the LED:

1. Create a new handle /on with digitalwire(LED, 0)
2. Create a new handle /off with digitalwire(LED, 1)
3. Flash and reboot 

The Arduino IDE has some really powerful examples that can be used to learn from some working examples.
