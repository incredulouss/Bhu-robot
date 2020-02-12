#define ERROR_THRESHOLD 100
void IRinIT()
{
    for (int i = 0; i < 6; i++)
    pinMode(sensor[i], INPUT);
}
void receive()
{
  for (int i = 0; i < 6; i++) {
    senVal[i] = analogRead(sensor[i]);
    sen[i] = analogRead(sensor[i]);
    senVal[i]=constrain(senVal[i],minVal[i],maxVal[i]);
    threshold[i] = (maxVal[i] + minVal[i]) / 2;
    normaliseVal[i] = map(senVal[i], maxVal[i], minVal[i], 1000, 0);
    normaliseVal[i]=(normaliseVal[i]>ERROR_THRESHOLD)?normaliseVal[i]:0;
    if (normaliseVal[i] > threshold[i])
      digitalVal[i] = 1;
    else digitalVal[i] = 0;
  }

}
void calculateError()
{
  q = ((100000 * digitalVal[0]) + (10000 * digitalVal[1]) + (1000 * digitalVal[2]) + (100 * digitalVal[3]) + (10 * digitalVal[4]) + (1 * digitalVal[5]));
  if (q == 1)
    setPos = 5;
  if (q == 11)
    setPos = 4;
  if (q == 10)
    setPos = 3;
  if (q == 110)
    setPos = 2;
  if (q == 100)
    setPos = 1;
  if (q == 1100)
    setPos = 0;
  if (q == 1000)
    setPos = -1;
  if (q == 11000)
    setPos = -2;
  if (q == 10000)
    setPos = -3;
  if (q == 110000)
    setPos = -4;
  if (q == 100000)
    setPos = -5;
  //Serial.print(setPos);
  //Serial.print(',');
  float num = (-150 * (senVal[0] - senVal[5])) + (-91.44 * (senVal[1] - senVal[4])) + (-30.48 * (senVal[2] - senVal[3]));
  float den = (senVal[0] + senVal[1] + senVal[2] + senVal[3] + senVal[4] + senVal[5]);
  lineDis = int((num / den)) ;
  error = -lineDis+9 ;
  Serial.println(error);
}
