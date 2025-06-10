

import time
import requests, json
from influxdb import InfluxDBClient as influxdb
import serial

seri = serial.Serial("/dev/ttyACM0", baudrate = 9600, timeout = None)

while True:
    time.sleep(1)
    if seri.in_waiting != 0:
        content = seri.readline()
        a = float(content.decode())
        data = [{
            "measurement" : "dust",
            "tags" :{
                "InhaUni" : "2222",
                },
            "fields" : {
                "dust2" : a,
                }
            }]
        client = None
        try:
            client = influxdb('localhost', 8086, 'root', 'root', 'dust2')
        except Exception as e:
            print("Exception" + str(e))
        if client is not None:
            try:
                client.write_points(data)
                print(a)
                print("running influxdb OK")
            except Exception as e:
                print("Exception write " + str(e))
            finally:
                client.close()
