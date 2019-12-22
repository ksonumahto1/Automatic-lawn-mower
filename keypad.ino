#include <Keypad.h>
const byte ROWS = 4; //four rows
const byte COLS = 4; //four columns
//define the cymbols on the buttons of the keypads
char a;
char hexaKeys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
byte rowPins[ROWS] = {9, 8, 7, 6}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {5, 4, 3, 2}; //connect to the column pinouts of the keypad
 
//initialize an instance of class NewKeypad
Keypad customKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 
int l = 0;
int b = 0;
char customKey;
void setup(){
  Serial.begin(9600); 
}
  
void loop(){
      customKey = customKeypad.getKey();
      if (customKey){
      Serial.println(customKey);
      int m;
      m = customKey - 48;
      Serial.println(m);
      }
      else {
        int m = 5;
      }
}
