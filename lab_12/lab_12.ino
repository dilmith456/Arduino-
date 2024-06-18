#include<Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;


byte s_pin1=5;
byte s_pin2=6;
byte s_pin3=10;


void setup() {
  // put your setup code here, to run once:
  servo1.attach(s_pin1);
  servo2.attach(s_pin2);
  servo3.attach(s_pin3);
  
  servo1.write(5);
  servo2.write(90);
  servo3.write(175);
  
  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(byte i=61; i<110; i++){
    servo1.write(i);
    delay(50);
  }

  for(byte i=111; i>1; i--){
    servo1.write(i);
    delay(50);
  }
}

