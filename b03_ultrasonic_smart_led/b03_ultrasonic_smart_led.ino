/**
 * Ultrasonic Sensor Smart LED
 * 3. 초음파 센서를 이용하여 물체/사람이 감지되면
 *   3초간 LED를 켜주는 스마트 조명 만들기
 *   지속적인 감지시에는 지속적으로 켜준다.(3초가 계속 이뤄지기에)
 */

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
  pinMode(led, OUTPUT);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
}

void loop() {
  float distance = getDistance();

  if (distance < 20) {
    digitalWrite(led, HIGH);
    delay(3000);
  } else {
    digitalWrite(led, LOW);
  }
}
