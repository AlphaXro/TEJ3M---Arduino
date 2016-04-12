int delayTime = 30;


void setup() {
  // declaring pins
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);     
}

void loop() {
  // Does the Cool Runnings animation with 5 LEDs
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
  digitalWrite(6,HIGH);
  delay(delayTime);
  digitalWrite(6,LOW);
  digitalWrite(5,HIGH);
  delay(delayTime);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  delay(delayTime);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  delay(delayTime);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  delay(delayTime);
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
  delay(delayTime);
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
  delay(delayTime);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
  delay(delayTime);
  digitalWrite(11,LOW);
  digitalWrite(12,HIGH);
  delay(delayTime);
  digitalWrite(12,LOW);

  Serial.println("Dank Meme");
}
