void stepMotorsOnce(TrackingRateMode currentTrackingRate)
{
  if (currentTrackingRate == UNINITIALIZED) return;
  
  // Otherwise:
  const int numberOfMotors = 1;
  
  stepMotorOnPin(_pinEquatorialGearStepper);
  //stepMotorOnPin(_pinDeclinationStepper);

  serialDebugMotorDelayMessage(currentTrackingRate);
   
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

  serialDebugMotorOnMessage(motorStepPin);

  delayMicroseconds(_stepperPinOnTimeMicros);
  
  digitalWrite(motorStepPin, LOW);
  digitalWrite(_pinOnboardLed, LOW);
}

void serialDebugMotorOnMessage(int motorStepPin)
{
  Serial.print(F("Turned on motor step pin "));
  Serial.print(motorStepPin);
  Serial.print(F(" for: "));
  Serial.print(_stepperPinOnTimeMicros);
  Serial.println(F(" microseconds"));
}

void serialDebugMotorDelayMessage(TrackingRateMode currentTrackingRate)
{
  Serial.print(F("Delaying before next motor(s) steps for: "));
  Serial.print(currentTrackingRate);
  Serial.print(F(" tracking rate"));
}

