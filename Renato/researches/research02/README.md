# Research records 02
## Two elements CBE, touched domains, personal relevance, 1+ ideas
Challenge Based Education is part of critical pedagogy and also the foundation of experimental learning which can be applied in progressive education.
It is known for its collaborative and hands-on teaching and learning approach to education. It provides teacher with a way to apply project based learning and step away from lecture and test assessments.

## Sustainable living
Related domains are Agriculture, Healthcare, Pollution Control, Smart Cities, Smart Homes, Research and Logistics. 
That idea of sustainable living is relevant to me and I strive for being as sustainable as possible.
I believe that IoT can help sustainability in all the domains cited above, but also in creating awareness about relevant issues.

A good project evolving IoT and Sustainability:
A Smart trail in a National park.
The trail can be interactive and can connect sensor and actuator that form different areas that can converse with each other. 
A step farther would be to create a gamefication of the trail with interactivity for the users enjoy and learn the about the park and the trail in a unique manner. 

## Low Level Buses personal research and slide link
Link to the presentation: https://docs.google.com/presentation/d/11cCQWAVJSk0r16JwHn3SyiNQ2Dh64JdADCPUi5bjMxQ/edit?usp=sharing
Bus examples
**RS232**
Anything with a serial port (USB)
The ESPs, Arduino and Raspberry

RS232 is a serial connection standard describing the characteristic of signals like voltages, timing, etc. 
Designed in the 1960s
Normally two wires are used, one for sending, one for receiving, synchronously or asynchronously
RS232 actually has up to 25 pins, there are minimal
Was succeeded later on by RS485.
USB has displaced RS-232 from most of its peripheral interface roles which used Uses DB-25 and DE-9 connectors.

Wires (Number and function): 2-wire (transmit data, ground), 3-wire (+ receive data), 5-wire (+ hardware flow control). 
Speed:  Designed for up 20 Kbps
Max lengths: 50 feet (15.24 meters)
Special properties: high power consumption
Usually runs on +3 V and −3 V, but can be configured to 5V.
It is asynchronous
Use cases: connect modems, printers, scanners, flash micro controllers.


It's plus points are:
It is a very noise resistance Point-to-Point communication and it supports long distances.



**RS485**
Commercial temperature sensor (often internally based on Dallas)
Some industrial motor controllers (link)

**I2C**
VL53L0X laser distance sensor
ADPS-9960 Color/Gesture/Distance Sensor
RFID-RC522
OLED
MPR121 multitouch sensor
LCD 16x2 screen

I2C combines UART and SPI in Master and Slave mode. The Master, a µcontroller can retrieve data from one or several slaves (sensors, etc).
Speeds are between 10 kbits/s for the slowest, versus 5Mbits/s for the fastest.
It is a low driven protocol, so it supports 3.3V or 5V devices connected at once without damaging the low power ones (different from SPI).
It uses 2 wires: SLA (Data) and SLC (Clock), and two more for power: VCC and GND.
The protocol is based on 9 bits packets.

**SPI**
RFID-RC522
ESP32


**Onewire**
Dallas temperature sensor
DS18B20



## ESP8266 Video - why/inspiring/coffee
The great advantage of the ESP2866 is its price point for a controller with WIFI. I cost about the price of a coffee.
The accessibility of the ESP8266 makes it a more affordable alternative to its bigger brother ESP32 and can be more suitable for smaller projects that don't require a higher performance board.

ESPresso is the board developed in Indonesia and by a local Cafe owner. ESPresso is a great name reference to the Espressif chip set.
It is a great chip for IoT maker projects.


## Breadboards and prototyping electronics (lecture questions)

Breadboards are boards designed for prototyping electronic circuits so you do not have to solder any wires while designing and testing circuits. They are usually used to design PCB boards.
The board has horizontal and vertical lines with holes that are sometimes short-circuited or isolated from each other. This allows us to connect components in series and parallel circuits usually only utilizing Jumper wires.

To power an LED  for example you connect the anode, longer pin to power source and the cathode, shorter leg to the negative terminal.
You need to make sure you use a resistor to attenuate current on the LED and also to cleanup the signal.Usually a 330 ohm resistor is sufficient for a typical LED.

Conventionally red wires are used for power or VCC and black wires are for the ground (GND) when designing a circuit. 

## Wemos D1 Mini - advantages, impact

The Wemos D1 Mini is built with the EPS8266 chip set. 
It supports WIFI and has a Micro USB 2 serial port.
It has 1 analog port and many digital ones. It also comes with an onboard LED.
There are many off the self shields for it turning them in to great prototyping tools, since not much soldering is involved.

It cost around $1 to $2 dollars (Coffee price).
It also has better performance than the Arduino.
So it's price, versatility and connectivity capabilities make it a great tool for creative projects and a great entering point to bridge from Software to Hardware.

The D1 mini will impact my work by making prototyping fast and cheaper.


## Blink Wemos D1 Mini (lecture questions)

We use the Arduino IDE 2 to flash the Wemos boards via serial. After compiled and flashed, the program is stored in the board's memory (ROM) and will run continually in loop while the board is powered. You can only run one program at a time.
It usually outputs of 3.3V when HIGH is sent out it's GPIO port. 

We used the blink example from the Arduino IDE as a mean to get the BUILTIN_LED to blink on the D1 mini. It is wired to the port D4 of the board.
(OBS: Since it is wired with a pull-up resistor, it actually lights up when we send a LOW value to the port).
We can wire an external LED to the same port and it will blink accordantly. 


Examples are contained within the Arduino IDE.

The built-in LED is wired on the board's D4 GPIO. Which means we can hook up another component to this pin and it will alternate between High and Low states as the LED blinks. The built-in LED is inverted.

 