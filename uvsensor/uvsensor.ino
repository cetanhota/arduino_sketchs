void setup()
{
  Serial.begin(9600);
}

void loop()
{
  float sensorVoltage;
  float sensorValue;

  sensorValue = analogRead(A1);
  sensorVoltage = sensorValue/1024*3.3;
  Serial.print("sensor reading = ");
  Serial.println(sensorValue);
  Serial.println(\n);
  Serial.print("sensor voltage = ");
  Serial.print(sensorVoltage);
  Serial.println(" V");
  delay(1000);
}
