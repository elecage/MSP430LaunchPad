void setup()
{
  // put your setup code here, to run once:
  pinMode(P2_5, OUTPUT);
}

void loop()
{
  // put your main code here, to run repeatedly:
  int i;
  for(i = 1 ; i < 256 ; i++)
  {
    analogWrite(P2_5, i);
    delay(10);
  }
  
  for( ; i > 0 ; i--)
  {
    analogWrite(P2_5, i);
    delay(10);
  }
}
