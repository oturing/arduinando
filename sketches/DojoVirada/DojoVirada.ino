/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */

#define PRIMEIRO 5
#define ULTIMO 11
#define FALTANDO 8

const int POTENCIOMETRO = A0;
int pot = 0; // valor lido do potenciometro

void setup() {                
  // initialize the digital pin as an output.
  // Pin 13 has an LED connected on most Arduino boards:
  
 
  for(int i = PRIMEIRO; i <= ULTIMO; i++)
    pinMode(i, OUTPUT);
    
  Serial.begin(9600);
   
    
}

void loop() {
  for(int i = PRIMEIRO; i <= ULTIMO; i++)
  {
     pot = analogRead(POTENCIOMETRO);
     Serial.println(pot);
     if (i != FALTANDO){
        digitalWrite(i, HIGH);   // set the LED on
        delay(pot);              // wait for a second
        digitalWrite(i, LOW);    // set the LED off
        //delay(pot);              // wait for a second
    }
  }
  
}
