# Research records 07

## Lecture slides

The slides for this lecture can be found here: https://bit.ly/ut-iot-2023-07


## VIdeo

Connect to the gateway.
Go to the local website.
Go on the menu from LocalWeb server
Create a new node in a project. 
Copy rgb_single example
Initialize serial to start the node
power the device.
Integrate it with Node-red.

## IOT instalation menu

- what other ways of using/installing it are there?
You can install it in most places where we can run a linux enviroment. 


– Where are the tools/commands/scripts?
– Where is documentation?
In doc, and in Node on Github and in the local website.

– What is the role of the different folders in lib/node_types?
Wrapper around the arduino driver code for one line commands in the Framework.
There are inheritance for drivers for combining them. 


## System in Folders

What is the role where system.config sits?

We need to publish/subscribe to topics that follow the folder structure starting from the folder where the system.config is (excluded)

● switch on the coffee machine?
We need to publish to topic kitchen/coffee_machine/switch/set on

● set all lights in living room to blue?
We need to publish to topic living_room/leds1/rgb/set blue
living_room/leds2/rgb/set blue

● turn the main power off?
We need to publish to topic main/switch/set off

– What is the general rule for forming
topics in IoTempower?
Follow the folder architecture from system.config down to the node. Add the device and the subtopics. 

– When does it make sense to change
something in system.conf?
 When you are deploying the system on a different network (gateway)