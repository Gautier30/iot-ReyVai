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