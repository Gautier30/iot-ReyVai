# Guest Lecture - Emilio Mercuri

## **Challenges:** 
1. How can we use IoT to measure air pollution in a city like Curitiba? 
2. How to monitor water level in watershed?

**Environment engineering:** study the natural environment, how to protect, preserve and restore it?

## Challenge 1:

The different polluants we could monitor are: particulate matter (PM), nitrogen dioxide (NO2), sulfur dioxide (SO2), and ozone (O3).

We could buy a bunch of ESP8266/ESP32 with LoRa-compatible shields/extensions and air quality sensors (electrochemical sensors, optical sensors, and laser sensors) and deploy them in a grid across town on lampposts, buildings, or other high points. They could be connected via WiFi or using LoRaWAN, Sigfox...

Upon collecting measurements we could apply machine learing to the data and analyze it to detect patterns, trends. We could create maps to visialize parts of the city where air pollution is worse...

From the analysis of air pollution data we could suggest new policies and regulations to mitigate environmental impact.

## Challenge 2:

For this challenge we could use some buoy tethered to the bottom of the ditch containing an IMU. This system would be similar to the ones used to measure sea tide. The buoy that's been used so far is prone to tear and wear due to its many moving parts, but a single heavy dutty buoy with all the electronics srongly sealed in would be tougher against the elements.

As for water flow, some flow sensors (turbines) could be used downstream, but then, we might want to measure the flow upstream and that would be problematic...

Similarly to the first challenge, the sensors could be hooked up to LoRa compatible hardware to send the data wirelessly.