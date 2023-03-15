## Lab 6

ESP32 was not working. 

### First Node Lab

We followed the video tutorial and were successful at deploying the first node by using the Web server interface (Cloud Commander, CLI GUI). We understood that adapting it (initializing) and deploying(flashing it) are different actions. 

documentation here: https://github.com/iotempire/iotempower/blob/master/doc/first-node.rst

To get the button working we imported examples from the command list into:

test01 > setup.cpp

    input(b1, D3, "released", "pressed");

We than subscribed an MQTT input in Node-red to test01/b1 to see the msgs coming in. 

On task n.4 Button to sound and notification we were not able to get any sound out as it had no Voice installed on the PI. 

With the help of Professor Ulrich we were able to record some sound from our laptop using: 

    parecord hello_nodered.wav

Than we drag and dropped the audio file in the Pi file system via Cloud Commander. Finally using the node-red file node, we could direct this WAV to the Gauge out put sound notification node. 