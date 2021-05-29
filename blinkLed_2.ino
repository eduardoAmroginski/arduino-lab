void setup() {
  // put your setup code here, to run once:
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  
}

void loop() {

  int interval1, interval2;

  interval1 = 200;
  interval2 = 500;
  
  // put your main code here, to run repeatedly:
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  delay(interval1);
  
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  delay(interval2);
}
