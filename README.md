# Stealthy Attacks Against Robotic Autonomous Vehicles
This project contains simulations for triggering stealthy attacks against robotic vehicles. We use ArduPilot SITL to demonstrate three types of stealthy attacks namely: i) False Data Injection, ii) Artificial Delay, iii) Switch Mode attacks, on copter and rover.   

# Building the docker image
Clone the project
```bash
git clone https://github.com/DependableSystemsLab/stealthy-attacks.git
cd stealthy-attacks
```
Build docker image
```bash
docker build -t stealthy-attacks DockerFile/.
```
Run docker Simulator
Simulator can be executed following the steps given here http://ardupilot.org/dev/docs/setting-up-sitl-on-linux.html 
For easy execution we have provided a script that will start the simultor. 
```bash
./startSimulator.sh copter --console --map
```
To run an existing missions, use this command:
```bash
wp load ../Tools/autotest/ArduPlane-Missions/CMAC-toff-loop.txt
```


