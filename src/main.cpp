#include <Arduino.h>

int potPin = 36;

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
}

void loop() {

  int potValue = analogRead(potPin); // Read value from Potentiometer
  

  if (potValue <= 500){
    digitalWrite(ledPin0, HIGH);
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin5, LOW);
    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin7, LOW);
  }
  else if (potValue >= 501 && potValue < 1000){
    digitalWrite(ledPin0, HIGH);
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin5, LOW);
    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin7, LOW);
  }
  else if (potValue >= 1001 && potValue < 2000){
    digitalWrite(ledPin0, HIGH);
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4, HIGH);
    digitalWrite(ledPin5, LOW);
    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin7, LOW);
  }
  else if (potValue >= 2001 && potValue < 4095){
    digitalWrite(ledPin0, HIGH);
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4, HIGH);
    digitalWrite(ledPin5, HIGH);
    digitalWrite(ledPin6, HIGH);
    digitalWrite(ledPin7, HIGH);
  }

}