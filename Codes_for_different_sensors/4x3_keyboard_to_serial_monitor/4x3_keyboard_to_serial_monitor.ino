#include <Keypad.h>



const byte ROWS = 4;
const byte COLS = 3; 
char keys[ROWS][COLS] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}
};

byte rowPins[ROWS] = {13, 12, 11, 10}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {9, 8, 7}; //connect to the column pinouts of the keypad

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );
void setup() {
  // put your setup code here, to run once:
Serial.begin(19200);
}

void loop() {
  // put your main code here, to run repeatedly:
char key = '0';  
key = keypad.getKey();
  
  if (key){
    Serial.println(key);
  }
}
