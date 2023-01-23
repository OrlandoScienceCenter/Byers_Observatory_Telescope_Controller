# scopeDriveTest01

This is the arduino code that was driving the equatorial gear's stepper motor from 2018 to 2023. 

### Current status: 
* ~~For archival purposes only as of 2023-01-??~~ (Not yet verified)


It runs on an Arduino Uno or equivalent. The pins are below.

It is timed so that the constant stepping ends up tracking astronomical objects fairly well. There's no adjustment in speed for different objects. It does not move the trim motor, just the equatorial gear.

| Arduino Pin                   | Connection                                                   |
| ----------------------------- | ------------------------------------------------------------ |
| D3                            | Equatorial gear stepper pulse pin on stepper driver          |
| 5V                            | 5V output from meanwell power supply in pedestal             |
| GND                           | GND output from meanwell power supply, GND on stepper driver |

# scopeArduinoMotorController

This will ultimately be the code that runs on the arduino

### Current status: 
* In progress as of 20203-01-23
* ~~Usable as main code with pedestal tracking rate switch function as of 2023-01-??~~ (Not yet verified)

| Arduino Pin                   | Connection                                                              |
| ----------------------------- | ----------------------------------------------------------------------- |
| 5V                            | 5V output from meanwell power supply in pedestal                        |
| GND                           | GND output from meanwell power supply, GND on stepper driver            |
|                               |                                                                         |
| D3                            | ARDUINO OUTPUT: Equatorial gear stepper pulse pin on stepper driver     |
| D5                            | ARDUINO OUTPUT: Trim stepper pulse pin. No details yet.                 |
|                               |                                                                         |
| D8                            | ARDUINO INPUT PULLUP: Pulled high, low when pedestal switch is on lunar |
| D9                            | ARDUINO INPUT PULLUP: Pulled high, low when pedestal switch is on solar |
| N/A                           | When both lunar and solar pins are high, we know sidereal is selected   |