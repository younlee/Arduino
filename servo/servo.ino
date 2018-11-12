#include <Servo.h>

Servo myservo;
int pos = 0;

void setup() {
  myservo.attach(9);
}

void loop() {
  for(pos = 120; pos >0; pos--)
  {
    myservo.write(pos);
    delay(30);
  }
}
