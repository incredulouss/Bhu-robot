/////////motion functions///
////////***********************/// TOTAL 8 MOTION FUNCTIONS
void inch(int inch)
{
  forward(Linemaxs, Linemins);
  delay(inch);
  receive();
  calculateError();
}
int SmallInchLeft()
{

  int flagL = 0;   /// Left
  int flagW = 0;    /// all white
  int flagS = 0; ///// straight line
  int flagR = 0;///right
  int flagB = 0;
  for (int i = 0; i < smallInch; i++)
  {
    forward(Linemaxs, Linemins);
    receive();
    calculateError();
    if (q == 111111)
      flagB++;
    else if (digitalVal[0] == 1)
      flagL ++;


    else  if (q == 0)
      flagW ++;
    else if (digitalVal[0] == 0 && digitalVal[5] == 0)
      flagS ++;
    else if ( digitalVal[5] == 1)
      flagR ++;

  }
  //  forward(Linemaxs,Linemins);
  //  delay(100);

  if (flagL > 0)
    return 1;
  else if (flagB > 0)
    return 5;
  else if (flagW > 0)
    return 2;
  else if (flagS > 0)
    return 3;
  else if (flagR > 0)
    return 4;


} int SmallInchRight()
{

  int flagL = 0;   /// Left
  int flagW = 0;    /// all white
  int flagS = 0; ///// straight line
  int flagR = 0;   ///right
  int flagB = 0;
  for (int i = 0; i < smallInch; i++)
  {
    forward(Linemaxs, Linemins);
    receive();
    calculateError();
    if (digitalVal[0] == 1 && digitalVal[5] == 1 && digitalVal[2] == 1 && digitalVal[4] == 1)
      flagB++;
    else  if (digitalVal[5] == 1)
      flagR ++;
    else  if (digitalVal[0] == 0 && digitalVal[5] == 0)
      flagS ++;
    else  if (q == 0)
      flagW ++;
    else  if (digitalVal[0] == 1)
      flagL ++;

  }
  receive();
  calculateError();
  if (flagR > 0)
    return 4;

  else if (flagW > 0)
    return 2;
  else if (flagS > 0)
    return 3;
  else if (flagB > 0)
    return 5;
  else if (flagL > 0)
    return 1;


  /////////////* flag is 0 for (straight and left)  */////////////////////
  /////////////* flag is 1 for (straight and right)  */////////////////////
  /////////////* flag is 2 for (all black)  */////////////////////
  ///////////////*flag is 3 for (all white)*////////////////////
}
void milliInch(int a)
{
forward(Linemaxs,Linemins);
delay(a);


}

