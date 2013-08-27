/*
Dojo display 7 segmentos

 - Descobrir led do pino 13
 - Descobrir led do pino 12
 - Descobrir outros pinos
 - Fazer o led 13 e 12 piscarem alternadamente
 - Fazer o led 11 a 13 piscarem alternadamente
 - Fazer todos os leds piscarem na sequencia
 - descobrir como conectar o led com o potenciometro
 - Atribuir o sensor value para o delay 
 */
 
int led13 = 13;
int led12 = 12;
int led11 = 11;
//int led10 = 10;
int led9 = 9;
int led8 = 8;
int led7 = 7;


void setup() {                
  // initialize the digital pin as an output.
  pinMode(led13, OUTPUT);     
  pinMode(led12, OUTPUT);
  pinMode(led11, OUTPUT);
  //pinMode(led10, OUTPUT); 
  pinMode(led9, OUTPUT); 
  pinMode(led8, OUTPUT); 
  pinMode(led7, OUTPUT); 
 
}


void loop() {
 int sensorValue = analogRead(A0);
  digitalWrite(led13, HIGH); 
  delay(sensorValue); 
  digitalWrite(led13, LOW); 
  sensorValue = analogRead(A0);
  
  digitalWrite(led12, HIGH); 
  delay(sensorValue); 
  digitalWrite(led12, LOW); 
  sensorValue = analogRead(A0);
  
 digitalWrite(led11, HIGH); 
  delay(sensorValue); 
  digitalWrite(led11, LOW); 
  sensorValue = analogRead(A0);
  
  //digitalWrite(led10, HIGH); 
  //delay(1000); 
  //digitalWrite(led10, LOW);
  
  digitalWrite(led9, HIGH); 
  delay(sensorValue);
  digitalWrite(led9, LOW);
  sensorValue = analogRead(A0);
  
  digitalWrite(led8, HIGH); 
  delay(sensorValue);
  digitalWrite(led8, LOW);
  sensorValue = analogRead(A0);
  
  digitalWrite(led7, HIGH); 
  delay(sensorValue);
  digitalWrite(led7, LOW);
 sensorValue = analogRead(A0); 
  
  
 
  
              
}
