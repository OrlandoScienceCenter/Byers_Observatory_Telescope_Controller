void stepMotorsOnce(TrackingRateMode currentTrackingRate)
{
  if (currentTrackingRate == UNINITIALIZED) return;
  
  // Otherwise:
  const int numberOfMotors = 1;
  
  stepMotorOnPin(_pinEquatorialGearStepper);
  //stepMotorOnPin(_pinTrimStepper);

  Serial.println(F("Delaying before next motor(s) steps for: " + currentTrackingRate + F(" tracking rate")));

  if (currentTrackingRate == SOLAR)
  {
    delayMicroseconds(_solarDelayMicros - (_stepperPinOnTimeMicros * numberOfMotors));
  }    

  if (currentTrackingRate == LUNAR)
  {
    delayMicroseconds(_lunarDelayMicros - (_stepperPinOnTimeMicros * numberOfMotors));
  }
    
  if (currentTrackingRate == SIDEREAL)
  {
    delayMicroseconds(_siderealDelayMicros - (_stepperPinOnTimeMicros * numberOfMotors));
  }
}

void stepMotorOnPin(int motorStepPin)
{
  digitalWrite(motorStepPin, HIGH);
  digitalWrite(_pinOnboardLed, HIGH);

  Serial.println(F("Turned on motor step pin " + motorStepPin + " for: " + _stepperPinOnTimeMicros + F(" microseconds")));
  delayMicroseconds(_stepperPinOnTimeMicros);
  
  digitalWrite(motorStepPin, LOW);
  digitalWrite(_pinOnboardLed, LOW);
}