void setup() {
  // put your setup code here, to run once:
pinMode(3, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly://///////////////////////////////
for (int i=0;i<=230; i=i+1)
{
  analogWrite(3, i);
  delay (5);
}
for (int i=230; i>=0;i=i-1)
{
  analogWrite(3, i);
  delay (8);
} 
delay(400);
/////////////////////////////////////////////////////////////////////////////////
for (int i=0;i<=230; i=i+1)
{
  analogWrite(5, i);
  delay (5);
}
for (int i=230; i>=0;i=i-1)
{
  analogWrite(5, i);
  delay (8);
}
delay(400); 
/////////////////////////////////////////////////////////////////////////////////
for (int i=0;i<=230; i=i+1)
{
  analogWrite(6, i);
  delay (5);
}
for (int i=230; i>=0;i=i-1)
{
  analogWrite(6, i);
  delay (8);
} 
delay(400);
/////////////////////////////////////////////////////////////////////////////////
for (int i=0;i<=230; i=i+1)
{
  analogWrite(9, i);
  delay (5);
}
for (int i=230; i>=0;i=i-1)
{
  analogWrite(9, i);
  delay (8);
} 
delay(400);
/////////////////////////////////////////////////////////////////////////////////
for (int i=0;i<=230; i=i+1)
{
  analogWrite(10, i);
  delay (5);
}
for (int i=230; i>=0;i=i-1)
{
  analogWrite(10, i);
  delay (8);
} 
delay(400);
/////////////////////////////////////////////////////////////////////////////////
for (int i=0;i<=230; i=i+1)
{
  analogWrite(11, i);
  delay (5);
}
for (int i=230; i>=0;i=i-1)
{
  analogWrite(11, i);
  delay (8);
}
delay(400); 
/////////////////////////////////////////////////////////////////////////////////
}
