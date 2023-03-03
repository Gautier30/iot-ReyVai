from iotknit import *
import time

init("iotgateway")  # use a MQTT broker on localhost

prefix("temp")  # all temperature sensors below are prefixed with /temp

temp = publisher("temp1")  # create a Thingi interface that publishes to temp/temp1

while True:
    for t in range(20, 30):
        temp.publish(str(t))  # publish temperature value
        time.sleep(1)  # wait for 1 second
    for t in range(30, 20, -1):
        temp.publish(str(t))  # publish temperature value
        time.sleep(1)  # wait for 1 second
