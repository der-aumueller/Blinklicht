int led1 = 12; //Led als led1 an Pin 12
void setup() {
  pinMode(led1,OUTPUT); //Definiere Pin 12 (LED 1) als output
  }

void loop() {
  digitalWrite(led1,HIGH); //setze LED 1 auf high
  delay(1000); //warte 1000ms (1 sek)
  digitalWrite(led1,LOW); //setze LED 1 auf low
  delay(1000); //warte 1000ms (1sek)
  }
