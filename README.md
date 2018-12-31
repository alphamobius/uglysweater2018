# uglysweater2018
Ugly Sweater 2018.  

Flashed to 3x identical esp8266 NODEMCU devices with identical code, wired as will be shown in the wiring diagram.  

Provide power to 2x 8266 devices via USB power brick, total draw is somewhere around 2.5-3.5 amps, so one cable isnt enough. 
Connect all 3 VIN and a GROUND wire between the devices, and you'll be good to go. I used the 20K mAh Anker battery from amazon. 

Connect all 3 control wires, see .ino file and wiring diagram, and connect a button for simultaneous control of all 3 devices.  It's definitely not perfect and will occasionally go out of synch, requiring a reset or manual mode change of individual 8266's, but I built this 3 days. 

Future ideas:
-Use proto board and a 3d printed case for a better smart box to house everything, keep the large battery in your pocket. 
-Add a wifi hotspot and simple captive portal webpage saying, "Merry Christmas, ya filthy animal!"


