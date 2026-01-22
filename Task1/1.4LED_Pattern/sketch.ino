#define  led_red    13
#define  led_yellow 12
#define  led_green  11

int led[] = {led_red,led_yellow,led_green};
void setup() {
  pinMode(led_red, OUTPUT);
  pinMode(led_yellow, OUTPUT);
  pinMode(led_green, OUTPUT);
}
void loop() {
  for(int i=0 ; i<3;i++)
  {
    digitalWrite(led[i],HIGH);
    delay(500);
    digitalWrite(led[i],LOW);
    delay(500);
  }

}
