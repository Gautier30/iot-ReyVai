# Research records 09

## Lecture slides
https://bit.ly/ut-iot-2023-09

## FINAL PROJECT PLAN

2 domains, actors and monitoring

find a cork.

Only the challenges but no step by step.
Make a dashboard

Detailed table and recommendation for use case
 Installation manual
 scenario/story

 ## LEDs video

A great scenario is to create a simple low pix screen and display your data with different animations.

So many interface possib

### LED and animation in IoTempower

***pros and cons***

CONS:

Current and volt limiting. Power supply is a challenge when you run too many LEDS. 

Not being able to control more than one strip per WEMOS DQmini. We can only use one port for the bus.

PROS:

We can control adressable LED strips, so each light can display different colors individually. We can then program light animations and effects like moving rainbows, fading, rolling, etc.

Control the strip and individual leds wirelessly with one bus.

LEDs consume less energy than incandescent bulbs.

DIY LED systems can be highly customizable. 

***cool scenarios with led lights***

We can make a low pix video game or;
Motorcycle jacket or helmet with brake and turn signals. We can even sew the LEDs on clothes.

Cross walk signals. The ground can glow in animations when someone is crossing. 


***What are technical challenges - what can go wrong?***

Dealing with bigger matrixes would be supper finicky with these set up cause we need many microcontrollers. 
Scaling could be hard regarding power management.

Maybe use the
STM32F4
https://www.st.com/en/microcontrollers-microprocessors/stm32f4-series.html
to control multiple strips with one board. 

## Power saving video

deep sleep can be use to conserve power when the boards are running on batteries.

CONs: Software updates can be tricky as it needs to be timed when the node is wake.