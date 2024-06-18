int ledPin=3;
int ledPin1=4;
int ledPin2=5;
void setup() {
  pinMode (ledPin, OUTPUT);
  pinMode (ledPin1, OUTPUT);
  pinMode (ledPin2, OUTPUT);
}

void loop() {

  for(byte x=0; x<256;x++){
     analogWrite(ledPin,x);
  delay(100);
  }

  for(byte x=255; x>=0;x--){
     analogWrite(ledPin,x);
  delay(100);
  }
 
 
  

}
