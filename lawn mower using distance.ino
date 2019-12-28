// motor one
int enA = 7;
int in1 = 6;
int in2 = 5;
// motor two
int enB = 11;
int in3 = 10;
int in4 = 9;
int l = 1000;
int b = 800;
int x = 0;
int d;
int mystr;
int a;
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
 int sk(){
  delay(50);
  while (!Serial.available()){}
  byte b1 = Serial.read(); //Read the serial data and store in var
  while (!Serial.available()){}
  byte b2 = Serial.read();
  d = b2 + b1*256;
  if (d > 0){
    return(d);
  }
    else {
      sk();
    }
} 
void loop() {
  a = b;
  while((sk() >= x) && (sk() < a)){
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    analogWrite(enA, 200);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
    analogWrite(enB, 200);
    Serial.println(sk());
  }
  x = b;
  a += 15;
  while((sk() >= x) && (sk() < a)){
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    analogWrite(enA, 200);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
    analogWrite(enB, 200);
    Serial.println(sk()); 
  }
  x += 15;
  a += l;
  while((sk() >= x) && (sk() < a)){
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    analogWrite(enA, 200);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
    analogWrite(enB, 200);
    Serial.println(sk());
  }
  x += l;
  a += 15;
  while((sk() >= x) && (sk() < a)){
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    analogWrite(enA, 200);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
    analogWrite(enB, 200);
    Serial.println(sk());
  }
  l -= 5;
  x += 15;
  a += b;
  while((sk() >= x) && (sk() < a)){
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    analogWrite(enA, 200);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
    analogWrite(enB, 200);
    Serial.println(sk());
  }
  x += b;
  a += 15;
  while((sk() >= x) && (sk() < a)){
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    analogWrite(enA, 200);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
    analogWrite(enB, 200);
    Serial.println(sk());
  }
  b -= 5;
  x += 15;
  a += l;
 while ((l >= 15) && (b >= 15)){
  while((sk() >= x) && (sk() < a)){
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    analogWrite(enA, 200);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
    analogWrite(enB, 200);
    Serial.println(sk());
  }
  x += l;
  a += 15;
   while((sk() >= x) && (sk() < a)){
      digitalWrite(in1, LOW);
      digitalWrite(in2, LOW);
      analogWrite(enA, 200);
      digitalWrite(in3, HIGH);
      digitalWrite(in4, LOW);
      analogWrite(enB, 200);
      Serial.println(sk());
    }
    l -= 5;
    a += b;
    x += 15; 
    while((sk() >= x) && (sk() < a)){
      digitalWrite(in1, HIGH);
      digitalWrite(in2, LOW);
      analogWrite(enA, 200);
      digitalWrite(in3, HIGH);
      digitalWrite(in4, LOW);
      analogWrite(enB, 200);
      Serial.println(sk());
    }
    x += b;
    a += 15;
    while((sk() >= x) && (sk() < a)){
      digitalWrite(in1, LOW);
      digitalWrite(in2, LOW);
      analogWrite(enA, 200);
      digitalWrite(in3, HIGH);
      digitalWrite(in4, LOW);
      analogWrite(enB, 200);
      Serial.println(sk());
    }
    b -= 5;
    a += l;
    x += 15;
  }
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  analogWrite(enA, 200);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  analogWrite(enB, 200);
}
