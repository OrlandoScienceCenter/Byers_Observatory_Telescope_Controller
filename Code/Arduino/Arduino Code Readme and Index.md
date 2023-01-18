# scopeDriveTest01

This is the arduino code that was driving the equatorial gear's stepper motor from 2018 to 2023. 

It runs on an Arduino Uno or equivalent. The pins are below.

It is timed so that the constant stepping ends up tracking astronomical objects fairly well. There's no adjustment in speed for different objects. It does not move the trim motor, just the equatorial gear.

| Arduino Pin                   | Connection                                                   |
| ----------------------------- | ------------------------------------------------------------ |
| D3                            | Equatorial gear stepper pulse pin on stepper driver          |
| 5V                            | 5V output from meanwell power supply in pedestal             |
| GND                           | GND output from meanwell power supply, GND on stepper driver |
