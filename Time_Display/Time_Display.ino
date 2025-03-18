#include <RTClib.h>
#include <TM1637Display.h>

#define CLK 2
#define DIO 3

TM1637Display display = TM1637Display(CLK,DIO);
RTC_DS3231 rtc;

void setup() {
  // put your setup code here, to run once:
  rtc.begin();
  rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
  display.setBrightness(4);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  DateTime now=rtc.now();
  int h=now.hour();
  int m=now.minute();
  Serial.println(h);
  Serial.println(m);

  delay(1000);

  display.showNumberDecEx(h,0x40,true,2,0);
  display.showNumberDecEx(m,0x40,true,2,2);
}

