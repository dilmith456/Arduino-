int analogInPin=A0;
int sensorValue=0;
int outvalue=0;
void setup() {
 Serial.begin(9600);

}

void loop() {
  sensorValue = analogRead(analogInPin);
  Serial.print("Analog Sensor = ");
  Serial.println(sensorValue);
  outvalue=map(sensorValue, 0,1023,0,5);
  Serial.print("Real out = " );
  Serial.print(outvalue );
  Serial.println("V" );
  
  
  delay(1000);

}
