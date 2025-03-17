const int USER_LED = 13;
const int USER_SW = 4;

void setup() {
pinMode(USER_LED, OUTPUT);
pinMode(USER_SW, INPUT_PULLUP);
Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  Serial.println("Hello");
  delay(1000);
  
  int buttonState=digitalRead(4);
  if (buttonState==LOW){
    digitalWrite(USER_LED, HIGH);
    Serial.println("Button is Pressed");
  }
  else
  digitalWrite(13, LOW);
  
  // put your main code here, to run repeatedly:

}
