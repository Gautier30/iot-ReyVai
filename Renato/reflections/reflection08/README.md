# Reflections

## week 8

The idea of bringing a guest lecture to present a tool that is a direct "competitive" to the tool we are using in class form the framework, in this case Grafana vs. Node-red, brought some interesting dynamics to the lecture. Time was not managed to make a fair comparison though and also to do a more profound discussion about how these each tool is more appropriate for each situation. It was still really rich experience to see the differences and similarities with both tools. 

LAB

The lab today was going really well. We were combining the single RGB_LED with the relay lock and RFID part into the same project. 

We got the lock-door project working, but when we tried to improve the timing on the lock, bugs started happening. The relay node was rebooting after all the time. The RFID stopped working, it would only read sometimes the ID. 
Another group was also having the same trouble with the Relay node crashing often.


That would be really important for the libraries to be tested and functional before we work with them in the classroom.

**Talking to Ulno, we imagined that it would be important to have a test network setup and running all the time where we could test every update and see what breaks. Have it running on a server with dashboards and debug messages that can show when nodes crash and why they crashed.**

Also it would again be important to have snapshots of the framework of more stable versions of most libraries.

Ulno said that a whole stable version is an utopian idea, but a somewhat stable version is doable I believe.