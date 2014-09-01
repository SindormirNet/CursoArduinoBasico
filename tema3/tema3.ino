#define PULSADOR 2
#define LED 13

int lectura_pulsador;	//Variable que almacenará el estado del pulsador

void setup() {
  pinMode(LED, OUTPUT);      
  pinMode(PULSADOR, INPUT);     
}

void loop(){
  lectura_pulsador = digitalRead(PULSADOR);

  if (lectura_pulsador == HIGH) {	//¿Está presionado el pulsador?
    digitalWrite(LED, HIGH);		//Encendemos el LED 
  } 
  else {
    digitalWrite(LED, LOW);		//Apagamos el LED
  }
}
