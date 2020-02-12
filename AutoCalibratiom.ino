void autoCalibrate()
{
  for(int i=0;i<400;i++)
  {
    if(i<100 || i>300)
      extremeright(180, 0);
    else
      extremeleft(180, 0);

    calibrate();
    delay(7);
  }
  stopp();
  delay(4000);
}

void calibrate()
{
  for(int i=0;i<6;i++)
  {
    int sensorValue=analogRead(sensor[i]);
    if(sensorValue<minVal[i])
      minVal[i]=sensorValue;
    if(sensorValue>maxVal[i])
      maxVal[i]=sensorValue;
  }
}
void printCalibrated()
{
  Serial.print("max- ");
  for(int i=0;i<6;i++)
  {
    Serial.print(maxVal[i]);
    Serial.print("\t");
  }
  Serial.println("\n");
  Serial.print("min- ");
  for(int i=0;i<6;i++)
  {
    Serial.print(minVal[i]);
    Serial.print("\t");
  }
  Serial.println("\n");
  delay(1000);
}

