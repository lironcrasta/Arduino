#define DEFAULT_VALUE 4 //define Method Declaration
int addy(int x, int y = DEFAULT_VALUE);
bool blinkLED(int numOfTimes);

void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  // put your setup code here, to run once:
  }

void loop() {
  int numOfTimes = 5;
  Serial.println(numOfTimes);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN,LOW);
  delay(1000);
  // put your main code here, to run repeatedly:

}
int add(int x, int y)
{
  int result;
  result = x+y;
  return result;
}
