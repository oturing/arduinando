/*
Solucao do Dojo com Arduino, problema Display 7 Segmentos, sem usar um
laço for na funçao loop.
*/
 
const int pinos[] = {7, 8, 9, 11, 12, 13};
const int NUM_LEDS = 6;
const int BOTAO = 4;
int led_aceso = 0;

void setup() {                
  for (int i = 0; i < NUM_LEDS; ++i)
    pinMode(pinos[i], OUTPUT);    
  pinMode(BOTAO, INPUT);
  Serial.begin(9600);  
}

void loop() {
  digitalWrite(pinos[led_aceso], HIGH);
  delay(analogRead(20));
  digitalWrite(pinos[led_aceso], LOW);
  int estado = digitalRead(BOTAO);
  Serial.println(estado);
  if (!estado)
    led_aceso++;
  if (led_aceso >= NUM_LEDS) 
    led_aceso = 0;
}

