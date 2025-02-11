# Pi-Deck-5
![ISOUP21125](https://github.com/user-attachments/assets/2885826f-c453-49fd-b91b-b10ef34b15ee)![TT21125](https://github.com/user-attachments/assets/2f22b1f5-317a-4b29-9777-f92556b6daa0)


A Pi 5-based handheld purpose-built for retro videogame emulation

Overview

The Pi Deck 5 can run any system that a normal Pi 5 can run including N64, PSX, and anything older or less intensive than those. The system's core is a Raspberry Pi 5 with desoldered IO to cut down on thickness. This is connected to a Teensy 3.2 microcontroller (because I had one lying around) for buttons and joystick movements. The display is a generic 5-inch 800x480 IPS HDMI that can be found on Amazon. The system is powered with 4 18650 cells wired in 2s to a type C charge board and HW-391 Balance BMS. Output is fed into the Mini560 buck converter to step down to 5V 5A which powers everything in the system. 
The form factor was intended to be close to the steam deck at just under 300mm wide, under 125mm tall, and 50mm tall. 

Project files so far include the complete OBJ and the Fusion360 project files. I have also included the code for the Teensy 3.2 microcontroller that interprets the buttons and joysticks. 

To Do List

Currently, there is no proper mounting in the shell for the shoulder PCBs as I used hot glue  
Currently, there are no proper contact pad PCBs or designs as I made my boards by hand  
Currently, the joysticks are shimmed into the right place and hot glued down  

If this project is to progress, it will eventually need to use a CM5 because desoldering the Pi 5 was not a beginner-friendly chore. The interface board should only include power, HDMI, one USB 3.0, and an internal USB 2.0. In the future, it would be nice if power delivery, charging, and audio out could be moved to the interface board. 
