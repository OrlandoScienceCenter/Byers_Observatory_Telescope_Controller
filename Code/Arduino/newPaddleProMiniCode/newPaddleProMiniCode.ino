void setup() 
{
  Serial.begin(115200);
  
  initializePins();

  while (!Serial) delay(10);

  Serial.println("Init done");
}

void loop() 
{
  delay(100);

  clearSerialMonitor();
  
  readoutWhatButtonsArePressed();
}

void initializePins()
{
  // Init pins D2 through D7
  for (int i = 2; i < 8; i++)
  {
    pinMode(i, INPUT_PULLUP);
  }
  
  pinMode(13, OUTPUT);
  digitalWrite(13, LOW);
}

void readoutWhatButtonsArePressed()
{
  bool raLeftIsPressed = false;
  bool decUpIsPressed = false;
  bool raRightIsPressed = false;
  bool decDownIsPressed = false;
  bool switchFastIsSelected = false;
  bool switchGIsSelected = false;
  bool switchSlowIsSelected = false;

  raLeftIsPressed = !digitalRead(2);
  decUpIsPressed = !digitalRead(3);
  raRightIsPressed = !digitalRead(4);
  decDownIsPressed = !digitalRead(5);
  
  // Below here, all F/G/S switch stuff
  switchSlowIsSelected = !digitalRead(6);
  switchFastIsSelected = !digitalRead(7);  

  if (!switchFastIsSelected && !switchSlowIsSelected)
  {
    switchGIsSelected = true;

    switchFastIsSelected = false; 
    switchSlowIsSelected = false;
  }
  
  // Now read the results!
  Serial.println(F("Buttons currently pressed/selected:"));
  
  if (raLeftIsPressed)
    Serial.println(F("RA Left"));

  if (raRightIsPressed)
    Serial.println(F("RA Right"));

  if (decUpIsPressed)
    Serial.println(F("DEC Up"));

  if (decDownIsPressed)
    Serial.println(F("DEC Down"));

  Serial.println();
  Serial.print(F("Switch position: "));

  if (switchFastIsSelected)
    Serial.println(F("Fast"));

  if (switchGIsSelected)
    Serial.println(F("G"));

  if (switchSlowIsSelected)
    Serial.println(F("Slow"));
}

void clearSerialMonitor()
{
  Serial.println();
  Serial.println();
  Serial.println();
  Serial.println();
  Serial.println();
  Serial.println();
  Serial.println();
  Serial.println();
  Serial.println();
  Serial.println();
  Serial.println();
  Serial.println();
  Serial.println();
  Serial.println();
  Serial.println();
  Serial.println();
  Serial.println();
  Serial.println();
  Serial.println();
  Serial.println();
  Serial.println();
  Serial.println();
}