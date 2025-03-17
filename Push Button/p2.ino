void setup() {
  // put your setup code here, to run once:
  pinMode(4, INPUT_PULLUP);
  pinMode(13, OUTPUT);
}

void loop() {
  int buttonState = digitalRead(4);
  
  if(buttonState == LOW)
  digitalWrite(13, HIGH);
  else
  digitalWrite(13,LOW);
  // put your main code here, to run repeatedly:
}
