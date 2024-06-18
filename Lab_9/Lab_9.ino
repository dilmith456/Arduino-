int ledPin1=3;
char svalue=0;

void setup() {
 Serial.begin(9600);
 pinMode(ledPin1,OUTPUT);
}

void loop() {
  if (Serial.available()){
    svalue=Serial.read();
      if (svalue=='A'){
        digitalWrite(ledPin1,HIGH);
        delay(100);
      }

      if(svalue=='B'){
        digitalWrite(ledPin1,LOW);
        delay(200);
      }
  }
}
