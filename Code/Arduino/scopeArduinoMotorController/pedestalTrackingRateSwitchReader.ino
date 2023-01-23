enum TrackingRateMode checkTrackingRateSwitch()
{
  bool trackingModeSwitchLunarPinState = 
    !digitalRead(_pinTrackingModeSwitchLunar);

  bool trackingModeSwitchSolarPinState = 
    !digitalRead(_pinTrackingModeSwitchSolar);

  if (trackingModeSwitchLunarPinState)
    return LUNAR;
  
  if (trackingModeSwitchSolarPinState)
    return SOLAR;
  
  // If neither (See wiringNotes.ino):
  return SIDEREAL;
}