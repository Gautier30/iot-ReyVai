# Portfolio of Gautier
My portfolio 

## Week 1
### Who am I?
My name is Gautier, I am an engineering student from France. My major is Robotics and Computer Engineering.

I have some experience with C++ and Python. Since the beginning of my studies I have worked on several projects both for school and personal needs. From Arduino sketches that would control educational robotic arms, to full on computer vision scripts on Python, I can confidently say I am an avid tinkerer.

I have worked with various Arduino boards (UNO, Nano, Mega...) as well as ESP32 dev boards. The latter was useful for projects involving Bluetooth or Wifi!

I have also worked with Raspbery boards in the past (teleop turret project, Turtlebot...).

In France I have my own 3D printer which runs almost 24/7. I love to prototype things and iterate my designs a lot. 3D printing comes in handy when I need to make some enclosures, or gather several sensors within the same package. Wiring up an array of sensors to a breakboard is fun, but making it look nicer in its own enclosure is better!

I had a brief introduction to IoT at school, we worked a little bit with Sigfox at the time. I also experimented custom querries with my Google Assistant smart speaker thanks to IFTTT.

I am not a huge fan of long boring lectures, therefore I enjoy when lecturers try to push students to participate. I really like interactive learning. I do believe some "lecturing" is necessary at some point, but it definitely goes hand in hand with practical work.

I hope this class will allow me to deepen my current knowledge of IoT, and especially help me design my own solutions without the need of codeless services like IFTTT.

### What is IoT ? (Google search)

1. *Domains of application:* wearables, home automation, smart cities, energy systems, logistics.

2. *Common data protocols:* MQTT, HTTP (Rest APIs), Zigbee.

3. *Typical devices:* ESP32 µ-controller, smart speakers, smart thermostat, smart fridges.

### #LikeABosch

From this Bosch ad, I can add the automotive domain to my list of common IoT applications. Smart Home appliances and autonomous cars are shown in this commercial.

### TIA IoT

Two more IoT **domains** are agriculture and healthcare.

Some **benefits** of IoT are that it allows to connect devices together, which is a high value proposition, while those devices on their own would not be of a huge interest. IoT provides monitoring and remote control of assets and resources which ultimately make the users' lives easier.

Some **challenges** of IoT are mainly the vulnerability of the systems and the growing power consumption of modern network protocols, which implies batteries need to be improved.

### Reflection (First Lecture)
I enjoyed this introduction to the class. The very relaxed atmosphere is promising and I feel like these learning conditions will make for a really motivating IoT introduction. I am eager to start working on the labs and projects, and hope the TAs will help clear any doubts.

### Reflection (First lab)

## Week 2
### CBE

After a quick Google search about Challenge Based Education, two striking aspects I can note are that students learn by solving real-world challenges, as opposed to binging pages of theory that may or may not reflect reality, and it is truly collaborative and hands-on, which definitely helps building confidence and motivation when learning anything.

About *Sustainable Living*, here are some domains I found:
1. **Home automation**: regulating the temperature of one's home in an efficient and economic way, by reducing the heater when the occupants are absent during the day...
2. **Smart cities**: monitoring air pollution, the quality of drinking-water...
3. **Transportation**: with e-vehicles (cars, bikes...).
4. **Agriculture**: monitoring soils to exploit them efficiently, only use as much water as necessary...

Sustainable Living is relevant for me, being part of the next generation of engineers that will eventually slow down and hopefully eliminate climate change...

I am especially interested in alternative, smart commuting solutions such as autonomous e-vehicles of which arrays of sensors heavily rely on IoT.

### Low Level Buses (I2C)

Link to the presentation: https://docs.google.com/presentation/d/11cCQWAVJSk0r16JwHn3SyiNQ2Dh64JdADCPUi5bjMxQ/edit?usp=sharing 

I2C in a nutshell is a combination of the features from UART and SPI which functions with two modes: Master and Slave. The Master can be a µcontroller which would retrieve data from one or several slaves (sensors, other µcontrollers...).

The key takeaway is that the protocal is low driven, meaning that devices requiring 3.3V or 5V can be connected together without damaging anything (as opposed to SPI).

The protocol basically relies on two data transfer wires: SLA (Data) and SLC (Clock), and some wires to actually power the devices: VCC and GND.

The protocol is based on 9 bits packets, and different speed modes are achievable: between 10 kbits/s for the slowest, versus 5Mbits/s for the fastest.

A good example of the I2C protocol is the typical Arduino LCD 16x2 screen which requires lots of wires unless it is connected to an I2C interface.

### ESP8266 Video

The advantage of the ESP8266 is its very low price point. It's also quite simple to program since the Arduino IDE can be used.

I personally use its big brother, the ESP32, which provides more computational power, but is sometimes "overkill" for the needs of my projects. The accessibility of the ESP8266 makes it a more affordable alternative.

The dev board designed in Indonesia around the ESP chip is named ESPresso. A nice pun in reference to the chip made by Espressif. Plus, the board is suited for many IoT appiications, automating a coffee maker is one of them... :)


### Breadboard and prototyping

Breadboards in the context of electronics are little pieces of plastic with holes which allow to construct circuit prototypes by plugging either jumper wires or components like LEDs, resistors etc. As opposed to PCBs the components aren't attached permanently and can be moved around.

On a breadboard the center rows have their holes connected to each other horizontally, with a separation at the center groove. The power lines (Red/Blue) holes are also connected to each other. I often had this debate while working with others on breadboards but yes, the entirety of the Blue or Red holes are connected on the whole length of the breadboard.

Conventionally black wires are for the ground (GND) and the red cables are for the positive terminal VCC (either 5V or 3.3V).

To wire an LED the anode (long leg) is connected to the positive terminal of the power source and the cathode (short leg) is connected to the negative terminal. A resistor is required to reduce the amount of current through the LED, otherwise it would burn overtime. Usually a 330 ohm resistor is sufficient for a typical LED.


### Wemos D1 Mini

Two advantages of this dev board are that it is really cheap, and that it is super easy to attach sensors and components with this special form factor and the headers. It's like Legos.

When I make stuff I usually end up with a bunch of wires everywhere, or the headers are just incompatible and I have to cut jumper wires and make funny adapters... The abilty to just plug and play different sensors with the Wemos layout is practical.

### Blink Wemos D1 Mini

The Arduino sketch is saved within the boards internal memory. Only one program can run at a time and the program runs as long as the board is powered.

We usually use a voltage of 3.3V.

High means 3.3V and Low means 0V are sent out of a GPIO port.

Examples are contained within the Arduino IDE.

The built-in LED is wired on the board's D4 GPIO. Which means we can hook up another component to this pin and it will alternate between High and Low states as the LED blinks. The built-in LED is inverted.

### Reflection (Second lecture)

This lecture was interesting as we teamed up to research on the different buses used in IoT. Finding information ourselves was actually more stimulating than just reading a lecture slide. Plus, presenting it to the class with our own words ensures we first try to understand ourselves.

### Reflection (Second lab)