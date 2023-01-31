void setup() 
{
  Serial.begin(115200);
  
  initializePins();

  while (!Serial) delay(10);

  Serial.println("Init done");
}

void loop() 
{
  bool isPressed = false;

  isPressed = !digitalRead(2);

  delay(100);

  clearSerialMonitor();
  
  //Serial.println("Read done");

  if (isPressed)
  {
    Serial.println(F("Button pressed currently!"));
  }
}

void initializePins()
{
  // Init pins D2 through D9
  for (int i = 2; i < 10; i++)
  {
    pinMode(i, INPUT_PULLUP);
  }
  
  pinMode(13, OUTPUT);
  digitalWrite(13, LOW);
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