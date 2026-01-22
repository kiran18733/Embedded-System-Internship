int buttonPin = 3;
int irPin = 2;
int ledPin = 13;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(irPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  if (digitalRead(buttonPin) == LOW && digitalRead(irPin) == LOW) {
    digitalWrite(ledPin, HIGH);   
  } else {
    digitalWrite(ledPin, LOW);    
  }
}

