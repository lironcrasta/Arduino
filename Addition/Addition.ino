#define DEFAULT_VALUE 4 //define Method Declaration
int addy(int x, int y = DEFAULT_VALUE);

void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  }

void loop() {
  int first = 5;
  int second = 10;
  int output;
  output = add(first, second);
  Serial.println(output);
  // put your main code here, to run repeatedly:
}

int add(int x, int y)
{
  int result;
  result = x+y;
  return result;
}
