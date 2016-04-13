int delayTime = 1000;
int pitch = 1500;
int readPin = 1;
bool lastMin = false;

void setup() {
  //Initialize pins 1 - 5, pin 8 and pins 10 - 13 on board 2
  pinMode(1, INPUT);

  //Number 4
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);

  //Number 3
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  if(readPin == HIGH){
    lastMin = true;
    if(lastMin == true){
      //59
      digitalWrite(10, HIGH); digitalWrite(11, LOW); digitalWrite(12, HIGH); digitalWrite(13, LOW);
      digitalWrite(2, HIGH); digitalWrite(3, LOW); digitalWrite(4, LOW); digitalWrite(5,HIGH);
      noTone(8);
      tone(8, pitch, 50);
  
      //58
      digitalWrite(10, HIGH); digitalWrite(11, LOW); digitalWrite(12, HIGH); digitalWrite(13, LOW);
      digitalWrite(2, LOW); digitalWrite(3, LOW); digitalWrite(4, LOW); digitalWrite(5,HIGH);
      noTone(8);
      tone(8, pitch, 50);
  
      //57
      digitalWrite(10, HIGH); digitalWrite(11, LOW); digitalWrite(12, HIGH); digitalWrite(13, LOW);
      digitalWrite(2, HIGH); digitalWrite(3, HIGH); digitalWrite(4, HIGH); digitalWrite(5,LOW);
      noTone(8);
      tone(8, pitch, 50);
  
      //56
      digitalWrite(10, HIGH); digitalWrite(11, LOW); digitalWrite(12, HIGH); digitalWrite(13, LOW);
      digitalWrite(2, HIGH); digitalWrite(3, LOW); digitalWrite(4, LOW); digitalWrite(5,HIGH);
      noTone(8);
      tone(8, pitch, 50);
  
      //54
      digitalWrite(10, HIGH); digitalWrite(11, LOW); digitalWrite(12, HIGH); digitalWrite(13, LOW);
      digitalWrite(2, HIGH); digitalWrite(3, LOW); digitalWrite(4, LOW); digitalWrite(5,HIGH);
      noTone(8);
      tone(8, pitch, 50);
  
      //53
      digitalWrite(10, HIGH); digitalWrite(11, LOW); digitalWrite(12, HIGH); digitalWrite(13, LOW);
      digitalWrite(2, HIGH); digitalWrite(3, LOW); digitalWrite(4, LOW); digitalWrite(5,HIGH);
      noTone(8);
      tone(8, pitch, 50);
  
      //52
      digitalWrite(10, HIGH); digitalWrite(11, LOW); digitalWrite(12, HIGH); digitalWrite(13, LOW);
      digitalWrite(2, HIGH); digitalWrite(3, LOW); digitalWrite(4, LOW); digitalWrite(5,HIGH);
      noTone(8);
      tone(8, pitch, 50);
  
      //51
      digitalWrite(10, HIGH); digitalWrite(11, LOW); digitalWrite(12, HIGH); digitalWrite(13, LOW);
      digitalWrite(2, HIGH); digitalWrite(3, LOW); digitalWrite(4, LOW); digitalWrite(5,HIGH);
      noTone(8);
      tone(8, pitch, 50);
  
      //50
      digitalWrite(10, HIGH); digitalWrite(11, LOW); digitalWrite(12, HIGH); digitalWrite(13, LOW);
      digitalWrite(2, HIGH); digitalWrite(3, LOW); digitalWrite(4, LOW); digitalWrite(5,HIGH);
      noTone(8);
      tone(8, pitch, 50);
  
    }
  }
}

