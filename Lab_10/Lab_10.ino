#include <Arduino.h>
#include <TM1637Display.h>

char xx=0;
void setup(){
  Serial.begin(9600);
}

void loop(){
  if(Serial.available()){
    xx=Serial.read();
    Serial.print("out = ");
    Serial.println(xx);
    delay(1000);
  }
}

