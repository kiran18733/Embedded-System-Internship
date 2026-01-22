int irPin = 2;
int resetPin = 4;
int ledPin = 13;

int alarm = 0;

void setup() {
  pinMode(irPin, INPUT);
  pinMode(resetPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
}

void loop() {

  if (digitalRead(irPin) == LOW) {
    alarm = 1;
  }

  if (digitalRead(resetPin) == LOW) {
    alarm = 0;
    digitalWrite(ledPin, LOW);
  }

  if (alarm == 1) {
    digitalWrite(ledPin, HIGH);
    delay(300);
    digitalWrite(ledPin, LOW);
    delay(300);
  }
}
