#define led_pin 6

void setup() {
  pinMode(led_pin, OUTPUT);
}

void loop() {
  // Fade IN
  for (int i = 0; i <= 255; i++) {
    analogWrite(led_pin, i);
    delay(10);   // smaller delay for smooth fade
  }

  // Fade OUT
  for (int i = 255; i >= 0; i--) {
    analogWrite(led_pin, i);
    delay(10);
  }
}
