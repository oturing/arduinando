/*
 */

const int PRIMEIRO = 2;
const int ULTIMO = 2+7;
const int DELAY = 100;

void setup() {                
  for(int i = PRIMEIRO; i <= ULTIMO; i++)
    pinMode(i, OUTPUT);
}

void loop() {
  for(int i = PRIMEIRO; i <= ULTIMO; i++) {
    digitalWrite(i, HIGH);   // set the LED on
    delay(DELAY);              
  }
  for(int i = PRIMEIRO; i <= ULTIMO; i++) {
    digitalWrite(i, LOW);   // set the LED on
    delay(DELAY);              
  }
}
