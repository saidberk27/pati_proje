import time
arduino = open("/dev/ttyUSB1", "r")
while True:
    print(arduino.read())
    time.sleep(1.5)
