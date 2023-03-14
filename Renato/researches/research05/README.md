# Research records 05

## Lecture slides

The slides for this lecture can be found here: https://bit.ly/ut-iot-2023-05

## Simulators and integration/integrator

Integrator - iotKnit, mqtt_action


Mockups

Architecture - gateway border line security
Pi gives a bit more security mechanism

## IoT Frameworks part 1

● Kai Wähner: IoT Open Source Integration
Comparison (part 1 0:00-11:29)
https://www.youtube.com/watch?v=uOrLOgsCpNE

IoT integration systems.
Open source integration

How can we develop and manage software faster for IoT?



What are the key challenges of IoT and why?

Devices communicating with one another so the need integration. 


300 IoT platforms on the market.
Devices are not connect to the cloud;
low bandwidths to connect
latency and connectivity is significant
Expensive network costs. 

No one size fits all. 


What is/are the generic solution(s) for it?

Mqtt, coap, OPC
COnnectors and process design tools and they have to be integrated. 
Hybrid integration Platform (HIP)
Fog computing
Integration
Edge and gateway share some of the computation

**Two examples for used patterns.**

dataflow pipeline
Entemprise integration
Publish/subscribe 

## IoT Frameworks part 2
How can we develop and manage software faster for IoT?
● Kai Wähner: IoT Open Source Integration Comparison
(part 2 11:29-18:27)
https://www.youtube.com/watch?v=uOrLOgsCpNE


● What are the different categories of the presented
frameworks?
Dataflow pipeline
Stream Processing 
Process Engine

● What are the main features of each category?

Dataflow pipeline/
Stream Processing / (act on the data while is being captured) Correlate data while it is in motion.
Process Engine / Do integration at the edge. Error handling, re/try, re/routing, wait, resume.


● Three or more examples of applications.

Device registration

● Three or more examples of available tools.

nifi
streamSts
Cask Hydrator
Informatica
Flink / (act on the data while is being captured)

Kura
Node-red
Flogo


## Node-red

It was enjoyable to get a hands-on introduction of Node-Red in the lecture. 

We were able to get the button working on the mqtt node. 

![alt text](/home/renato/Documents/Doutorado/IOT_UT/iot-ReyVai/Renato/pictures/node-red_flow.png "Node-red flow")

Pair_Folder/NodeRed_flows/flows_button.json 
