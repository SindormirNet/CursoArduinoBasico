void setup() {
  pinMode(6, OUTPUT);
  
}
void loop() {
  int freq;
  
  freq=map(analogRead(A0), 0, 1023, 50, 15000);
  
  tone(6, freq);
}
