/**
 * FINAL SOURCE
 * 대포가습기 최종 소스
 */

int hum = 5;
int led = 6;
int trig = 12;
int echo = 13;

float getDistance() {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  float duration = pulseIn(echo, HIGH);
  return duration / 29 / 2;
}

void setup() {
  pinMode(hum, OUTPUT);
  pinMode(led, OUTPUT);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
}

void loop() {
  float distance = getDistance();

  if (distance < 20) {
    digitalWrite(led, HIGH);
    digitalWrite(hum, HIGH);
  } else {
    digitalWrite(led, LOW);
    digitalWrite(hum, LOW);
  }
}
