int delayTime = 30;
int randNum;
int displayTime = 2000;

void setup() {  
  // pin declaration
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {
   //generate random number between 0 - 9
  //randNum = random(0, 9);
  randNum = 4;
  
  for(int i = 0; i < 5; i++)
  {
      digitalWrite(13,HIGH);
  delay(delayTime);
  digitalWrite(13,LOW);
  digitalWrite(12,HIGH);
  delay(delayTime);
  digitalWrite(12,LOW);
  digitalWrite(11,HIGH);
  delay(delayTime);
  digitalWrite(11,LOW);
  digitalWrite(10,HIGH);
  delay(delayTime);
  digitalWrite(10,LOW);
  digitalWrite(9,HIGH);
  delay(delayTime);
  digitalWrite(9,LOW);
  digitalWrite(8,HIGH);
  delay(delayTime);
  digitalWrite(8,LOW);
  digitalWrite(7,HIGH);
  delay(delayTime);
  digitalWrite(7,LOW);
  delay(delayTime);
  }

  if (randNum == 0) {
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(7, HIGH);
    delay(displayTime);
  } else if (randNum == 1) {
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    delay(displayTime);
  } else if (randNum == 2) {
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(8, HIGH);
    delay(displayTime);
  } else if (randNum == 3) {
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(8, HIGH);
    delay(displayTime);
  } else if (randNum == 4) {
    digitalWrite(8, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    delay(displayTime);
  } else if (randNum == 5) {
    digitalWrite(13, HIGH);
    digitalWrite(
  }
  
}

