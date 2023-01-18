# 2023-01-18 System Overview

This is an overview of how the Telescope was set up from 2018 to 2023

## Arduino

There is an Arduino driving the stepper motor for the equatorial gear. See the scopeDriveTest01 section at [/Code/Arduino/README.md](/Code/Arduino/) for details and pin listing. The scopeDriveTest01 code is what was running on the Arduino from 2018 - 2023.

<a href="img/scope_pictures/2023-01-18_13.09.42.jpg">
    <img src="img/scope_pictures/2023-01-18_13.09.42.jpg" 
        alt="Picture of 2018 Arduino redboard installed after main motherboard died" 
        width=300 />
</a>

## Power

There is a Mean Well RS-25-5 +5v power supply in the pedestal supplying the arduino (but not the stepper motor driver board, although there is a shared ground between all of them)

Mean Well power supply:

<a href="img/scope_pictures/2023-01-18_13.23.43.jpg">
    <img src="img/scope_pictures/2023-01-18_13.23.43.jpg" 
        alt="Picture of Mean Well power supply" 
        width=300 />
</a>
<br><br>

Byers telescope original power supply:

<a href="img/scope_pictures/2023-01-18_13.23.50.jpg">
    <img src="img/scope_pictures/2023-01-18_13.23.50.jpg" 
        alt="Picture of Mean Well power supply" 
        width=300 />
</a>



## Equatorial gear stepper motor driver board

The stepper motor driver board (green) is supplied by the main telescope power supply, which is original.

<a href="img/scope_pictures/2023-01-18_13.09.29.jpg">
    <img src="img/scope_pictures/2023-01-18_13.09.29.jpg" 
        alt="Picture of stepper motor driver green control board" 
        width=300 />
</a>

## Accessing the arduino and stepper control board

It is accessed through this panel with a 9/64" allen key:

<a href="img/scope_pictures/2023-01-18_13.23.25.jpg">
    <img src="img/scope_pictures/2023-01-18_13.23.25.jpg" 
        alt="Picture of stepper motor driver control board and arduino access panel" 
        width=300 />
</a>

## Panels and display

None of the panels, switches, external device connectors, or the display is hooked up in this state.