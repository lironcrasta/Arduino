#include <NewPing.h>

#define TRIGGER_PIN  5  
#define ECHO_PIN     4  
#define MAX_DISTANCE 500 // Maximum distance we want to ping for (in centimeters).(Max-> 500cm)

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
#include <Arduino.h>
#include <TM1637Display.h> 
#define CLK 2
#define DIO 3
#define TEST_DELAY  1000
TM1637Display display(CLK, DIO);

void setup() 
{
  Serial.begin(9600); 
}

void loop() {
  display.setBrightness(0x0f);
  uint8_t data[] = { 0x0, 0x0, 0x0, 0x0 };
  display.setSegments(data);
  int distance = sonar.ping_cm();
                   
  Serial.print("Ping: ");
  Serial.print(sonar.ping_cm());
  Serial.println("cm");
  display.showNumberDec(distance, false, 3,1);
  delay(1000);  
}