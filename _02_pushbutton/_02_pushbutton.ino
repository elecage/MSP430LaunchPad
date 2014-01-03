int val = 0;
void setup()
{
  // put your setup code here, to run once:
  pinMode(RED_LED, OUTPUT);
  pinMode(PUSH1, INPUT_PULLUP);
}

void loop()
{
  // put your main code here, to run repeatedly:
  val = digitalRead(PUSH1);
  
  if(val == HIGH)
    digitalWrite(RED_LED, HIGH);
  else
    digitalWrite(RED_LED, LOW);
}
