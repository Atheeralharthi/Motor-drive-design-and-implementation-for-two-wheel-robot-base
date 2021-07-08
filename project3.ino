void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  
}

void loop()
{
  digitalWrite(2,1);
  digitalWrite(4,0);
  digitalWrite(7,1);
  digitalWrite(8,0);

  delay(5000); 
}
