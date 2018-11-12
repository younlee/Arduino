int led = 9;
void setup() {
pinMode(led,OUTPUT);
Serial.begin(9600);
}

void loop() {
  
int value = analogRead(A0);
Serial.println(value);
if(value > 50)
{
  digitalWrite(led,1);
}
else
  digitalWrite(led,0);

  delay(10);
}
