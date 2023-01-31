# Original Byers Paddle Information

* Photograph of interior PCB are in [images/](images/)

* IC Datasheets are in the datasheets folder

* All chips inside are 5v nominal power, with ranges falling right around there

## Board Research:

Input pins:

All pins for socket are given with 1 being far left, 4 being far right and paddle buttons should be facing the sky.

Pin positions on board are given in direction using [2023-01-30_08.02.05.jpg](images/2023-01-30_08.02.05.jpg) as the reference. (The two horizontal ICs should be along the bottom of the board. The socket should be on the left. Buttons facing you.)

Socket pinout:

| Pin position on board | Socket pin # | Function on board | RJ11 Color (UNRELIABLE?) |
| --------------------- | ------------ | ----------------- | ------------------------ |
| North-East            | Socket_1     | ?                 | Black                    |
| North-West            | Socket_2     | ?                 | Red                      |
| South-East            | Socket_3     | GND               | Green                    |
| South-West            | Socket_4     | 5v VCC IN         | Yellow                   |

Top left pin of top button shorts to gnd when pressed
Bottom left pin of top button shorts to gnd when pressed

| Arduno Pro Mini (Inside Paddle) | Position Relative to Reference Photo Orientation | Wire color inside paddle  | Paddle Function |
| ------------------------------- | ------------------------------------------------ | ------------------------- | --------------- |
| Pin D2                          | Top Button (By reference photo)                  | Yellow                    | RA Left         |
| Pin D3                          | Right Button (By reference photo)                | Green                     | Dec Up          |
| Pin D4                          | Bottom Button (By reference photo)               | Blue                      | RA Right        |
| Pin D5                          | Left Button (By reference photo)                 | White                     | Dec Down        |
| Pin D6                          | Slow on Switch                                   | Grey                      | Slower          |
| Pin D7                          | Fast on Switch                                   | Grey                      | Faster          |
| GND                             | G on Switch                                      | Grey                      | Guider?         |

## ICs:

### SN74LS04N

SN54LS04 in datasheet 

* VCC IN: 4.5v - 5.5v (5v NOM)
* Hex inverters

### DM74LS123N

DM74LS123 in datasheet

* VCC IN: 4.75v - 5.25v (5v NOM)
* Dual retriggerable one-shot with clear and complimentary outputs

### SN74LS165ND

SN54/74LS165 in datasheet

* VCC in: 4.5v - 5.5v (5v NOM)
* 8-Bit parallel to serial shift register
