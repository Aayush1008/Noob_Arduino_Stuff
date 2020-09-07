

void setup() {
  Serial.begin(9600);
  pinMode(10, OUTPUT);
}

/*void loop() {             
    for(int i=400; i>130; i=i-10) 
    {
      
      digitalWrite(10, LOW);
      delay (i);
      digitalWrite(10, HIGH);
      delay(i); 
                 
}
for(int i=130; i<400; i=i+10) 
    {
      
      digitalWrite(10, LOW);
      delay (i);
      digitalWrite(10, HIGH);
      delay(i);            
}
}
*/
void loop() {             
    for(int i=0; i<5; i=i+1) 
    {
      
      digitalWrite(10, HIGH);
      delay (500);
      digitalWrite(10, LOW);
      delay(300);            
}
//delay(300);
}
