/*

* Fazer piscar o LED ligado ao pino 13
* Controlar a velocidade do LED pelo potenciometro
* Acender um dos led que nao seja o de dentro
* Descobrir quais sao os n'umeros correspondentes aos outros leds
* Alternar entre um led e outro
* Alterna ente 3 leds
* Criar contadores em array para manter as luzes em ordem.

 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int arrayLed[6] = {6, 7, 8, 10, 11, 12};
int cont;
// the setup routine runs once when you press reset:
void setup() {
  for(cont=0;cont<6;cont++){
  // initialize the digital pin as an output.
    pinMode(arrayLed[cont], OUTPUT);
  }
}

// the loop routine runs over and over again forever:
void loop() {
  for(cont=0;cont<6;cont++){
    int tempo = analogRead(A0);
    digitalWrite(arrayLed[cont], HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(tempo);               // wait for a secon
    digitalWrite(arrayLed[cont], LOW);
  }
}
