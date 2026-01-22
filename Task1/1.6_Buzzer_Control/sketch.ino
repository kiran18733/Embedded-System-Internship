int ledPin = 9;
int buttonPin = 2;

int count = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  
  if (digitalRead(buttonPin) == LOW) {
    count++;

    if (count == 1) {
      analogWrite(ledPin, 50);   
    }
    else if (count == 2) {
      analogWrite(ledPin, 150);  
    }
    else if (count == 3) {
      analogWrite(ledPin, 255);  
      count = 0;                 
    }

    delay(300); 
  }
}
