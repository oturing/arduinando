/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
   
- fazer o led do pino 13 piscar
- identificar qual led corresponde aos numeros
- ciar laco para animar o display
- descobrir AS entradsas do potenciometro
- usar o valor fornecido pela porta analogica
- 
int sensorValue = analogRead(A0);

  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 6;
int sensorValue = analogRead(A0);

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
  
  while(led <= 13)
  {sensorValue = analogRead(A0);
   
    if(led !=13 && led != 9)
    {
        digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
        delay(sensorValue);               // wait for a second
        digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  //delay(200);
     }
    led++;
  }
  led = 6;
  // wait for a second
}
