 int sensorValue = 0;
 int outputValue = 0;
void setup() {
  
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue ++;
  outputValue =outputValue + 10;
Serial.print("sensor = ");
Serial.print(sensorValue);
Serial.print("\t output = ");
Serial.println(outputValue);
delay(1000);
}
