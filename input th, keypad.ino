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
byte rowPins[ROWS] = {36, 34, 32, 30}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {28, 26, 24, 22}; //connect to the column pinouts of the keypad
 
//initialize an instance of class NewKeypad
Keypad customKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 
int l = 0;
int b = 0;
char customKey;
void setup(){
  Serial.begin(9600); 
}
  
void loop(){
  l = GetNumber();
  Serial.print("l = ");
   Serial.println (l);

  b = GetNumber();
  Serial.print("b = ");
  Serial.println(b);
}
int GetNumber()
{
      int m;
      int n = 0;
      while (customKey != '#' ){ 
          customKey = customKeypad.getKey();
          if (customKey){
          //Serial.println(customKey);
          m = customKey - 48;
          if (0<= m < 10){
          n = n*10 + m;
          }
          Serial.println(n);
      }     
}
n = n + 13;
n = n/10;
customKey = n;
return(n);
}
