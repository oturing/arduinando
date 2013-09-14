/*

- verificar qual segmento do display esta ligado ao pino 13

 */
 
int led = 13; // B

void setup() {                
  pinMode(led, OUTPUT);     
}

void loop() {
  digitalWrite(led, HIGH);
  delay(1000);             
  digitalWrite(led, LOW);
  delay(1000);           
}
