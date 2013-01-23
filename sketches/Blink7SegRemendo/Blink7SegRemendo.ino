/*
  Blink
  Pisca todos os segmentos de um visor de 7 segmentos em sequencia, depois o ponto.
 */

const int PRIM_PINO = 5;
const int PINO_RUIM = 8;
const int ULT_PINO = 13;
const int DELAY = 2000;
int pino_ativo = PRIM_PINO;

void setup() {                
  for (int pino=PRIM_PINO; pino<=ULT_PINO; pino++) {
    pinMode(pino, OUTPUT);     
  }
}

void loop() {
  digitalWrite(pino_ativo, HIGH); 
  delay(DELAY);                     
  digitalWrite(pino_ativo, LOW);    
  pino_ativo++;
  if (pino_ativo == PINO_RUIM) 
     pino_ativo++;
  if (pino_ativo > ULT_PINO) {
    pino_ativo = PRIM_PINO;  
    delay(DELAY);                  
  }
}
