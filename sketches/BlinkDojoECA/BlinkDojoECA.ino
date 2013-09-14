/*

- identificar o led ligado ao pino 12
- identificar o led ligado ao pino 11
- identificar o led ligado ao pino 10
-    " 9

 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int leds[] = {9, 8, 7, 12, 11, 10};

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  for (int i = 0; i < 6; i++)
      pinMode(leds[i], OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  for (int i = 0; i < 6; i++) {  
    digitalWrite(leds[i], HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(analogRead (A0));               // wait for a second
    digitalWrite(leds[i], LOW);    // turn the LED off by making the voltage LOW
  }
}
