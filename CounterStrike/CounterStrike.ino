int delayTime = 1000;
int pitch = 1000;
void setup(){

  //Init pins 2-5, 8 and 10-13 as output pins
  pinMode(2, OUTPUT); //a2
  pinMode(3, OUTPUT); //b2
  pinMode(4, OUTPUT); //c2
  pinMode(5, OUTPUT); //c3

  pinMode(8, OUTPUT); //speaker

  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(10, LOW); digitalWrite(11, LOW); digitalWrite(12, LOW); digitalWrite(13, LOW);
  digitalWrite(2, LOW); digitalWrite(3, LOW); digitalWrite(4, LOW); digitalWrite(5, LOW);
  noTone(8);
  delay(50);

  //10
  digitalWrite(10, HIGH); digitalWrite(11, LOW); digitalWrite(12, LOW); digitalWrite(13, LOW);
  digitalWrite(2, LOW); digitalWrite(3, LOW); digitalWrite(4, LOW); digitalWrite(5, LOW);
  noTone(8);
  tone(8, pitch, 50);
  delay(delayTime);

  //9
  digitalWrite(10, LOW); digitalWrite(11, LOW); digitalWrite(12, LOW);digitalWrite(13, LOW);
  digitalWrite(2, HIGH); digitalWrite(3, LOW); digitalWrite(4, LOW); digitalWrite(5, HIGH);
  tone(8, pitch, 50);
  delay(delayTime);

  //8
  digitalWrite(10, LOW); digitalWrite(11, LOW); digitalWrite(12, LOW);digitalWrite(13, LOW);
  digitalWrite(2, LOW); digitalWrite(3, LOW); digitalWrite(4, LOW); digitalWrite(5, HIGH);
  tone(8, pitch, 50);
  delay(delayTime);

  //7
  digitalWrite(10, LOW); digitalWrite(11, LOW); digitalWrite(12, LOW);digitalWrite(13, LOW);
  digitalWrite(2, HIGH); digitalWrite(3, HIGH); digitalWrite(4, HIGH); digitalWrite(5, HIGH);
  tone(8, pitch, 50);
  delay(delayTime);

  //6
  digitalWrite(10, LOW); digitalWrite(11, LOW); digitalWrite(12, LOW);digitalWrite(13, LOW);
  digitalWrite(2, LOW); digitalWrite(3, HIGH); digitalWrite(4, HIGH); digitalWrite(5, HIGH);
  tone(8, pitch, 50);
  delay(delayTime);

  //5
  digitalWrite(10, LOW); digitalWrite(11, LOW); digitalWrite(12, LOW);digitalWrite(13, LOW);
  digitalWrite(2, HIGH); digitalWrite(3, LOW); digitalWrite(4, HIGH); digitalWrite(5, LOW);
  tone(8, pitch, 50);
  delay(delayTime);

  //4
  digitalWrite(10, LOW); digitalWrite(11, LOW); digitalWrite(12, LOW);digitalWrite(13, LOW);
  digitalWrite(2, LOW); digitalWrite(3, LOW); digitalWrite(4, HIGH); digitalWrite(5, LOW);
  tone(8, pitch, 50);
  delay(delayTime);

  //3
  digitalWrite(10, LOW); digitalWrite(11, LOW); digitalWrite(12, LOW);digitalWrite(13, LOW);
  digitalWrite(2, HIGH); digitalWrite(3, HIGH); digitalWrite(4, LOW); digitalWrite(5, LOW);
  tone(8, pitch, 50);
  delay(delayTime);

  //2
  digitalWrite(10, LOW); digitalWrite(11, LOW); digitalWrite(12, LOW);digitalWrite(13, LOW);
  digitalWrite(2, LOW); digitalWrite(3, HIGH); digitalWrite(4, LOW); digitalWrite(5, LOW);
  tone(8, pitch, 50);
  delay(delayTime);

  //1
  digitalWrite(10, LOW); digitalWrite(11, LOW); digitalWrite(12, LOW);digitalWrite(13, LOW);
  digitalWrite(2, HIGH); digitalWrite(3, LOW); digitalWrite(4, LOW); digitalWrite(5, LOW);
  tone(8, pitch, 50);
  delay(delayTime);

  //0
  digitalWrite(10, LOW); digitalWrite(11, LOW); digitalWrite(12, LOW);digitalWrite(13, LOW);
  digitalWrite(2, LOW); digitalWrite(3, LOW); digitalWrite(4, HIGH); digitalWrite(5, LOW);
  tone(8, pitch, 50);
  delay(delayTime);

  tone(8, 5000, 3000);
  delay(3000);
}

