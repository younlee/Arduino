int trig = 10;
int echo = 9;
void setup() {
  Serial.begin(9600);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
}

void loop() {
  float distance;
  float duration;
  digitalWrite(trig, HIGH);
  delay(10);
  digitalWrite(trig,LOW);

  duration = pulseIn(echo,HIGH);
  distance = ((float)(340 * duration) / 10000) / 2;

  Serial.print("duration : ");
  Serial.println(duration);
 
  Serial.print("\ndistance : ");
  Serial.println(distance);
  delay(500);
  
}
