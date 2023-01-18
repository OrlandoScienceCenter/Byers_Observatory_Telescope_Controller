# System Overview

This is an overview of how the Telescope was set up from 2018 to 2023

## Arduino

There is an Arduino driving the stepper motor for the equatorial gear. See the scopeDriveTest01 section at [/Code/Arduino/README.md](/Code/Arduino/) for details.

## Power

There is a Mean Well +5v power supply in the pedestal supplying the arduino (but not the stepper motor driver board, although there is a shared ground between all of them)

<picture>
  <img alt="Image of arduino power supply" src="/../Documentation/System%20Overview%20as%20of%202023-01-18/img/scope_pictures/2023-01-18%2013.23.43.jpg">
</picture>

The stepper motor driver board is supplied by the main telescope power supply, which is original.

