## Bonus Features

### Generic steps for adding a device to IoTempower

* Making sure we're connected to the gateway
* Look up the command for the device in the documentation
* Creating a new node within the iot-systems directory
* Add the desired command to the sketch
* Flash ("Deploy" on the UI) the µ-controller
* Interact with the freshly created nodes with mqtt commands calling the right topic

## IoTempower

## System in folders

### Which topics need to be called?

* Switch the coffee machine

    --> kitchen/coffee-machine/switch/set on

* Set all lights in living room to blue?

    --> living_room/leds1/rgb/set blue
    --> living_room/leds2/rgb/set blue

* Turn the main power off?

    --> main/switch/set off


### General rule for forming topics?

In general we write a topic following the system's hierarchy: from higher on the left to lower on the right.

### When does it make sense to change something in system.conf?

If we move the project to another machine, it gives the root of the project.

