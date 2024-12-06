#include <Arduino.h>

int buttonPin1 = 15;
int LedPin[] = {23,19,18,16,4,0};

void setup() {

pinMode(buttonPin1,INPUT_PULLDOWN);
for (int i = 0; i < 10; i++) {
    pinMode(LedPin[i], OUTPUT); 
}
}
int a = 0;
void loop() {
while (a == 0)
{
  digitalWrite(23,HIGH),digitalWrite(19,LOW),digitalWrite(18,LOW),digitalWrite(16,LOW),digitalWrite(4,LOW),digitalWrite(0,HIGH);
  delay(5000);
  digitalWrite(23,HIGH),digitalWrite(19,LOW),digitalWrite(18,LOW),digitalWrite(16,LOW),digitalWrite(4,HIGH),digitalWrite(0,LOW);
  delay(3000);
  digitalWrite(23,LOW),digitalWrite(19,LOW),digitalWrite(18,HIGH),digitalWrite(16,HIGH),digitalWrite(4,LOW),digitalWrite(0,LOW);
  delay(5000);
  digitalWrite(23,LOW),digitalWrite(19,HIGH),digitalWrite(18,LOW),digitalWrite(16,HIGH),digitalWrite(4,LOW),digitalWrite(0,LOW);
  delay(3000);
  while(digitalRead(buttonPin1)== HIGH ) a = 1;
}

while (a == 1)
{
  digitalWrite(23,HIGH),digitalWrite(19,LOW),digitalWrite(18,LOW),digitalWrite(16,LOW),digitalWrite(4,LOW),digitalWrite(0,HIGH);
  delay(1000);
  digitalWrite(23,LOW),digitalWrite(19,LOW),digitalWrite(18,LOW),digitalWrite(16,LOW),digitalWrite(4,LOW),digitalWrite(0,LOW);
  delay(1000);
  digitalWrite(23,HIGH),digitalWrite(19,LOW),digitalWrite(18,LOW),digitalWrite(16,LOW),digitalWrite(4,LOW),digitalWrite(0,HIGH);
  delay(1000);
  digitalWrite(23,LOW),digitalWrite(19,LOW),digitalWrite(18,LOW),digitalWrite(16,LOW),digitalWrite(4,LOW),digitalWrite(0,LOW);
  delay(1000);
  digitalWrite(23,HIGH),digitalWrite(19,LOW),digitalWrite(18,LOW),digitalWrite(16,LOW),digitalWrite(4,LOW),digitalWrite(0,HIGH);
  delay(1000);

  digitalWrite(23,HIGH),digitalWrite(19,LOW),digitalWrite(18,LOW),digitalWrite(16,LOW),digitalWrite(4,HIGH),digitalWrite(0,LOW);
  delay(1000);
  digitalWrite(23,LOW),digitalWrite(19,LOW),digitalWrite(18,LOW),digitalWrite(16,LOW),digitalWrite(4,LOW),digitalWrite(0,LOW);
  delay(1000);
  digitalWrite(23,HIGH),digitalWrite(19,LOW),digitalWrite(18,LOW),digitalWrite(16,LOW),digitalWrite(4,HIGH),digitalWrite(0,LOW);
  delay(1000);

  digitalWrite(23,LOW),digitalWrite(19,LOW),digitalWrite(18,HIGH),digitalWrite(16,HIGH),digitalWrite(4,LOW),digitalWrite(0,LOW);
  delay(1000);
  digitalWrite(23,LOW),digitalWrite(19,LOW),digitalWrite(18,LOW),digitalWrite(16,LOW),digitalWrite(4,LOW),digitalWrite(0,LOW);
  delay(1000);
  digitalWrite(23,LOW),digitalWrite(19,LOW),digitalWrite(18,HIGH),digitalWrite(16,HIGH),digitalWrite(4,LOW),digitalWrite(0,LOW);
  delay(1000);
  digitalWrite(23,LOW),digitalWrite(19,LOW),digitalWrite(18,LOW),digitalWrite(16,LOW),digitalWrite(4,LOW),digitalWrite(0,LOW);
  delay(1000);
  digitalWrite(23,LOW),digitalWrite(19,LOW),digitalWrite(18,HIGH),digitalWrite(16,HIGH),digitalWrite(4,LOW),digitalWrite(0,LOW);
  delay(1000);
  
  digitalWrite(23,LOW),digitalWrite(19,HIGH),digitalWrite(18,LOW),digitalWrite(16,HIGH),digitalWrite(4,LOW),digitalWrite(0,LOW);
  delay(1000);
  digitalWrite(23,LOW),digitalWrite(19,LOW),digitalWrite(18,LOW),digitalWrite(16,LOW),digitalWrite(4,LOW),digitalWrite(0,LOW);
  delay(1000);
  digitalWrite(23,LOW),digitalWrite(19,HIGH),digitalWrite(18,LOW),digitalWrite(16,HIGH),digitalWrite(4,LOW),digitalWrite(0,LOW);
  delay(1000);
}

  
}
  


