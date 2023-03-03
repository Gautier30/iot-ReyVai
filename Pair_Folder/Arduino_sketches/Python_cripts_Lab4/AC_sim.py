from iotknit import *

init("iotgateway")  # use a MQTT broker on localhost

prefix("switch")  # all actors below are prefixed with /switch

ac = publisher("ac1")

def acCallback(msg):

    print("received: [temp]", msg)

    try:
        t = int(msg)
    except ValueError:
        return
    
    if (t >= 25):
        ac.publish("set", "on")
        print("AC is turned on")
    else:
        ac.publish("set", "off")
        print("AC is turned off")

prefix("temp")
temp = subscriber("temp1")
temp.subscribe_change(callback=acCallback)

run()  # you can also do a while loop here call process() instead
