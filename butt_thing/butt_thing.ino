// Declaring push button constants
const int buttonPin1 = 3;
const int buttonPin2 = 2; 

// Declaring button states and the current pin
int currentPin = 11;

int buttonState1 = 0;
int buttonState2 = 0;

void setup() {
   //Initialize pushbutton pins as inputs
   pinMode(buttonPin1, INPUT);
   pinMode(buttonPin2, INPUT);

   //Initialize LED Pins as outputs
   pinMode(13, OUTPUT);
   pinMode(12, OUTPUT);
   pinMode(11, OUTPUT);
   pinMode(10, OUTPUT);
   pinMode(9, OUTPUT);

   digitalWrite(13, LOW);
   digitalWrite(12, LOW);
   digitalWrite(11, HIGH);
   digitalWrite(10, LOW);
   digitalWrite(9, LOW);
}

void loop() {
  //Read state of pushbutton value
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);

  //When button one is pressed, the LEDs move to the right
  if(buttonState2 == HIGH) {
    if(currentPin <= 13 && currentPin > 9) {
      digitalWrite(currentPin, LOW);
      currentPin = currentPin - 1;
      delay(250);
      digitalWrite(currentPin, HIGH);
    }
    
    else if(currentPin == 9) {
      digitalWrite(currentPin, LOW);
      digitalWrite(currentPin, HIGH);
      delay(250);
    }
  }

  //When button two is pressed, the LEDs move to the left
  if(buttonState1 == HIGH) {
    if(currentPin < 13 && currentPin >=9) {
      digitalWrite(currentPin, LOW);
      currentPin = currentPin + 1;
      delay(250);
      digitalWrite(currentPin, HIGH);
    }

    else if(currentPin == 13) {
      digitalWrite(currentPin, HIGH);
      delay(250);
    }
  }
}

