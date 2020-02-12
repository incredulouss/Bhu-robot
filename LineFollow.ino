#define ALIGN_DELAY 150
void lineFollowing(int turnDir)
{
  ////////*********************************left turn ******************************///////////////////////
  if (turnDir == 0)
  {
    receive();
    calculateError();
    if (q == 111111)
    {
      inch(inchmove);
      if (q == 111111)
      { stopp();
      //  ledIndicator(2000,3,blueLed);
        stopp();
        delay(5000);
      }
      else while (digitalVal[1] == 0)
        { receive();
          extremeleft(turnSpeed, Linemins);
        }
    }
    if ((digitalVal[0] == 1 && digitalVal[2] == 1) || (digitalVal[0] == 1 && digitalVal[3] == 1))
    { int flag = SmallInchLeft();

      if (flag == 1 || flag == 2)
      { while (digitalVal[1] == 0)
        { receive();
          extremeleft(turnSpeed, Linemins);
        }
        allign();
      }

    } else if (q == 0)
    {
   
//       {receive();
      extremeright(Linemaxs, Linemins);
    }
    else pid();

  }





  ////////*********************************** Right turn *************************?////////////////////////
  if (turnDir == 1)
  {
    receive();
    calculateError();
    if (q == 111111)
    {
      inch(inchmove);
      if (q == 111111)
      { stopp();
        delay(2000);
      }
      else while (digitalVal[4] == 0)
        { receive();
          extremeright(turnSpeed, Linemins);
        }}
     else if ((digitalVal[5] == 1 && digitalVal[3] == 1) || (digitalVal[5] == 1 && digitalVal[2] == 1))
      { int flag = SmallInchRight();
        if (flag == 4 || flag == 2 || flag == 3)
        { while (digitalVal[4] == 0)
          { receive();
            extremeright(turnSpeed, Linemins);
          }
        }
      }

      else if (q == 0)
        extremeleft(Linemaxs, Linemins);

      else pid();

    }
  
}

void allign()
{
  unsigned long d=millis();
  while((millis()-d)<ALIGN_DELAY)
  {
    receive();
    calculateError();
    pid();
  }
}

