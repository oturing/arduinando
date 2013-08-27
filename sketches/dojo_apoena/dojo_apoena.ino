int led = 6;
int led1 = 7;
int led2 = 8;
int led4 = 10;
int led5 = 11;
int led6 = 12;


void setup() {                
  pinMode(led, OUTPUT);
  pinMode(led1, OUTPUT); 
  pinMode(led2, OUTPUT);
  pinMode(led4, OUTPUT); 
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);  
}

void loop() {
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(analogRead(A0));               // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
                // wait for a second
  digitalWrite(led1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(analogRead(A0));               // wait for a second
  digitalWrite(led1, LOW);    // turn the LED off by making the voltage LOW
    digitalWrite(led2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(analogRead(A0));               // wait for a second
  digitalWrite(led2, LOW);    // turn the LED off by making the voltage LOW
      // turn the LED off by making the voltage LOW
 digitalWrite(led4, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(analogRead(A0));               // wait for a second
  digitalWrite(led4, LOW);    // turn the LED off by making the voltage LOW
 digitalWrite(led5, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(analogRead(A0));               // wait for a second
  digitalWrite(led5, LOW);    // turn the LED off by making the voltage LOW
 digitalWrite(led6, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(analogRead(A0));               // wait for a second
  digitalWrite(led6, LOW);    // turn the LED off by making the voltage LOW
     // turn the LED off by making the voltage LOW
}
