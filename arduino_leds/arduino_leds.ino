int verde = 13;
int rojo = 7;
int milisegundos = 300;

void setup() 
{
  pinMode(verde, OUTPUT);
  pinMode(rojo, OUTPUT);
}

void loop() 
{
  digitalWrite(verde, HIGH);
  digitalWrite(rojo, LOW);
  delay(milisegundos);
  digitalWrite(verde, LOW);
  digitalWrite(rojo, HIGH);
  delay(milisegundos*2);
}
