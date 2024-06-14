// C++ code
//
byte sw=3;
void setup()
{
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  
  pinMode(sw,INPUT_PULLUP);
}

void loop()
{
  if(digitalRead(sw)==LOW){
    
    digitalWrite(1, HIGH);
  delay(1000); 
    
 /* digitalWrite(2, HIGH);
  delay(1000);
           
  digitalWrite(4, HIGH);
  delay(1000);
   
      digitalWrite(5, HIGH);
  delay(1000);
  digitalWrite(6, HIGH);
  delay(1000);*/
  }
  
  else{
  //digitalWrite(1, LOW);
  //delay(1000);
  digitalWrite(2, HIGH);
  delay(1000);
 /* digitalWrite(4, LOW);
  delay(1000);
  digitalWrite(5, LOW);
  delay(1000);
  digitalWrite(6, LOW);
  delay(1000);*/
 }
}
