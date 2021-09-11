import machine
import utime
from utime import sleep

adc = machine.ADC(28)

while True:
    t1 = utime.ticks_ms()
    
    for i in range(1000):
        val = adc.read_u16()
        
    t2 = utime.ticks_ms()
    delt = t2 - t1
    sleep(0.5)
    print(" Time(ms): ",delt)
    