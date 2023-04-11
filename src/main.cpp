#include <Arduino.h>
#include <string.h>

int pinA = 34;
int pinD = 35;
void setup()
{
  // put your setup code here, to run once:
  Serial.begin(115200); // viteza de transmitere pe seriala
  pinMode(pinA, INPUT);
  pinMode(pinD, INPUT);
}

void loop()
{
  // put your main code here, to run repeatedly:
  int analogv = analogRead(pinA);
  int digitalv = digitalRead(pinD);
  Serial.println(analogv);
  Serial.println(digitalv);
  delay(1000);
}