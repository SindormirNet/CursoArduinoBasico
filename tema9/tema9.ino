#define LED A5

void setup(){
  Serial.begin(9600); //Indicamos la velocidad del puerto serie 
  pinMode(LED, OUTPUT); //Establecemos el pin 9 como salida

  Serial.print("Introduce números del 0 al 9: ");
}

void loop() {
  char dato;
  int brillo;

  if (Serial.available() > 0) { //¿Ha enviado algún dato el PC?
    dato = Serial.read();  //Guardamos el dato enviado en la variable dato        
    brillo = map(dato,'0','9',0,255); //Escalamos el valor
    analogWrite(LED, brillo);  //Modificamos la intensidad del LED 
    Serial.print("Cambiado brillo a ");  //Escribimos de vuelta al PC
    Serial.println(dato);
  }
}
