/** LED PWM
 * 3. LED의 밝기를 변경해서 보여주세요.
 */

void setup() {
  analogWrite(6, 30);
  delay(500);
  analogWrite(6, 100);
  delay(500);
  analogWrite(6, 255);
  delay(500);
}

void loop() {
}
