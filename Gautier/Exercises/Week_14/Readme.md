## IoTempower Dongle

*Potential application for the project?*

First of all, the dongle is vital to shutdown or reboot the IoT gateway safely without SSHing into the gateway with a PC.

Pressing twice de dongle at startup turns into adoption mode --> morse mode
The commands below show the available D1s in adoption mode on the network.

```
iot
dongle scan
```
We can flash the devices once and reuse, reconfigure them endlessly without ever plugging them to the gateway physically.

The OLED display is not mandatory on the node being adopted, but it makes it clearer to see what's happening.

For the project that would be really usefull to swap sensors and flash a new node in a hearbeat to improve the smart planter. In terms we'd build a very **modular** solution.

## Anything missing? Comments?

Include more generic, lower level cpp programming before introducing IoTEmpower so students know how to deploy basic, DIY IoT solutions before using the big guns with IoTEmpower, the gateway etc. 

Or make it a pre-requisiste to know basic MCU programming with classic sensors and components like buttons, LEDs, resistors...

The structure of portfolios seems rigid at first, but growing up in the course it becomes more natural.