void setup(){
  int pin;
  for (pin=10; pin<=13; pin++) {
    pinMode(pin,INPUT);
  }
  init_7_segmentos();
}

void loop() {
  int botones_pulsados;
  botones_pulsados=cuenta_botones();
  imprime_7_segmentos(botones_pulsados);
}

int cuenta_botones(){
  int contador = 0;
  int i;

  for (i=10; i<14; i++){
    if (digitalRead(i)==HIGH) {
      contador++;
    }
  }
  return contador;
}


