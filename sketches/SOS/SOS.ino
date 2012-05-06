/*
  Blink an S-O-S sign
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
int car = 0;   // 0=S, 1=O, 2=S
int parte = 0; // tracos e pontos
int DELAY = 100;

void setup() {                
  // initialize the digital pin as an output.
  // Pin 13 has an LED connected on most Arduino boards:
  pinMode(13, OUTPUT);     
}

void dot() {
  digitalWrite(13, HIGH);   // set the LED on
  delay(DELAY);             // wait
  digitalWrite(13, LOW);    // set the LED off
  delay(DELAY);             // wait  
}

void dash() {
  digitalWrite(13, HIGH);   // set the LED on
  delay(DELAY*3);           // wait
  digitalWrite(13, LOW);    // set the LED off
  delay(DELAY);             // wait  
}

void loop() {
  dot();
  dot();
  dot();
  delay(DELAY*3);           // wait
  dash();
  dash();
  dash();
  delay(DELAY*3);           // wait
  dot();
  dot();
  dot();
  delay(DELAY*9);           // wait
}
