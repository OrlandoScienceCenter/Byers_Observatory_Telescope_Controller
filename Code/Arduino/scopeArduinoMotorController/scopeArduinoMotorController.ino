// Delays:
const int _solarDelayMicros = 9500;
const int _lunarDelayMicros = 9300;
const int _siderealDelayMicros = 8973;

const int _stepperPinOnTimeMicros = 5;

// Pins:
const int _pinEquatorialGearStepper = 3;
const int _pinTrimStepper = 5;

const int _pinTrackingModeSwitchLunar = 8;
const int _pinTrackingModeSwitchSolar = 9;
const int _pinOnboardLed = 13;

enum TrackingRateMode
{
  UNINITIALIZED,
  SOLAR,
  LUNAR,
  SIDEREAL
};
 
void setup() 
{
  Serial.begin(115200);
  
  Serial.println(F("Init begin."));

  initializeAllPins();

  Serial.println(F("Init done."));
}

void loop() 
{
  TrackingRateMode currentTrackingRate = checkTrackingRateSwitch();

  stepMotorsOnce(currentTrackingRate);
}

void initializeAllPins()
{
  pinMode(_pinTrimStepper, OUTPUT);
  digitalWrite(_pinTrimStepper, LOW);

  pinMode(_pinEquatorialGearStepper, OUTPUT);
  digitalWrite(_pinEquatorialGearStepper, LOW);

  pinMode(_pinOnboardLed, OUTPUT);
  digitalWrite(_pinOnboardLed, LOW);

  // Inputs:
  pinMode(_pinTrackingModeSwitchSolar, INPUT_PULLUP);  
  pinMode(_pinTrackingModeSwitchLunar, INPUT_PULLUP);  
}
