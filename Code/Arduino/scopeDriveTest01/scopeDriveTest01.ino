void setup() {
  // put your setup code here, to run once:

  Serial.begin(115200);
  
  pinMode(3, OUTPUT);
  pinMode(13, OUTPUT);
  
  digitalWrite(3, LOW);
  digitalWrite(13, LOW);

  Serial.println("Init done");
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(3, HIGH);
  digitalWrite(13, HIGH);
  
  delayMicroseconds(5);
  
  digitalWrite(3, LOW);
  digitalWrite(13, LOW);

  delay(9);
  delayMicroseconds(500);
  
  // between 9ms and 10ms for solar

  Serial.println("Cycle run");
}
