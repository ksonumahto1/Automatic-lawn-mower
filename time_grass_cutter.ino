// motor one
int enA = 7;
int in1 = 6;
int in2 = 5;
// motor two
int enB = 11;
int in3 = 10;
int in4 = 9;
int l = 3;
int w = 2;
long int a;
long int b;
long int x;
long int y;
void setup()
{
  // set all the motor control pins to outputs
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  Serial.begin(9600);
}
void loop(){
  a = (l * 100000);
  b = (w * 100000);
  
  y = (b / 26);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  analogWrite(enA, 150);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enB, 120);
  Serial.println("straight");
  Serial.println(y);
  delay(y);
  
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  analogWrite(enA, 150);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enB, 120);
  Serial.println("turning");
  delay(3140);

  x = (a / 26);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  analogWrite(enA, 150);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enB, 120);
  Serial.println("straight");
  Serial.println(x);
  delay(x);
  a -= 52000;

  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  analogWrite(enA, 150);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enB, 120);
  Serial.println("turning");
  delay(3140);

  y = (b / 26);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  analogWrite(enA, 150);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enB, 120);
  Serial.println("straight");
  Serial.println(y);
  delay(y);
  b -= 52000;

  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  analogWrite(enA, 150);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enB, 120);
  Serial.println("turning");
  delay(3140);

  while((a >= 100000) && (b >= 100000)){
    
    x = (a / 26);
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    analogWrite(enA, 150);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
    analogWrite(enB, 120);
    Serial.println("straight");
    Serial.println(x);
    delay(x);
    a -= 52000;

    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    analogWrite(enA, 150);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
    analogWrite(enB, 120);
    Serial.println("turning");
    delay(3140);

    y = (b / 26);
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    analogWrite(enA, 150);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
    analogWrite(enB, 120);
    Serial.println("straight");
    Serial.println(y);
    delay(y);
    b -= 52000;

    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    analogWrite(enA, 150);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
    analogWrite(enB, 120);
    Serial.println("turning");
    delay(3140);
  }
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  analogWrite(enA, 150);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  analogWrite(enB, 120);
  }
