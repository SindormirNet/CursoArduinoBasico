int pin;

void setup() {
  for (pin = 2; pin <= 5; pin++){
    pinMode(pin, OUTPUT);     
  }
}
  
void loop() {
  for (pin = 2; pin <= 5; pin++) { 
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
