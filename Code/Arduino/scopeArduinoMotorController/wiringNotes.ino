/*

  Solar/Sidereal/Lunar Pedestal switch wiring notes:

    Center pin to GND shared with arduino
    Lunar pin to _pinTrackingModeSwitchLunar (Defined in main sketch)
    Solar pin to _pinTrackingModeSwitchSolar (Defined in main sketch)
  
    When solar is selected on switch, _pinTrackingModeSwitchSolar will be pulled low.
    When lunar is selected on switch, _pinTrackingModeSwitchLunar will be pulled low.

    If neither is pulled low, we know sidereal is selected.
    
*/