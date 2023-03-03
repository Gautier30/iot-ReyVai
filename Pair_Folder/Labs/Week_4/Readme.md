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

## Communication Examples

We have 3 examples with increasing complexity:

- Example 1 for basic communication between 2 laptops. 
- Example 2 for simulating a temperature sensor and an ac being turned on based on the temperature reading. 
- Example 3 uses an actual temperature sensor and a relay.

## Example 1: Sending messages between two laptops

Tools used:
- MQTT client(s) installed on each laptop
- IoTempower gateway

We installed mosquitto using 
> sudo apt install mosquitto

Then from Olivers computer using wsl: 
> mosquitto_sub -t test -h iotgateway

![alt text](../../Pictures/Week_4/hioliver.JPG "sub")

And from Gautiers computer using ubuntu
> mosquitto_pub -t test -m "Hi Oliver" -h iotgateway

![alt text](../../Pictures/Week_4/mqtt_msg_pub.JPG "pub")

The message received on Olivers side was 

"Hi Oliver"

## Example 2: Rebuilding Air Conditioning unit

We wanted to simulate a temperature sensor and an air conditioning unit being turned on or off based on the temperature reading.

Tools Used

- Python
- IoTknit

We used the example provided by ulno as a template and modified it to fit our scenario. We used IoTknit to write the code and connected to the IoTempower gateway. Here are the main steps we took:

1. Imported the necessary libraries, including iotknit and time.
2. Created a client to connect to the MQTT broker on the IoTempower gateway using the publisher() function.
3. Defined the MQTT topics we will be using (temp and ac) using the publisher() function.
4. Created a function to generate temperature readings between 20 and 30 degrees Celsius.
5. Created a while loop to continuously post temperature readings every second to the temperature topic.
6. Added a condition to turn on/off the air conditioning unit based on the temperature reading. If the temperature is above 25 degrees, we send a message to the ac topic to turn on the air conditioning unit. If the temperature is below 25 degrees, we send a message to the ac topic to turn off the air conditioning unit.

Here's the output of a terminal listening on "#"

![alt text](../../Pictures/Week_4/mqtt_temp_with_ac.JPG "temp_ac")


[AC simulator](../../Arduino_sketches/Python_cripts_Lab4/AC_sim.py) is running in one terminal and<br>

[Temperature simulator](../../Arduino_sketches/Python_cripts_Lab4/temp_sim.py) is running in another.

## Conclusion

Insert a brief summary of what was learned during the testing of MQTT communication with the IoTempower gateway, including any challenges faced and how they were overcome.


