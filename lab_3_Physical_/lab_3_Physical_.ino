int LedPin=13;
int sw=2;
void setup() {
  pinMode(LedPin,OUTPUT);
  pinMode(sw,INPUT_PULLUP);
}

void loop() {
  if(digitalRead(sw)==0){
    digitalWrite(LedPin,HIGH);
    delay(1000);
  }
 else{
  digitalWrite(LedPin,LOW);
  delay(1000);
 }
 

}
