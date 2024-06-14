int tpin = 12;
int echpin = 13;
long time_du, dist =0;
int LED=5;

void setup() {
Serial.begin(9600);
pinMode(tpin,OUTPUT);
pinMode(echpin,INPUT);
pinMode(LED,OUTPUT);



}
void ultra (){
  digitalWrite(tpin,LOW);
  delayMicroseconds(2);
  digitalWrite(tpin,HIGH);
  delayMicroseconds(7.5);
  digitalWrite(tpin,LOW);
  time_du=pulseIn (echpin,HIGH);
  dist= time_du/29/2;
}

void ledon(){
   if (dist<10){
    digitalWrite(LED,HIGH);
   }
   else{
    digitalWrite(LED,LOW);
   }
}

void loop() {
  ultra ();

  Serial.print("Distance =");
  Serial.print(dist);
   Serial.println("cm");
   ledon();
   delay(100);

  

}
