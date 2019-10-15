//시니얼 모니터에 숫자를 입력하면, Int 자료형이 아닌, 조금 범위가 작은 Long 함수 자료형으로 입력한 숫자를 보여준다
//34를 입력하면, 모니터에 34를 출력


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
   if(Serial.available()){
  long value = Serial.parseInt();
  Serial.println(value);
}
}
