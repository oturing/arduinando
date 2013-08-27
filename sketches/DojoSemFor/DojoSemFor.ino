/*
Solucao do Dojo com Arduino, problema Display 7 Segmentos, sem usar um
laço for na funçao loop.
*/
 
int pinos[] = {7, 8, 9, 11, 12, 13};
const int NUM_LEDS = 6;
int led_aceso = 0;

void setup() {                
  for (int i = 0; i < NUM_LEDS; ++i)
    pinMode(pinos[i], OUTPUT);    
}

void loop() {
  digitalWrite(pinos[led_aceso], HIGH);
  delay(analogRead(A0));
  digitalWrite(pinos[led_aceso], LOW);
  led_aceso++;
  if (led_aceso == NUM_LEDS) 
    led_aceso = 0;
}

