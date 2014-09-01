void setup() {
	pinMode(13, OUTPUT);		// Establece el pin 13 como SALIDA
}
void loop() {
	digitalWrite(13, HIGH);		// Activa el LED
	delay(1000);			// Espera 1000 ms
	digitalWrite(13, LOW);		// Desactiva el LED
	delay(1000);			// Espera 1000 ms
}
