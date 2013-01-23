/*

- descobrir o que faz o pino 12
- descobrir os demais leds (segmentos)
- acender os segmentos do perimetro em sequencia
- encontrar o potenciometro (analogRead(A0))
- alteraçao do delay
- fazer a minhoca
- fazer a minhoca mais comprida
-Acender a 13 quando chegar no 6

*/


int led = 13;

void setup() {
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  //pinMode(13, OUTPUT);
  //for (int i=5; i<=11; i++) {  
  //  pinMode(i, OUTPUT);
  //}    
}

void loop() {
 
  digitalWrite(12, HIGH);
  delay(analogRead(A0));
  
  digitalWrite(11, HIGH);
  delay(analogRead(A0));
  digitalWrite(12, LOW);
  
  digitalWrite(10, HIGH);
  delay(analogRead(A0));
  digitalWrite(11, LOW);
  
  digitalWrite(9, HIGH);
  delay(analogRead(A0));
  digitalWrite(10, LOW);
  
  digitalWrite(12, HIGH);
  delay(analogRead(A0));
  digitalWrite(9, LOW);
  
  digitalWrite(5, HIGH);
  delay(analogRead(A0));
  digitalWrite(12, LOW);
  
  digitalWrite(6, HIGH);
  digitalWrite(13, HIGH);
  delay(analogRead(A0));
  digitalWrite(5, LOW);
  
  digitalWrite(7, HIGH);
  delay(analogRead(A0));
  digitalWrite(6, LOW);
  digitalWrite(13, LOW);
  delay(analogRead(A0));
  digitalWrite(7, LOW);
  
  //digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  //delay(pot);               // wait for a second
  //digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  //delay(pot);               // wait for a second
}
