int piezoPin=8;
 
void setup() {
 
}//close setup
 
void loop() {
 
  /*Tone needs 2 arguments, but can take three
    1) Pin#
    2) Frequency - this is in hertz (cycles per second) which determines the pitch of the noise made
    3) Duration - how long teh tone plays
  */
   tone(piezoPin, 293.6, 100);
   delay (800);
   tone(piezoPin, 293.6, 150);
   delay(170);
   tone(piezoPin, 349.2, 1000);
   delay (500);
   tone(piezoPin, 440, 150);
   delay(500);
   tone(piezoPin, 587.2, 100);
   delay (800);
   tone(piezoPin, 587.2, 150);//
   delay(170);
   tone(piezoPin, 523.2, 400);
   delay (500);
   tone(piezoPin, 698.4, 400);
   delay (500);
   tone(piezoPin, 587.2, 300);
   delay (700);
   tone(piezoPin, 587.2, 150);//
   delay(170);
   tone(piezoPin, 523.2, 400);
   delay (500);
   tone(piezoPin, 698.4, 400);
   delay (500);
   tone(piezoPin, 587.2, 300);
   delay (700);
   tone(piezoPin, 587.2, 150);//
   delay(170);
   tone(piezoPin, 523.2, 400);
   delay (500);
   tone(piezoPin, 440, 400);// 8beat end
   delay (500);
   tone(piezoPin, 440, 300);
   delay (700);
   tone(piezoPin, 440, 150);
   delay(170);
   tone(piezoPin, 392, 400);
   delay (500);
   tone(piezoPin, 523.2, 400);
   delay (500);
   tone(piezoPin, 440, 300);
   delay (700);
   tone(piezoPin, 440, 150);
   delay(170);
   tone(piezoPin, 392, 400);
   delay (500);
   tone(piezoPin, 349.2, 400);
   delay (500);
   tone(piezoPin, 329.6, 300);
   delay(3500);
}
