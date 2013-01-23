
#define LDR 5

byte luz;

void setup() {                
  Serial.begin(9600);     
}

void loop() {
  luz = analogRead(LDR);
  Serial.print("Luz: ");
  Serial.println(luz);
  delay(500);
}
