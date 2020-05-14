int estado=0;
void setup()
{
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(A0,INPUT);
}

void loop()
{
  estado=analogRead(A0)*50;
  if(estado>1) digitalWrite(2,HIGH); else digitalWrite(2,LOW);
  if(estado>25) digitalWrite(3,HIGH); else digitalWrite(3,LOW);
  if(estado>50) digitalWrite(4,HIGH); else digitalWrite(4,LOW);
  if(estado>100) digitalWrite(5,HIGH); else digitalWrite(5,LOW);
}
