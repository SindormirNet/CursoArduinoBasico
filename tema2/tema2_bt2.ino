#define LED 13
#define PERIODO 2000
#define T (PERIODO/2)

void setup() {
	pinMode(LED, OUTPUT);
}

void loop() {
	digitalWrite(LED, HIGH);
	delay(T);
	digitalWrite(LED, LOW);
	delay(T);
}
