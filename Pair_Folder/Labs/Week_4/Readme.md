## Stories/Scenarios

Find a way to grown micro-greens indoors in our homes. 

Olinato Reyvai loves to eat fresh salad, but he just moved to Tartu, Estonia in the winter and is having vitamin withdrawals. He needs to eat more fresh greens and he found that the salads that can be bought at supermarkets come from foreign countries and are not fresh enough.

He is newbie gardener, but he is willing to try out some ideas he found on the internet. 
He started brainstorming some ideas. He lives on the sixth floor and facing the sun rise. He thinks he can grow some micro-green with the sunlight from his window. 
He is not sure, he might need complement the light with an LED grown lights. 
He wants to grown enough salad for himself eventually just on the balcony of his window with window planter box.

List of IoT:

- He wants to measure the amount light that comes in the window;
- Maybe control an LED light;
- Measure the hight of the plants from the light;
- Measure PH from water;
- He needs to control a water pump for auto watering;
- Measure Ar humidity;
- Monitoring data daily (graph the data);
- CO2 sensor;
- Timelapse the growth of plants (Instagram);
- dashboard;
- music wth the plant

When is the data collect, when to rewater, when do we need more light. Where is human interaction, where is data inserted in the story.

Examples 

Click and Grow
Richard has growing 


Simulate water

# MQTT Communication with IoTempower Gateway
## Scenario

We want to demonstrate different ways we can communicate between devices using mqtt. We will measure the temperature but this can be done using the light sensor the same way.

    List of tools used, including:
        MQTT client(s) installed on each laptop
        IoTempower gateway
        2 Wemos D1 Minis
        the tripler board
        the dallas temperature shield
        and the relay shield:

## Communication Examples

We have 3 examples with increasing complexity. Example 1 for basic communication between 2 laptops. Example 2 for simulating a temperature sensor and an ac being turned on based on the temperature reading. Example 3 uses an actual temperature sensor and a relay.

**Example 1**: Sending messages between two laptops

We installed mosquitto using 
> sudo apt install mosquitto

Then from Olivers computer using wsl: 
> mosquitto_sub -t test -h iotgateway

![alt text](../../Pictures/Week_4/hioliver.jpg)

And from Gautiers computer using ubuntu
> mosquitto_pub -t test -m "Hi Oliver" -h iotgateway

![alt text](../../Pictures/Week_4/mqtt_msg_pub.jpg)

The message received on Olivers side was 

"Hi Oliver"





Conclusion

Insert a brief summary of what was learned during the testing of MQTT communication with the IoTempower gateway, including any challenges faced and how they were overcome.




## MQTT integration
Familiarize yourself with mqtt_action and either rebuild the example from the video or build a scenario related integration.
Rebuild the air conditioning integrator component from the video (either with IoTknit in Python or directly with paho.mqtt in the language of your choice - Bash with mosquitto clients, Python, Java, C#, Golang all work well for that purpose) - code and small explanation of problems faced or steps taken in portfolio is enough here.
## MQTT simulators
Build two simulator components (with IoTknit or in language of your choice):
Temperature Simulator: One simulator component should be creating (publish) temperature values on a specific topic (the same from your integrator). The values should slowly rise and then slowly drop again and then repeat from the beginning again when the controller is running.
AC Simulator: One simulator component should consume (subscribe to) on/off values on a specific /set topic (the same from your integrator - add the set to your integrator if you missed it) and in some format present its own status on the console or as a UI (for example: should display every second: “AC is turned on” or “off” respectively).
Show the two simulators with the integrator in concert (fix things if they don’t work)
Supply steps, code, and screenshots from running everything together. 
## MQTT on microcontroller
(This might slip into homework, don’t worry, you are still doing well if you managed until part of the previous task, but you are supposed to finish everything until the next lab. Don’t hesitate to reach out in discord when you work at home.)
Build the two simulators in hardware and program the Wemos D1 Mini respectively. Use this library for MQTT: https://registry.platformio.org/libraries/knolleary/PubSubClient (PubSubClient by Nick O’Leary).
This means you need two Wemos D1 Mini, the tripler board, the dallas temperature shield, and the relay shield:
For the temperature reader connect the tripler on the Wemos D1 Mini, mount the dallas temperature shield on one of the sides (else the temperature sensor measures the chip temperature of the esp8266). Program it following the PubSubClient mqtt_esp8266 example (publisher part). For the dallas temperature sensor use this library (test the example for it first before adding MQTT): https://github.com/milesburton/Arduino-Temperature-Control-Library (DallasTemperature by Miles Burton) - study the shield layout to find the GPIO pin (or ask your friendly instructors)
For the relay switch (the “AC unit”), you can switch the relay directly with digitalWrite, so you can start with the mqtt_esp8266 example (subscriber part) right away  - study the shield layout to find the GPIO pin (or ask your friendly instructors)
Run it together with your integrator.
In the portfolio, we expect the code, images of the two Wemos D1 Mini setups + steps taken and difficulties encountered.
