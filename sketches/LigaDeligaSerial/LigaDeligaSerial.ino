int led = 13;

void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  char c = Serial.read();
  if (c == 'H') {
    digitalWrite(led, HIGH);
  }
  else if (c == 'L'){
    digitalWrite(led, LOW);
  }
  else if (c == 'R'){
    Serial.println(analogRead(A5));
  }
}
