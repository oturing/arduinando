/*
Dojo com Arduino no Garoa Pinheiros

- Alterar a frequencia da piscada para verificar conexao USB
- Acender outros segmentos
- Acender em sequencia
- Refatorar

*/
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:

#define LED_MIN 6
#define LED_MAX 13

/*

09
  07
08  06
  13
10  12
  11
*/

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  int led;
  for (led = LED_MIN ; led < LED_MAX ; led++ ) {
    pinMode(led, OUTPUT);
  }     
}

// the loop routine runs over and over again forever:
void loop() {
  
  int led;
  for (led = LED_MIN ; led < LED_MAX ; led++ ) {
    if (led == 9) { continue; }
    
    acendeApaga(led, analogRead(A0));
  }   
  
}

void acendeApaga(int led, int tempo) {
    digitalWrite(led, HIGH);
    delay(tempo);               
    digitalWrite(led, LOW);
}
