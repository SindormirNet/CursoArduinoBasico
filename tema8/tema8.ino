void setup() {
    pinMode(6, OUTPUT);
}

void loop() {
	int pot0;
	int dimmer_led;
	
	pot0 = analogRead(A0);
	dimmer_led = map(pot0,0,1023,0,255);

	analogWrite(6,dimmer_led);
}
