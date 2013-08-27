int const FIRST_LED = 5;
int const LAST_LED = 11;
int const SKIP_LED = 8;
int led = FIRST_LED;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  for (int i=FIRST_LED; i<=LAST_LED; i++)
    pinMode(i, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(led, HIGH);
  delay(analogRead(A0)); 
  digitalWrite(led, LOW);
  led++;
  if (led == SKIP_LED)
     led++;
  if (led > LAST_LED)
     led = FIRST_LED;
}
