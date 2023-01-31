void setup() 
{
  Serial.begin(4800);

  pinMode(3, OUTPUT);

  Serial.println(F("Init done..."));

  Serial.println(F("PWM START NOW"));
}

void loop() 
{
   analogWrite(3, 512);
}
