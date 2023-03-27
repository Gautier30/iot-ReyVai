## IoTempower
General steps for adding a new device:
- Connect to network
- find the device in commands
- create new node
- get the example code and chage to your need
- deploy onto the device
- to test wiring -> mqtt_send to the topic specified in the documentation
- make a flow in Node-RED
- use Node-RED Ui to do further testing

## Architecture
## Answer (and guide me) the following questions during demonstration (→ portfolio):
 You already know how to install IoTempower through a pi image – what other ways of using/installing it are there?
- Where are the tools/commands/scripts?
https://github.com/iotempire/iotempower/blob/master/doc/tool-support.rst

- Where is documentation?
https://github.com/iotempire/iotempower/tree/master/doc
- What is the role of the different folders in lib/node_types?
There is hierarchical inheritance structure.

## Which topic needs to be called with
what to
- switch on the coffee machine?

kitchen/coffe-machine/switch/set on
- set all lights in living room to blue?

living_room/leds1/rgb/set blue
living_room/leds2/rgb/set blue
- turn the main power off?

main/switch/set off
## What is the general rule for forming topics in IoTempower?
Follow a folder structure for topics and files. Directory to the device + /set and payload.
## When does it make sense to change something in system.conf?
When we want to specify the network and change wifi settings. system.conf file is the root of the project.




## Under the hood, features

- What needs to/can go into node.conf?
- How do [optional config.txt,] etc/iotempower.conf, system.conf, and node.conf influence environment variables for compiling?

system.conf is the project root. node.conf can be used to change the conf file for specific node


## Heartbeats/monitoring

## PWM/Servo -> video*?

- frequency
- duty cycle

## Control RGB Led in IoTempower - video*