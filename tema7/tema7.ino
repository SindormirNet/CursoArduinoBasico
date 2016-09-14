void setup() {
  int i;

  for (i=2; i<9; i++){
    pinMode(i, OUTPUT);
  }
}

void loop() {

  int valor_pot0;
  byte valor_mapeado;
  
  valor_pot0 = analogRead(A0);  //Leemos el valor de la entrada analógica 0
  
  valor_mapeado = map(valor_pot0, 0, 1023, 2, 8); //Convertimos los niveles
 
  //Activamos el LED que corresponda al valor leído
  digitalWrite(valor_mapeado, HIGH); 
}
