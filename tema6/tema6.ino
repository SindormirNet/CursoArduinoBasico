#define SEG_A 2
#define SEG_B 3
#define SEG_C 4
#define SEG_D 5
#define SEG_E 6
#define SEG_F 7
#define SEG_G 8
#define SEG_DP 9

void setup() {
  for (int i=10; i<14; i++)
    pinMode(i, INPUT);
  for (int i=2; i<9; i++)
    pinMode(i, OUTPUT);    
}

void loop() {
  int botones_pulsados;
  botones_pulsados=cuenta_botones();
  imprime_7_segmentos(botones_pulsados);
}

int cuenta_botones(){
  int contador = 0;
  
  for (int i=10; i<14; i++)
    if (digitalRead(i)==HIGH) contador++;
  return contador;
}

void imprime_7_segmentos(int num) {
  switch (num) {
  case 0:
    digitalWrite(SEG_A, HIGH);
    digitalWrite(SEG_B, HIGH);
    digitalWrite(SEG_C, HIGH);
    digitalWrite(SEG_D, HIGH);
    digitalWrite(SEG_E, HIGH);
    digitalWrite(SEG_F, HIGH);
    digitalWrite(SEG_G, LOW);
    break;    
  case 1:
    digitalWrite(SEG_A, LOW);
    digitalWrite(SEG_B, HIGH);
    digitalWrite(SEG_C, HIGH);
    digitalWrite(SEG_D, LOW);
    digitalWrite(SEG_E, LOW);
    digitalWrite(SEG_F, LOW);
    digitalWrite(SEG_G, LOW);
    break;
  case 2:
    digitalWrite(SEG_A, HIGH);
    digitalWrite(SEG_B, HIGH);
    digitalWrite(SEG_C, LOW);
    digitalWrite(SEG_D, HIGH);
    digitalWrite(SEG_E, HIGH);
    digitalWrite(SEG_F, LOW);
    digitalWrite(SEG_G, HIGH);
    break;
  case 3:
    digitalWrite(SEG_A, HIGH);
    digitalWrite(SEG_B, HIGH);
    digitalWrite(SEG_C, HIGH);
    digitalWrite(SEG_D, HIGH);
    digitalWrite(SEG_E, LOW);
    digitalWrite(SEG_F, LOW);
    digitalWrite(SEG_G, HIGH);
    break;
  case 4:
    digitalWrite(SEG_A, LOW);
    digitalWrite(SEG_B, HIGH);
    digitalWrite(SEG_C, HIGH);
    digitalWrite(SEG_D, LOW);
    digitalWrite(SEG_E, LOW);
    digitalWrite(SEG_F, HIGH);
    digitalWrite(SEG_G, HIGH);
    break;
  case 5:
    digitalWrite(SEG_A, HIGH);
    digitalWrite(SEG_B, LOW);
    digitalWrite(SEG_C, HIGH);
    digitalWrite(SEG_D, HIGH);
    digitalWrite(SEG_E, LOW);
    digitalWrite(SEG_F, HIGH);
    digitalWrite(SEG_G, HIGH);
    break;
  case 6:
    digitalWrite(SEG_A, HIGH);
    digitalWrite(SEG_B, LOW);
    digitalWrite(SEG_C, HIGH);
    digitalWrite(SEG_D, HIGH);
    digitalWrite(SEG_E, HIGH);
    digitalWrite(SEG_F, HIGH);
    digitalWrite(SEG_G, HIGH);
    break;
  case 7:
    digitalWrite(SEG_A, HIGH);
    digitalWrite(SEG_B, HIGH);
    digitalWrite(SEG_C, HIGH);
    digitalWrite(SEG_D, LOW);
    digitalWrite(SEG_E, LOW);
    digitalWrite(SEG_F, LOW);
    digitalWrite(SEG_G, LOW);
    break;
  case 8:
    digitalWrite(SEG_A, HIGH);
    digitalWrite(SEG_B, HIGH);
    digitalWrite(SEG_C, HIGH);
    digitalWrite(SEG_D, HIGH);
    digitalWrite(SEG_E, HIGH);
    digitalWrite(SEG_F, HIGH);
    digitalWrite(SEG_G, HIGH);
    break;
  case 9:
    digitalWrite(SEG_A, HIGH);
    digitalWrite(SEG_B, HIGH);
    digitalWrite(SEG_C, HIGH);
    digitalWrite(SEG_D, LOW);
    digitalWrite(SEG_E, LOW);
    digitalWrite(SEG_F, HIGH);
    digitalWrite(SEG_G, HIGH);
    break;
  default:
    digitalWrite(SEG_A, LOW);
    digitalWrite(SEG_B, LOW);
    digitalWrite(SEG_C, LOW);
    digitalWrite(SEG_D, LOW);
    digitalWrite(SEG_E, LOW);
    digitalWrite(SEG_F, LOW);
    digitalWrite(SEG_G, LOW);
    break;    
  }
}

