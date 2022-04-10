#!/bin/bash
DURATION=5
SIZE=1
taskset -c 0 chrt -f 80 /home/pi/Programs/CycloneDDS/bin/ddsperf pong -D $DURATION &> /dev/null & taskset -c 1 chrt -f 80 /home/pi/Programs/CycloneDDS/bin/ddsperf ping size ${SIZE}kB -D $DURATION