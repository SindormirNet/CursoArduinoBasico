void setup() {
	pinMode(LED, SALIDA);
}

void loop() {
	digitalWrite(LED, VCC);	//Encendemos LED
	delay(250);
	digitalWrite(LED, GND);	//Apagamos LED
	delay(250);
}
