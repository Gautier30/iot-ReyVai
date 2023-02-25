**Cloud** is **servers** in the **internet**.
**Edge** computing is **gateway**, **things** and **nodes**.

**Nodes** are the µ-controllers while Leds, sensors are devices or **things**. Then the nodes connects to the gateway...
**Swarm** spreads a task across many nodes (Ex: a swarm of drones used to map an environment). Hivemind approach.
**Edge** and **fog** computing are rather close concepts, but **fog** can be considered further inside the **cloud**.

Schematic that shows the relations between those terms: 

![alt text](https://media.discordapp.net/attachments/1074995984775512095/1077547210369138718/image.png)

**XML**'s advantage is that it's used everywhere by anything, but **JSON** is better. **Binary** is lightweight but it's not readable by humans. 

With readable protocols we spend less time debugging and developing, that's why we prefer them over binary.

### IoTempower Gateway

*Main Steps*
1. Put software on the Pi's SD card.
2. Put the Pi in its case **without** the SD card otherwise it could break!
3. Insert the SD card the right way in its slot.
4. Plug an IoTempower dongle if one is available.
5. Power up the Pi with its powersupply.
6. Change the WIFI settings within the configuration files of the Pi: "wifi.txt" for SSID, password, and in case internet acces is desired, "wifi-in.txt" can be edited to use Eduroam credentials.
7. The WIFI USB dongle should be plugged into the 2.0 ports in case the Pi is not connected via Ethernet to the internet.
8. When the PC is connected to the Pi's hotspot, we can SSH in a terminal with <ssh iotgateway -l iot> and the password is *iotempire*.
9. Once the SSH connection is established, a way to test the Pi has access to the internet is pinging a website as such: <ping ulno.net>


*Why do we need a gateway?*
Everything we use in IoT needs to be connected to the WIFI. But there would be too many deviced connected to Eduroam and it would be confusing, IPs would change all the time... Having a personal WIFI hotspot/network is much more comfortable. 

*Why a Pi and not just a router?*
The Pi is a bit like a router on steroids which we can configure. In this case the Pi is not an IoT device but just a gateway.

### Turn on a light with HTTP

*Main Steps*
1. Plug the D1 mini to the computer and select the board on the Arduino IDE.
2. Load up the "HelloServer" example.
3. Edit the sketch with WIFI credentials, and LED pin.
4. Create a new handle that turns the LED on, and another to turn it off (simpy copy paste the example for "/inline" and add the LED logic).
5. Open the Serial monitor and copy the IP, paste it in a browser and add the desired handle (**/on** or **/off**) to control the LED.