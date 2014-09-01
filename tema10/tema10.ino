#define PULSADOR 2
#define LED 13

void setup() {
  pinMode(LED, OUTPUT);      
  pinMode(PULSADOR, INPUT_PULLUP);     
}

void loop(){
  if (digitalRead(PULSADOR) == LOW) {	//¿Está presionado el pulsador?
    digitalWrite(LED, HIGH);		      //Encendemos el LED 
  } 
  else {
    digitalWrite(LED, LOW);		      //Apagamos el LED
  }
}
