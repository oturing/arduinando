/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */

const int PRIM_PINO = 6;
const int ULT_PINO = 13;
const int POTENCIOMETRO = A0;
const int DELAY = 200;
int pino_ativo = PRIM_PINO;
int pot = 0; // valor lido do potenciometro

void setup() {                
  // initiacializar pinos digitais de saida
  for (int pino=PRIM_PINO; pino<=ULT_PINO; pino++) {
    pinMode(pino, OUTPUT);     
  }
  //Serial.begin(9600); 
}

void loop() {
  pot = analogRead(POTENCIOMETRO);
  //Serial.println(pot); 
  digitalWrite(pino_ativo, HIGH);   // set the LED on
  delay(pot);              // wait for a second
  digitalWrite(pino_ativo, LOW);    // set the LED off
  //delay(DELAY);              // wait for a second
  pino_ativo++;
  if (pino_ativo > (ULT_PINO-2)) { // nao piscar ponto nem centro
    pino_ativo = PRIM_PINO;  
    delay(DELAY);              // wait for a second
  }
}
