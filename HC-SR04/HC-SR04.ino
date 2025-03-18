#define trigPin 11
#define echoPin 12

float duration, distance;

void setup() {
  // put your setup code here, to run once:
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration= pulseIn(echopin, HIGH);
  distance= (duration*.0343)/2;
  Serial.print("Distance: ");
  Serial.println(distance);
  delay (1000)
}
