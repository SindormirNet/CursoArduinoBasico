#define LED 3
#define PULSADOR 2

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(PULSADOR, INPUT);      
}

void loop() {

  do {
    digitalWrite(LED, HIGH);
    delay(100);
    digitalWrite(LED, LOW);
    delay(100);
  } while(digitalRead(PULSADOR) == HIGH);
}
