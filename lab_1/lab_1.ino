 byte sw = 3;
void setup() {
  // put your setup code here, to run once:
  pinMode(3,OUTPUT);
  //pinMode(sw, INPUT);
  pinMode(sw, INPUT_PULLUP);
 
  
}

void loop() {
  // put your main code here, to run repeatedly:

  if(digitalRead(sw)==LOW){
    digitalWrite(3,HIGH);
  delay(1000);
  }
  else{
    
  }
  
  
  digitalWrite(3,LOW);
  delay(1000);
  
}
