int led = 7;  // GPIO7 핀에 연결된 LED

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  // 처음 1초 동안 LED 켜기
  digitalWrite(led, HIGH);
  delay(1000);

  // 다음 1초 동안 5회 깜빡이기 (200ms x 5 = 1000ms)
  for (int i = 0; i < 5; i++) {
    digitalWrite(led, HIGH);
    delay(100);
    digitalWrite(led, LOW);
    delay(100);
  }

  //  LED 끄고 무한루프로 종료
  digitalWrite(led, LOW);
  while (1) {}
}
