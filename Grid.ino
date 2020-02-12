/////////////////////////////////////////////////////////////
////////////////////***************** grid *****************************************/////////////////////////////
///////////////////////////////////////////////////////////
#define ALIGN_DELAY 200
int color;
int x[5];
int y[5];
int ii =0;
int gridVal=4;
int whitecount = 0;
int counter =0;
int tempp =0;
int count =0;
int counterSub = 0;
int location[4];
int poss =0; 
void grid()
{
  receive();
  calculateError();
if(counter ==(gridVal*gridVal))
{
 
stopp();
//ledIndicator(2000,poss,blueLed);
//ledIndicator(4000,poss,redLed);
}

if((digitalVal[0]==1&&digitalVal[2]==1)||(digitalVal[0]==1&&digitalVal[3]==1)||(digitalVal[5]==1&&digitalVal[3]==1)||(digitalVal[5]==1&&digitalVal[2]==1)||(digitalVal[5]==1&&digitalVal[0]==1)||(q==111111))
{
    if( junction())
    {poss+=1;
    x[ii] = counter;
    }
    ii+=0;
  inch(gridInch);
  counter+=1;
//  ledIndicator(10,1,blueLed);
  

    if((counter%gridVal==0)||(counter%gridVal==1))
     { 

             tempp = (counter/gridVal);
                if(tempp%2==0)
      {
       
        while(digitalVal[4]==0)
        {receive();
          extremeright(turnSpeed,Linemins); 
       }}
      // align();}
      else {
        while(digitalVal[1]==0)
        {receive();
        extremeleft(turnSpeed,Linemins);
     }}
     }
}
else pid();
}

boolean junction()
{
inch(5);
if((digitalVal[0]==1&&digitalVal[5]==1&&digitalVal[2]==0)||(digitalVal[0]==1&&digitalVal[5]==1&&digitalVal[3]==0)||(digitalVal[4]==1&&digitalVal[0]==1&&digitalVal[2]==0))
return true;
else return false;
  
}

 void align()
{
  unsigned long d=millis();
  while((millis()-d)<ALIGN_DELAY)
  {
    receive();
    calculateError();
    pid();
  }
}

