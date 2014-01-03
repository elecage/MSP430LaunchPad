int val1 = 0;
int val2 = 0;
void setup()
{
  // put your setup code here, to run once:
  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(PUSH1, INPUT_PULLUP);
  pinMode(PUSH2, INPUT_PULLUP);
  digitalWrite(RED_LED, LOW);
  digitalWrite(GREEN_LED, LOW);
}

void loop()
{
  // put your main code here, to run repeatedly:
  val1 = digitalRead(PUSH1);
  val2 = digitalRead(PUSH2);
  if(val1 == LOW)
    digitalWrite(RED_LED, HIGH);
  else
    digitalWrite(RED_LED, LOW);
    
  if(val2 == LOW)
    digitalWrite(GREEN_LED, HIGH);
  else
    digitalWrite(GREEN_LED, LOW);
}
