void stepMotorsOnce(TrackingRateMode currentTrackingRate)
{
  if (currentTrackingRate == UNINITIALIZED) return;
  
  // Otherwise:
  stepMotorOnPin(_pinEquatorialGearStepper);

  if (currentTrackingRate == SOLAR)
  {
    delayMicroseconds(_solarDelayMicros - _stepperPinOnTimeMicros);
  }    

  if (currentTrackingRate == LUNAR)
  {
    delayMicroseconds(_lunarDelayMicros - _stepperPinOnTimeMicros);
  }
    
  if (currentTrackingRate == SIDEREAL)
  {
    delayMicroseconds(_siderealDelayMicros - _stepperPinOnTimeMicros);
  }
}

void stepMotorOnPin(int motorStepPin)
{
  digitalWrite(motorStepPin, HIGH);
  digitalWrite(_pinOnboardLed, HIGH);

  delayMicroseconds(_stepperPinOnTimeMicros);
  
  digitalWrite(motorStepPin, LOW);
  digitalWrite(_pinOnboardLed, LOW);
}