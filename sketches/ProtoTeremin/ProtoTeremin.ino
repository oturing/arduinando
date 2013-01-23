/*
  AnalogReadSerial
  Reads an analog input on pin 0, prints the result to the serial monitor.
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.
 
 This example code is in the public domain.
 */

int led = 13;

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  //Serial.begin(9600);
  pinMode(led, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A5);
  // print out the value you read:
  int atraso = map(sensorValue, 20, 210, 1, 10);
  //Serial.println(sensorValue);
  //Serial.println(atraso);
  delay(atraso);       
  digitalWrite(led, HIGH);
  delay(atraso);        
  digitalWrite(led, LOW);
}
