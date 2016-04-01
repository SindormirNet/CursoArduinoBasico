#define LED 3
#define PULSADOR 7

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(PULSADOR, INPUT);      
}

void loop() {

  while(digitalRead(PULSADOR) == LOW) { }

  while(1 == 1) {
    digitalWrite(LED, HIGH);
    delay(100);
    digitalWrite(LED, LOW);
    delay(100);
  }
}
