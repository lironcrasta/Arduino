#include <EEPROM.h>
#include "Utility_Function.h"

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int result = add(4,5);
  int resulty = addy (2);
  Serial.print("The result of add is");
  Serial.println(result);
  delay(1000);
  Serial.print("The result of addy is");
  Serial.println(resulty);
  delay(1000);
}
