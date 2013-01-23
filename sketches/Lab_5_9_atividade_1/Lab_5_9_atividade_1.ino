
const int led = 13;
const int botao = 2;

int estadoBotao;

void setup() {                
  pinMode(led, OUTPUT);
  pinMode(botao, INPUT);
}

void loop() {
  luz = analogRead(LDR);
  Serial.print("Luz: ");
  Serial.println(luz);
  delay(500);
}
