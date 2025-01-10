/*
#include <Arduino.h>

const int numLEDs = 8; // จำนวนหลอดไฟ
int leds[numLEDs] = {23, 19, 18, 5, 17, 16, 4, 0};

int potPin1 = 36;
int potPin2 = 39;

int ledPin0 = 23;
int ledPin1 = 19;
int ledPin2 = 18;
int ledPin3 = 5;
int ledPin4 = 17;
int ledPin5 = 16;
int ledPin6 = 4;
int ledPin7 = 0;

void setup() {

  pinMode(ledPin0, OUTPUT); 
  pinMode(ledPin1, OUTPUT); 
  pinMode(ledPin2, OUTPUT); 
  pinMode(ledPin3, OUTPUT); 
  pinMode(ledPin4, OUTPUT); 
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin6, OUTPUT); 
  pinMode(ledPin7, OUTPUT);  

  for (int i = 0; i < numLEDs; i++) {
        pinMode(leds[i], OUTPUT);
    }
}


void loop() {

  int potValue2 = analogRead(potPin2);
  int potValue = analogRead(potPin1); 
    

  if (potValue >= 0 && potValue < 199){
    for (int i = 0; i < numLEDs; i++) {
        digitalWrite(leds[i], HIGH); 
        delay(100);                  
        digitalWrite(leds[i], LOW);  
    }
  }
  
  else if (potValue >= 200 && potValue < 500){
  
    digitalWrite(ledPin4, HIGH);
    digitalWrite(ledPin5, LOW);
    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin7, LOW);
    delay(10);
  }
  
  else if (potValue >= 501 && potValue < 1000){

    digitalWrite(ledPin4, HIGH);
    digitalWrite(ledPin5, HIGH);
    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin7, LOW);
    delay(10);
  }
  else if (potValue >= 1001 && potValue < 2000){
    
    digitalWrite(ledPin4, HIGH);
    digitalWrite(ledPin5, HIGH);
    digitalWrite(ledPin6, HIGH);
    digitalWrite(ledPin7, LOW);
    delay(10);
  }
  else if (potValue >= 2001 && potValue < 4095){
    
    digitalWrite(ledPin4, HIGH);
    digitalWrite(ledPin5, HIGH);
    digitalWrite(ledPin6, HIGH);
    digitalWrite(ledPin7, HIGH);
    delay(10);
  }
  

  else if (potValue2 >= 200 && potValue2 < 500){
    digitalWrite(ledPin0, HIGH);
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
    delay(10);
  }
  else if (potValue2 >= 501 && potValue2 < 1000){
    digitalWrite(ledPin0, HIGH);
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
    delay(10);
  }
  else if (potValue2 >= 1001 && potValue2 < 2000){
    digitalWrite(ledPin0, HIGH);
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, LOW);
    delay(10);
  }
  else if (potValue2 >= 2001 && potValue2 < 4095){
    digitalWrite(ledPin0, HIGH);
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    delay(10);
  }

}
*/