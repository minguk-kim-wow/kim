void setup() {
  // put your setup code here, to run once:
  pinMode(6, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(6, 10);
  delay(2000);
  analogWrite(6, 0);
  delay(500);
  analogWrite(6,255);
  delay(2000);
  analogWrite(6, 0);
  delay(500);
  analogWrite(6,127);
  delay(2000);
  analogWrite(6, 0);
  delay(500);  
}
