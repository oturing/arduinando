const int POTENCIOMETRO = A0;
int pot = 0; // valor lido do potenciometro

void setup() {                
  Serial.begin(9600);
}

void loop() {
  pot = analogRead(POTENCIOMETRO);
  Serial.println(pot);
}
