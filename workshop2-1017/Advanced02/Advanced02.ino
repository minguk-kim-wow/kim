void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(6, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
 int Z = analogRead(A0);
 int y = map(Z, 0, 1023, 0, 255);
 
 // float voltage = sensorValue * (255.0 / 1023.0);
 Serial.println(y);
 analogWrite(6, y);
}
