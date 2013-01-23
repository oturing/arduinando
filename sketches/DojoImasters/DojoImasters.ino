/*

- Fazer o led ligado ao pino 13 piscar
- Fazer um segmento ligar
- Descobrir qual a saida do pino 6
- Descobrir qual a saida do pino 7
- Descobrir qual a saida do pino 8
- Descobrir qual a saida do pino 9
- Descobrir qual a saida do pino 10
- Descobrir qual a saida do pino 11
- Dar saida em dois segmentos na sequencia
- Dar saida em tres segmentos na sequencia
- Dar saida em quatro segmentos na sequencia
- Dar saida em cinco segmentos na sequencia
- Retirar o delay final
- Dar saida em seis segmentos na sequencia
- Parametrizar o intervalo de troca de segmento
- Ler o valor do potenciometro
- Deixar a animacao responsivo
- Refatoracao para eliminar a repeticao

 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:

int leds[] = {11,5,6,7,9,10};
int length = 6;

// the setup routine runs once when you press reset:
void setup() {  
  // initialize the digital pin as an output.
  for(int i = 0; i < length; i++){
      pinMode(leds[i], OUTPUT);
  }
  
}

void led(int pino) {
  digitalWrite(leds[pino], HIGH);    // turn the LED off by making the voltage LOW
  delay(analogRead(A0));               // wait for a second
  digitalWrite(leds[pino], LOW);
}

// the loop routine runs over and over again forever:
void loop() {
  for(int i = 0; i < length; i++){
    led(i);
  }
}
