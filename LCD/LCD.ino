#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 2, 3, 4, 5);

void setup() {
lcd.begin(16,2); //LCD의 높낮이를 설정하는 명령어
lcd.print("hello, world!");
}

void loop() {
lcd.setCursor(0, 1);
lcd.print(analogRead(A0));
delay(200);
}
