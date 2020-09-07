void setup()

{

 // initialize digital pin 0 as an output.

pinMode(1, OUTPUT);
pinMode(2, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
pinMode(13, OUTPUT);}

// the loop function runs over and over again forever

void loop()

{
  digitalWrite(13,1);
digitalWrite(4, 1);
delay(50);   // turn the LED on (HIGH is the voltage level)
digitalWrite(2, 1); 
digitalWrite(5, 1);
delay(50);
digitalWrite(1, 0); 
digitalWrite(6, 1);  
digitalWrite(9, 1);
delay(50);
digitalWrite(7 ,1);
digitalWrite(10,0); 

 delay (750);

digitalWrite(4, 0);
digitalWrite(2, 0); 
digitalWrite(5, 0);
digitalWrite(1, 0);
digitalWrite(6, 0);  
digitalWrite(9, 0);
digitalWrite(7 ,0);
delay(100);

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
digitalWrite(1, 0);   // turn the LED on (HIGH is the voltage level)
digitalWrite(2,0);
digitalWrite(4, 0);
digitalWrite(5, 1); 
digitalWrite(6, 0); 
delay (50);
digitalWrite(2, 0); 
digitalWrite(7, 0); 
digitalWrite(9, 1);
digitalWrite(10, 0);   

delay(850);  
digitalWrite(5, 0);  
digitalWrite(9, 0); 
delay(100);

 ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

digitalWrite(4, 1);
delay (50);
digitalWrite(5, 1);
delay (50); 
digitalWrite(1, 1);   // turn the LED on (HIGH is the voltage level)
delay (50);
digitalWrite(6, 1); 
delay (50);
digitalWrite(7, 1); 
digitalWrite(2, 0); 
digitalWrite(9, 0); 
digitalWrite(10, 0);
 delay (700);
 
 
 
digitalWrite(4, 0);
digitalWrite(5, 0);
digitalWrite(1, 0);   // turn the LED on (HIGH is the voltage level)
digitalWrite(6, 0); 
digitalWrite(7, 0);
delay (100);

 ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

digitalWrite(4, 1);
delay(50);
digitalWrite(5, 1); 
delay(50);
digitalWrite(1, 1); 
delay(50);          // turn the LED on (HIGH is the voltage level)
digitalWrite(9, 1);
delay(50); 
digitalWrite(7, 1); 
digitalWrite(2, 0); 
digitalWrite(6, 0); 
digitalWrite(10, 0);
 
 delay (700);

digitalWrite(4, 0);
digitalWrite(5, 0); 
digitalWrite(1, 0);   // turn the LED on (HIGH is the voltage level)
digitalWrite(9, 0);
digitalWrite(7, 0);
delay (100);
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
digitalWrite(2, 1); 
delay(50);
digitalWrite(1, 1);   // turn the LED on (HIGH is the voltage level)
delay (50);
digitalWrite(4, 0);
digitalWrite(5, 1);
delay (50);
digitalWrite(9, 1); 
digitalWrite(6, 0); 
digitalWrite(7, 0); 
digitalWrite(10, 0);
 delay (750);

digitalWrite(2, 0); 
digitalWrite(1, 0);
digitalWrite(5, 0); 
digitalWrite(9, 0);
 delay(100);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 
digitalWrite(4, 1);
delay(50);
digitalWrite(2, 1); 
delay(50);
digitalWrite(1, 1);
delay(50);
digitalWrite(9, 1);
delay(50);               // turn the LED on (HIGH is the voltage level)
digitalWrite(7, 1); 
digitalWrite(5, 0); 
digitalWrite(6, 0); 
digitalWrite(10, 0);
 delay (700);

digitalWrite(4, 0);
digitalWrite(2, 0); 
digitalWrite(1, 0);
digitalWrite(9, 0);               // turn the LED on (HIGH is the voltage level)
digitalWrite(7, 0);

 delay(100);
 ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

digitalWrite(4, 1);
delay(50);
digitalWrite(2, 1); 
delay(50);
digitalWrite(1, 1);   // turn the LED on (HIGH is the voltage level)
digitalWrite(6, 1);
delay(50);
 digitalWrite(7, 1); 
digitalWrite(9, 1);
digitalWrite(5, 0);  
digitalWrite(10, 0);
 delay (750);

 
digitalWrite(4, 0);
digitalWrite(2, 0); 
digitalWrite(1, 0);   // turn the LED on (HIGH is the voltage level)
digitalWrite(6, 0);
 digitalWrite(7, 0); 
digitalWrite(9, 0);
delay(100);
 /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

 digitalWrite(1, 0);   // turn the LED on (HIGH is the voltage level)
digitalWrite(2, 0); 
digitalWrite(4, 1);
delay(50);
digitalWrite(5, 1); 
digitalWrite(6, 0); 
digitalWrite(7, 0);
delay(50); 
digitalWrite(9, 1); 
digitalWrite(10, 0);
 delay (800);

digitalWrite(4, 0);
digitalWrite(5, 0);  
digitalWrite(9, 0);
delay(100);
 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

digitalWrite(4, 1);
delay(50);
digitalWrite(2, 1); 
digitalWrite(5, 1); 
delay(50);
digitalWrite(1, 1);   // turn the LED on (HIGH is the voltage level)
delay(50);
digitalWrite(6, 1); 
digitalWrite(9, 1);
delay(50);
digitalWrite(7, 1); 
digitalWrite(10, 0);
delay (700);

digitalWrite(4, 0);
digitalWrite(2, 0); 
digitalWrite(5, 0); 
digitalWrite(1, 0);
digitalWrite(6, 0); 
digitalWrite(9, 0);
digitalWrite(7, 0);
delay(100); 
 //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

digitalWrite(4, 1);
delay(50);
digitalWrite(2, 1); 
digitalWrite(5, 1); 
delay(50);
digitalWrite(1, 1);   // turn the LED on (HIGH is the voltage level)
delay(50); 
digitalWrite(9, 1);
delay(50);
digitalWrite(6, 0); 
digitalWrite(7, 1);
digitalWrite(10, 0);
delay (700);

digitalWrite(4, 0);
digitalWrite(2, 0); 
digitalWrite(5, 0); 
digitalWrite(1, 0);
digitalWrite(9, 0);
digitalWrite(7, 0);
delay(100);
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

} 
