/*
- Determinar pinos ligados aos segmentos de led
- Aprender a ler o petenciometro
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  for (led = 6; led < 13 ; led++)
    pinMode(led, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
  int leitura = analogRead(A0);   
  if (led >= 13) led=6;
  if (led != 9)
    {
      digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
      delay(leitura);               // wait for a second
      digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW               // wait for a second
    }
  led++;
}
