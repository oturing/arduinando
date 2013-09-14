/*
This is a block comment
 - Fazer piscar o segmento ligado ao pino 13
 - Fazer piscar o segmento ligado ao pino 12
 - Fazer piscar o segmento ligado ao pino 11
 - Fazer piscar o segmento ligado ao pino 10
 - Fazer piscar o segmento ligado ao pino 09
 - Tratar a entrada do potenciometro 
*/

// Pin 13 has an LED connected on most Arduino boards.
int leds[] = {13, 12, 11, 9, 8, 7};
int led_num = 6;

int botao = 0;

void setup() {                
  // initialize the digital pin as an output.
  for (int i = 0; i < led_num; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < led_num; i++) {
    botao = analogRead(A0);
    digitalWrite(leds[i], HIGH);
    delay(botao);
    digitalWrite(leds[i], LOW);
  }
}
