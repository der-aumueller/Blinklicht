int led1 = 12; //Variable led1 Pin 12 
int led2 = 13; //Variable led2 Pin 13 
void setup() {
  pinMode(led1,OUTPUT); //Definiere Pin 12 als output
  pinMode(led2,OUTPUT); //Definiere Pin 13 als output 
					  	
}

void loop() {
  digitalWrite(led1,HIGH); //setze LED 1 auf high
  digitalWrite(led2,LOW);  //setze LED 2 gleichzeitig auf low 
  delay(1000); //warte 1000ms (1 sek)
  digitalWrite(led1,LOW); //setze LED 1 auf low
  digitalWrite(led2,HIGH); //setze LED 2 gleichzeitig auf high
  delay(1000); //warte 1000ms (1sek)
