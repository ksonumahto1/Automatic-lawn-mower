#include <Keypad.h>
const byte ROWS = 4; //four rows
const byte COLS = 4; //four columns
//define the cymbols on the buttons of the keypads

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
char customKey;


#include<LiquidCrystal.h>
String words;
LiquidCrystal lcd(12,11,5,4,3,2);


// motor one
int enA = 44;
int in1 = 42;
int in2 = 40;
// motor two
int enB = 41;
int in3 = 45;
int in4 = 43;
int l = 3;
int w = 2;
long int a;
long int b;
long int x;
long int y;

void setup(){
   pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  Serial.begin(9600);

  lcd.begin(20,4);
  lcd.setCursor(0,0);
  lcd.print("Auto Lawn Cutter");
  delay(3000);
  
  
}
  
void loop(){
  l = GetNumber();
  Serial.print("l = ");
  Serial.println (l);

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Auto Lawn Cutter");
  lcd.setCursor(0,2);
  lcd.print("l = ");
  lcd.setCursor(7,2);
  lcd.print(l);


  w = GetNumber();
  Serial.print("w = ");
  Serial.println(w);

  
  lcd.setCursor(0,3);
  lcd.print("w = ");
  lcd.setCursor(7,3);
  lcd.print(w);
  delay(5000);

  a = (l * 100000);
  b = (w * 100000);
  
  y = (b / 26);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Auto Lawn Cutter");
  lcd.setCursor(4,2);
  lcd.print("straight");
  lcd.setCursor(4,3);
  lcd.print(y);
  
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  analogWrite(enA, 250);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enB, 150);
  Serial.println("straight");
  Serial.println(y);
  delay(y);

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Auto Lawn Cutter");
  lcd.setCursor(4,2);
  lcd.print("turning"); 
  
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  analogWrite(enA, 250);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enB, 150);
  Serial.println("turning");
  delay(2140);

  

  x = (a / 26);

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Auto Lawn Cutter");
  lcd.setCursor(4,2);
  lcd.print("straight");
  lcd.setCursor(4,3);
  lcd.print(x); 
  
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  analogWrite(enA, 250);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enB, 150);
  Serial.println("straight");
  Serial.println(x);
  delay(x);
  a -= 52000;

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Auto Lawn Cutter");
  lcd.setCursor(4,2);
  lcd.print("turning"); 
  
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  analogWrite(enA, 250);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enB, 150);
  Serial.println("turning");
  delay(2140);


  y = (b / 26);

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Auto Lawn Cutter");
  lcd.setCursor(4,2);
  lcd.print("straight");
  lcd.setCursor(4,3);
  lcd.print(y); 
  
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  analogWrite(enA, 250);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enB, 150);
  Serial.println("straight");
  Serial.println(y);
  delay(y);
  b -= 52000;


  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Auto Lawn Cutter");
  lcd.setCursor(4,2);
  lcd.print("turning"); 
  
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  analogWrite(enA, 250);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enB, 150);
  Serial.println("turning");
  delay(2140);

 

  while((a >= 100000) && (b >= 100000)){
    
    x = (a / 26);

    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Auto Lawn Cutter");
    lcd.setCursor(4,2);
    lcd.print("straight");
    lcd.setCursor(4,3);
    lcd.print(x); 
  
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    analogWrite(enA, 250);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
    analogWrite(enB, 150);
    Serial.println("straight");
    Serial.println(x);
    delay(x);
    a -= 52000;


    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Auto Lawn Cutter");
    lcd.setCursor(4,2);
    lcd.print("turning"); 
  
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    analogWrite(enA, 250);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
    analogWrite(enB, 150);
    Serial.println("turning");
    delay(2140);

    
    y = (b / 26);

    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Auto Lawn Cutter");
    lcd.setCursor(4,2);
    lcd.print("straight");
    lcd.setCursor(4,3);
    lcd.print(y); 
  
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    analogWrite(enA, 250);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
    analogWrite(enB, 150);
    Serial.println("straight");
    Serial.println(y);
    delay(y);
    b -= 52000;

    
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Auto Lawn Cutter");
    lcd.setCursor(4,2);
    lcd.print("turning"); 
  
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    analogWrite(enA, 250);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
    analogWrite(enB, 150);
    Serial.println("turning");
    delay(2140);

    
  }
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  analogWrite(enA, 250);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  analogWrite(enB, 150);
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
