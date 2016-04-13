/*
 * Copyright 2016 Chi Ho Belnavis 
 * 
 * Permission is hearby granted, free of charge, to any person
 * obtaining a copy of this software and associated 
 * documentation files (the "Software"), to deal in the Software
 * without restriction, including the rights to use, copy, modify,
 * merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to who the Software is
 * furnished to do so, subject to the following conditions.
 * 
 * The above copyright notics and this permission notice shall
 * be included in all copies or substantial portions of the
 * Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF THE CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 * 
 * 
 * In other words, this means if you paid for this, you were ripped off.
 * If you'd like to use this software, you are welcome to do so as long
 * as I'm given the proper credit. I'm also not responsible for anything 
 * you do with this software nor am I responsible for anything that happens
 * including but not limited to natural disasters, economic downfall, war,
 * strike, riots and acts of God. Use this responsibly
 * 
 * 
 * This file is for use with COMMON ANODE 7 segment displays
 */

//Setup variables

int det = 50; //Set delay time variable
int dit = 3000; //Set display time variable
int randNum; //Random number integer for display

void setup()
{
  pinMode(10, OUTPUT); //A
  pinMode(11, OUTPUT); //B
  pinMode(12, OUTPUT); //C
  pinMode(13, OUTPUT); //D

  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  randNum = random(0, 9);
  for(int i = 0; i < 15; i++)
  {
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    //0
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
    delay(det);

    //1
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
    delay(det);

    //2
    digitalWrite(10, LOW);
    digitalWrite(11, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
    delay(det);

    //3
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
    delay(det);

    //4
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
    delay(det);

    //5
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
    delay(det);

    //6
    digitalWrite(10, LOW);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
    delay(det);

    //7
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
    delay(det);

    //8
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, HIGH);
    delay(det);

    //9
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, HIGH);
    delay(det);
  }

  if (randNum == 0) {
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);

    digitalWrite(3, HIGH);
    digitalWrite(2, LOW);
    delay(dit);
  } else if (randNum == 1) {
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
    
    digitalWrite(3, HIGH);
    digitalWrite(2, LOW);
    delay(dit);
  } else if (randNum == 2) {
    digitalWrite(10, LOW);
    digitalWrite(11, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
    
    digitalWrite(3, HIGH);
    digitalWrite(2, LOW);
    delay(dit);
  } else if (randNum == 3) {
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
    
    digitalWrite(3, HIGH);
    digitalWrite(2, LOW);
    delay(dit);
  } else if (randNum == 4) {
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
    
    digitalWrite(3, HIGH);
    digitalWrite(2, LOW);
    delay(dit);
  } else if (randNum == 5) {
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
    
    digitalWrite(3, HIGH);
    digitalWrite(2, LOW);
    delay(dit);
  } else if (randNum == 6) {
    digitalWrite(10, LOW);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
    
    digitalWrite(3, HIGH);
    digitalWrite(2, LOW);
    delay(dit);
  } else if (randNum == 7) {
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
    
    digitalWrite(3, HIGH);
    digitalWrite(2, LOW);
    delay(dit);
  } else if (randNum == 8) {
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, HIGH);
    
    digitalWrite(3, HIGH);
    digitalWrite(2, LOW);
    delay(dit);
  } else if (randNum == 9) {   
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, HIGH);
    
    digitalWrite(3, HIGH);
    digitalWrite(2, LOW);
    delay(dit);
  }
}

