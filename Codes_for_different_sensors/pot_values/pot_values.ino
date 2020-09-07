
int val;
int val2;
int t;
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(19200);
pinMode(2, OUTPUT);
pinMode(4, OUTPUT);
pinMode(3, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
pinMode(12, OUTPUT);
pinMode(13, OUTPUT);
t=0;
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 1:
  val = analogRead(A1);
  // pr9int out the value you read:
  val2=((val/9)+21)/10;
  Serial.println(val2);
  digitalWrite(val2,1);
  
  if (t!=val2)
  {
    digitalWrite(t,0);
     
  }
  t=val2;
  
}
