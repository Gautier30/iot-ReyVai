**Cloud** is **servers** in the **internet**.
**Edge** computing is **gateway**, **things** and **nodes**.

**Nodes** are the µ-controllers while Leds, sensors are devices or **things**. Then the nodes connects to the gateway...
**Swarm** spreads a task across many nodes (Ex: a swarm of drones used to map an environment). Hivemind approach.
**Edge** and **fog** computing are rather close concepts, but **fog** can be considered further inside the **cloud**.

**XML**'s advantage is that it's used everywhere by anything, but **JSON** is better. **Binary** is lightweight but it's not readable by humans. 

With readable protocols we spend less time debugging and developing, that's why we prefer them over binary.

### IoTempower Gateway

*Main Steps*
1. Put software on the Pi's SD card.
2. Put the Pi in its case **without** the SD card otherwise it could break!
3. Insert the SD card the right way in its slot.
4. Plug an IoTempower dongle if one is available.
5. Power up the Pi with its powersupply.

TO BE CONTINUED...

*Why do we need a gateway?*
Everything we use in IoT needs to be connected to the WIFI. But there would be too many deviced connected to Eduroam and it would be confusing, IPs would change all the time... Having a personal WIFI hotspot/network is much more comfortable. 

*Why a Pi and not just a router?*
The Pi is a bit like a router on steroids which we can configure. In this case the Pi is not an IoT device but just a gateway.

### Turn on a light with HTTP

*Main Steps*
