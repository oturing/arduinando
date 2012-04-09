/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */

const int PRIM_PINO = 6;
const int ULT_PINO = 13;
const int DELAY = 200;
int pino_ativo = PRIM_PINO;

void setup() {                
  // initialize the digital pin as an output.
  // Pin 13 has an LED connected on most Arduino boards:
  for (int pino=PRIM_PINO; pino<=ULT_PINO; pino++) {
    pinMode(pino, OUTPUT);     
  }
}

void loop() {
  digitalWrite(pino_ativo, HIGH);   // set the LED on
  delay(DELAY);                     // wait
  digitalWrite(pino_ativo, LOW);    // set the LED off
  //delay(DELAY);                   // wait
  pino_ativo++;
  if (pino_ativo > ULT_PINO) {
    pino_ativo = PRIM_PINO;  
    delay(DELAY);                   // wait
  }
}
