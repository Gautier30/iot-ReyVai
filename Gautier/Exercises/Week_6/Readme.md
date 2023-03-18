### Scaling and Testing

*What will be issues scaling up?*

Scaling up implies that we introduce more devices in the system, thus, we increase the bandwidth of data that runs by the gateway, we complexify the communication by adding more nodes, thus more topics and sub-topics. The NodeRed flows become much denser which makes it more complicated to manage.

*How can we do testing?*

We could test using simulated devices, using debugging tools within the NodeRed evironment (to print the received and emitted messages in real time for instance), we could also fraction the system per sub-topic to isolate only a few devices at once.

*What would you like to see for scaling up?*

For scaling up I'd like to see how over-the-air updates work. They're especially useful in a complex IoT system since they don't require to physically interact with the device (i.e. plugging a USB cable to the µ-controller to flash a firmare update).

*What role will play simulator(-component)s, MQTT, and stories?*

Simulator components will help test and debug without introducing hardware issues, MQTT will make for an easy, and robust communication medium and the stories will help define clearly the needs and therefore speed up the deployment of a solution.

### We need a framework

*How does Node-RED (IoT Integration Platform) help?*

Node-RED helps a lot because it's a no code IoT framework that allows to graphically build and deploy an IoT system. It's free and the internet is full of resources to learn how to use it.

*Is PlatformIO enough for development support?*

PlatformIO is some sort of Arduino IDE on steroids which allows for a fatser workflow (VS code autocompletion etc), it's compatible with a plethora of boards and drivers/libraries are easy to manage for each of the projects. I do think it's enough for development support.

*Would it be helpful if the framework were open (what would we
gain)? How open does it need to be (maybe even think about
software license)?*

The framework being open is a huge advantage. If it's open it means the project is backed by many developers and therefore, there is a great community that can help with bugs and other types of issues. If some software is closed, it's like a black box which is great until the point where it fails and there's no way to understand what's gone wrong unless we contact the customer support...


### Meet IoTempower

IoTempower makes it very easy to manage nodes and most importantly, it supports OTA updates!

### Bonus features