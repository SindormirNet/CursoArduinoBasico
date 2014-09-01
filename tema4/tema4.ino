byte pin;

void setup() {
  for (pin = 2; pin < 6; pin++)
	  pinMode(pin, OUTPUT);     
}
  
void loop() {
  for (pin = 2; pin < 6; pin++) { 
    digitalWrite(pin, HIGH);   
    delay(100);                  
    digitalWrite(pin, LOW);    
  }
  for (pin = 5; pin >= 2; pin--) { 
    digitalWrite(pin, HIGH);   
    delay(100);                  
    digitalWrite(pin, LOW);    
  }
}
