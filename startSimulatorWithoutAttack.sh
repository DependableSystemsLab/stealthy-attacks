#!/bin/bash

xhost +SI:localuser:root

case $1 in 
	copter )
		vehicle="ArduCopter";;
	rover )
		vehicle="APMrover2";;
	* )
		echo "Please specify vehcile type (copter or rover). Example: ./startSimulator copter --console --map";
		exit 0;
esac

docker run --rm -it --name sitl -e XAUTHORITY=/tmp/xauth -v /tmp/.X11-unix:/tmp/.X11-unix -e DISPLAY=unix$DISPLAY -v $(pwd)/logs/$1:/stealthy-attacks/Simulator/ardupilot-non-attack-version/$vehicle/statelogs/logs -v $(pwd)/build_sitl/$1:/stealthy-attacks/Simulator/ardupilot-non-attack-version/build/sitl -w /stealthy-attacks/Simulator/ardupilot-non-attack-version/$vehicle stealthy-attacks:latest sim_vehicle.py --aircraft statelogs ${@:2}

# kill $SOCAT_SCID_PID
