/*
  Blink
  Pisca segmentos do perimetro de um visor de 7 segmentos em sequencia,
  com a velocidade ajustada por um potenciometro.
  
 */

const int PRIM_PINO = 6;
const int ULT_PINO = 12; // nao acender ponto decimal
const int PULAR_PINO = 9; // nao acender segmento central
const int POTENCIOMETRO = A0;
int pino_ativo = PRIM_PINO;
int pot = 0; // valor lido do potenciometro

void setup() {                
  // inicializar pinos digitais de saida
  for (int pino=PRIM_PINO; pino<=ULT_PINO; pino++) {
    pinMode(pino, OUTPUT);     
  }
}

void loop() {
  pot = analogRead(POTENCIOMETRO);
  digitalWrite(pino_ativo, HIGH);   
  delay(pot);              
  digitalWrite(pino_ativo, LOW);  
  pino_ativo++;
  if (pino_ativo == PULAR_PINO) pino_ativo++;
  if (pino_ativo > (ULT_PINO)) { 
    pino_ativo = PRIM_PINO;  
  }
}
