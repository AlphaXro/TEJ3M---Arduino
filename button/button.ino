/*
  Button

 Turns on and off a light emitting diode(LED) connected to digital
 pin 13, when pressing a pushbutton attached to pin 2.


 The circuit:
 * LED attached from pin 13 to ground
 * pushbutton attached to pin 2 from +5V
 * 10K resistor attached to pin 2 from ground

 * Note: on most Arduinos there is already an LED on the board
 attached to pin 13.


 created 2005
 by DojoDave <http://www.0j0.org>
 modified 30 Aug 2011
 by Tom Igoe

 This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/Button
 */

// constants won't change. They're used here to
// set pin numbers:
const int buttonPin1 = 2;     // the number of the pushbutton pins
const int buttonPin2 = 3;

// variables will change:
int buttonState1 = 0;         // variable for reading the pushbutton status
int buttonState2 = 0;
int ledPin = 13; 
int offPin = 13;

void setup() {

          
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);

   pinMode(13, OUTPUT);
   pinMode(12, OUTPUT);
   pinMode(11, OUTPUT);
   pinMode(10, OUTPUT);
   pinMode(9, OUTPUT);

}

void loop() {
  // read the state of the pushbutton value:
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);

  
  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState1 == HIGH) {
    // Goes one LED to the right
    ledPin = ledPin - 1;
    offPin = ledPin + 1;
    if (ledPin < 9) {
    ledPin = 9;
    offPin = 10;
    digitalWrite(offPin, LOW);
    digitalWrite(ledPin, HIGH);
    delay(1000);
    }
    digitalWrite(offPin, LOW);  
    digitalWrite(ledPin, HIGH);
    delay(1000);
  } else if (buttonState2 == HIGH) {
    // Goes one LED to the left
    ledPin = ledPin + 1;
    offPin = ledPin - 1;
    if (ledPin > 13) {
      ledPin = 13;
      offPin = 12;
      digitalWrite(offPin, LOW);
      digitalWrite(ledPin, HIGH);
      delay(1000);
    }
    digitalWrite(offPin, LOW); 
    digitalWrite(ledPin, HIGH);
    delay(1000);
    }
}     
  
