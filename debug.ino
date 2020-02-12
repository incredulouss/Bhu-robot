void printVal()
{
  for (int i = 0; i < 6; i++)
  {

     Serial.print(sen[i]);
    Serial.print(",");


//   Serial.print(digitalVal[i]);
//    Serial.print(",");
  }
  //    Serial.print(setPos);
  //     Serial.print(",");
  //  Serial.print(lineDis);
  //Serial.print(digitalVal[i]);
  //Serial.print(",");

  Serial.println();
}
void printF()
{
  for (int i = 0; i < 6; i++)
  {
   
    Serial.print(senVal[i]);
   // Serial.print("\t");
  }
  Serial.println();
  
}

