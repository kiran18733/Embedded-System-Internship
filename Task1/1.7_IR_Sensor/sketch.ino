int irPin = 2;
int ledPin = 12;

void setup() {
  pinMode(irPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  if (digitalRead(irPin) == LOW) {   
    digitalWrite(ledPin, HIGH);  
    delay(1000);    
  } else {
    digitalWrite(ledPin, LOW);       
  }
}
