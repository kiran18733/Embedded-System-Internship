int irPin = 2;
int ledPin = 12;

int count = 0;
int lastState = HIGH;

void setup() {
  pinMode(irPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int state = digitalRead(irPin);
  if (state == LOW && lastState == HIGH) {
    count++;
    delay(300);   
  }
lastState = state;


  for (int i = 0; i < count; i++) {
    digitalWrite(ledPin, HIGH);
    delay(300);
    digitalWrite(ledPin, LOW);
    delay(300);
  }
  count = 0;  
}
