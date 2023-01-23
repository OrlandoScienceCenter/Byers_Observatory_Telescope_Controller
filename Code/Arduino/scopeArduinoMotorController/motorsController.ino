void stepMotorsOnce(TrackingRateMode currentTrackingRate)
{
  if (currentTrackingRate == UNINITIALIZED) return;
  
  // Otherwise:
  stepMotorOnPin(_pinEquatorialGearStepper);

  Serial.println(F("Delaying before next motor(s) steps for: " + currentTrackingRate + F(" tracking rate")));

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

  Serial.println(F("Turned on motor step pin for: " + _stepperPinOnTimeMicros + F(" microseconds")));
  delayMicroseconds(_stepperPinOnTimeMicros);
  
  digitalWrite(motorStepPin, LOW);
  digitalWrite(_pinOnboardLed, LOW);
}