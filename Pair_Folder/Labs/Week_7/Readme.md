## Lab 7

## Project 1

Build an access control system (extending tasks from the last lab) using the RFID reader, the RGB led, the buzzer, the display, and the relay with the solenoid drawer lock. Show the access status on the RGB-LEDs (red for access denied and green for access granted). When access is granted, open the lock (make sure it locks again after a short while). When access is denied, play a short nasty sound on the buzzer.

## Components

1. RFID Reader: Reads the RFID card/tag and sends the information to the system.
2. RGB LED: Indicates access status (red for access denied, green for access granted).
3. Buzzer: Produces a short, unpleasant sound when access is denied.
4. Display: Shows the access decision ("Access granted" or "Access denied").
5. Relay with Solenoid Drawer Lock: Locks and unlocks based on the access decision.

## Progress

We managed to control the LED, relay, and display separately, but we did not manage to get the whole system running as a whole. The individual nodes were functional, but the complete system was not yet integrated.

## Separate Node Functionality

1. LED Control: Successfully changed the RGB LED color according to the access decision. The colour of the red was flipped tho.
2. Relay Control: Managed to control the solenoid drawer lock, locking and unlocking based on the access decision.
3. Display Control: Displayed "Access granted" or "Access denied" on the screen according to the RFID reader's output.

## TODO
 1. Combine the separate nodes to create a fully functional access control system. 
 2. Test the complete system with different RFID cards/tags to ensure accurate access control.
 3. Fix the flow in Node-RED to allow different RFID cards to be used.
 4. Adjust the timing and duration of the lock opening, LED status indication, and buzzer sound as necessary. This will be done in Node-RED.


 ## Single RGB LED Code and Flow

setup.cpp

    rgb_single(led,D5, D6, D7, true);

Node-RED flow
    
    [{"id":"78be421b8145456f","type":"tab","label":"RFID_lock","disabled":false,"info":"","env":[]},{"id":"aee56778138e391b","type":"mqtt out","z":"78be421b8145456f","name":"","topic":"rgb/led/rgb/set","qos":"","retain":"","respTopic":"","contentType":"","userProps":"","correl":"","expiry":"","broker":"4d6296f2db4785e3","x":1040,"y":360,"wires":[]},{"id":"7857a661b827409e","type":"ui_colour_picker","z":"78be421b8145456f","name":"","label":"ledcolor","group":"2e7b447f8a602f27","format":"hex","outformat":"string","showSwatch":true,"showPicker":false,"showValue":false,"showHue":false,"showAlpha":false,"showLightness":true,"square":"false","dynOutput":"true","order":4,"width":0,"height":0,"passthru":true,"topic":"topic","topicType":"msg","className":"","x":800,"y":300,"wires":[["aee56778138e391b"]]},{"id":"7f6a6c9f9f47061d","type":"ui_button","z":"78be421b8145456f","name":"","group":"46aaa7ad7f9816bf","order":5,"width":"4","height":"1","passthru":false,"label":"access granted","tooltip":"","color":"","bgcolor":"green","className":"","icon":"","payload":"green","payloadType":"str","topic":"topic","topicType":"msg","x":720,"y":340,"wires":[["aee56778138e391b"]]},{"id":"9cf96285256649b5","type":"ui_button","z":"78be421b8145456f","name":"","group":"46aaa7ad7f9816bf","order":5,"width":"4","height":"1","passthru":false,"label":"access denied","tooltip":"","color":"","bgcolor":"red","className":"","icon":"","payload":"red","payloadType":"str","topic":"topic","topicType":"msg","x":720,"y":380,"wires":[["aee56778138e391b"]]},{"id":"4d6296f2db4785e3","type":"mqtt-broker","name":"local mqtt broker on gateway","broker":"192.168.12.1","port":"1883","clientid":"","autoConnect":true,"usetls":false,"protocolVersion":"4","keepalive":"60","cleansession":true,"birthTopic":"","birthQos":"0","birthPayload":"","birthMsg":{},"closeTopic":"","closeQos":"0","closePayload":"","closeMsg":{},"willTopic":"","willQos":"0","willPayload":"","willMsg":{},"userProps":"","sessionExpiry":""},{"id":"2e7b447f8a602f27","type":"ui_group","name":"Default","tab":"f084747d9b4f2415","order":1,"disp":true,"width":"6","collapse":false,"className":""},{"id":"46aaa7ad7f9816bf","type":"ui_group","name":"door-lock","tab":"f084747d9b4f2415","order":2,"disp":true,"width":"6","collapse":false,"className":""},{"id":"f084747d9b4f2415","type":"ui_tab","name":"Home","icon":"dashboard","disabled":false,"hidden":false}]

![alt text](../..//Pictures/Week_7/single_rgb_led.gif)
