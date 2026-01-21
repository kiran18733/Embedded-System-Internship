#define BTN_PIN 4
void setup() {
  pinMode(13,OUTPUT);
  pinMode(BTN_PIN,INPUT);
}

void loop() {
  while(digitalRead(BTN_PIN)){
    digitalWrite(13,HIGH);
  }
    digitalWrite(13,LOW);
}
