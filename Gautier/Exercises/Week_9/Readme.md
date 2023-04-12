# LEDs
### LEDs controlled lights VS traditional light bulbs
*Pros*

* Some LEDs/LED strips are adressable meaning they can display different colors individually. We can then create complex light effects like moving rainbows, light fading...

* With the right µ-controller we can even control them wirelessly and automate them.

* LEDs consume less power than incandescent bulbs.

* DIY LED systems are cheaper than Philips Hue bulbs for instance.

*Cons*

* LED strips with high density of LEDs draw a lot of current. (Require external, powerful PSUs).

* With D1 minis only one port can be used, so only one strip can be controlled by a single µ-controller.

*Cool scenarios*

* Art projects like the LED dog, no real purpose other than decorate and look cool. *Ninho* project is also a good example merging nature, life, and electronics.

* LEDs attached to the back of motorcycle jackets to extend braking lights and turn signals. Some motorcycle have very small, hardly noticeable lights from the factory, and rider's backs are at eye level of car drivers.

* Animations at crosswalks to emphasize on pedestrians crossing and make drivers more aware.



### Technical challenges
*What can go wrong?*

* Programming animations on an LED strip requires long and complex codes. 

* Scaling the right power source for the amount of LEDs in use is sensible. A single WS2812B draws 60mA, so for a 100-LED strip the PSU needs to supply 6A. 



# Power Saving
### Why do we need this? What is challenging?

Some IoT devices need to function on batteries and not from wall power. Therefore we need to optimize power consumption to make sure the batteries can last.

We can save energy by adding some deep sleep logic to the µ-controller which can be interrupted by software or hardware by sending a signal on the RST pin or pressing the Reset button. By introducing a cycle within the firmware, the controller wakes as long as necessary then goes back to sleep until the cycle repeats. 

But then the issue is pushing a firmware update to a device that isn't constantly ON...